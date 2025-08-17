#include<iostream>
#include<fstream>
using namespace std;

void interview()
{
    cout<<"\n-----Interview Process-----\n";
    cout<<"\nArrange Candidate Meeting\n";
    cout<<"\nConduct pre-interview\n";
    cout<<"\nSetup interview questions\n";
    cout<<"\nConduct interview\n";
    postInterview();
}

void hiringProcess()
{
    cout<<"\n-----Hiring Process-----\n";
    cout<<"\nRegular hiring process? (yes/no)\n";
    string hir;
    cin>>hir;
    if(hir=="yes")
    {
        cout<<"\nPost job manually\n";
        cout<<"\nAny suitable candidate? (yes/no)\n";
        string suit;
        cin>>suit;
        if(suit=="yes")
        {
            interview();
        }
        else
        {
            cout<<"no";
            // reviewCandidate();
        }
    }
    else
    {
        cout<<"\nSpecial Hiring Process\n";
        // cout<<"\nDescribe the special process:\n";
        // string spec;
        // getline(cin,spec);
        // fstream sp("specialProcess.txt", ios::app | ios::out);
        // sp<<spec<<endl;
        // sp.close();
        cout<<"\nYou can check out the special hiring process in 'specialProcess.txt' file\n";

    }
}

void description()
{
    cout<<"\n-----Job Description-----\n";
    fstream jd("jd.txt", ios::app | ios::out);
    string des;
    cout<<"\nDescribe the job description:\n";
    getline(cin,des);
    jd<<des<<endl;
    jd.close();
    cout<<"\nYou can now check out the job description in 'jd.txt' file\n";
    cout<<"\nSend crew request to HR\n";
    cout<<"\nDetermine Classifications\n";
}

int main()
{
    cout<<"-----Employee Hiring Process-----\n";
    description();
    hiringProcess();
    cout<<"\n------End of Hiring Process-----\n";
}