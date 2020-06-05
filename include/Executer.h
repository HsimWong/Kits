#ifndef EXECUTER_H
#define EXECUTER_H


class Executer
{
    public:
        Executer();
        virtual ~Executer();

    protected:
        //Waiting Deploying Feedback Error
        string State;

        //��֤
        void Login(string username,string password);
        void Login(string username,string password,string email);
        void Login(string username,string password,string email,string serveraddress);


        //��ѯ
        //��ѯ����
        string ListContainers(bool all,int limit,int Size);
        //��ѯ�������еĽ���
        string GetRunningContainers(string id,string ps_args);

        //����
        //�½�Container
        string StartContainer(string id);

        //�޸�
        //����Container
        string UpdateContainer(string id);
        //����Container
        string RestartContainer(string id,int t);
        //��ͣContainer
        string PauseContainer(string id);
        //�ָ�Container
        string UnpauseContainer(string id);


        //ɾ��
        //ֹͣ��ɾ��Container
        string StopContainer(string id,int t);
        //ɾ��Container
        string KillContainer(string id);

    private:
};

#endif // EXECUTER_H
