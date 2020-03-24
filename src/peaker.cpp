#include <vector>
#include <monitor/peaker.h>
float Peaker::get_cpu_workload() {
    std::string cmd = "mpstat | grep all | awk -F \" \" '{print $NF}'";
    std::string msg = fetch_terminal(cmd);
    std::strstream ss;
    ss << msg;
    float ret = 0;
    ss >> ret;
    return ret;
}

std::string Peaker::make_pulse() {
    return "Pulse Sample";
}