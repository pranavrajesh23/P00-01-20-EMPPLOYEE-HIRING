#include<iostream>
#include<fstream>
using namespace std;

void description()
{
    cout<<"\n-----Job Description-----\n";
    fstream jd("jd.txt", ios::app | ios::out);
    string des;
    cout<<"\nDescribe the job description:\n";
    getline(cin,des);
    jd<<des<<endl;
    cout<<"\nYou can now check out the job description in 'jd.txt' file\n";
    cout<<"\nSend crew request to HR\n";
    cout<<"\nDetermine Classifications\n";
}

int main()
{
    cout<<"-----Employee Hiring Process-----\n";
    description();
    // hiringProcess();
}