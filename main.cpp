#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>
#include<algorithm>
#include <stdio.h>
int main()
{
    string sent;
    int AI=0;
    int BD=0;
    int CG=0;
    int DWDM=0;
    int total=0;
    ifstream fin;
    string t;
    fin.open("detail.txt");
    while(fin)
    {
        getline(fin, t);
        total++;
    }
    fin.close();
    fin.open("detail.txt");
    string str1 = "CS-3011";
    while(fin)
    {
        fin>>sent;
        size_t found = sent.find(str1);
        if (found != string::npos)
        AI++;
    }
    fin.close();
    fin.open("detail.txt");
    str1 = "CC-3021";
    while(fin)
    {
        fin>>sent;
        size_t found = sent.find(str1);
        if (found != string::npos)
        CG++;
    }
    fin.close();
    fin.open("detail.txt");
    str1 = "CC-3021";
    str1 = "CS-3032";
    while(fin)
    {
        fin>>sent;
        size_t found = sent.find(str1);
        if (found != string::npos)
        BD++;
    }
    fin.close();
    fin.open("detail.txt");
    str1 = "CC-3021";
    str1 = "IT-3031";
    while(fin)
    {
        fin>>sent;
        size_t found = sent.find(str1);
        if (found != string::npos)
        DWDM++;
    }
    cout<<endl;
cout<<"-------------------------------RESULTS AND STATISTICS-------------------------------"<<endl;
cout<<endl;
cout<<"------------------------------------------------------------------------------------"<<endl;

    cout<<"TOTAL STUDENTS: "<<total<<endl;
cout<<"------------------------------------------------------------------------------------"<<endl;

    cout<<"ARTIFICIAL INTELLIGENCE: "<<AI<<" ("<<(AI*100)/total<<"%)"<<endl;
    cout<<"CRYPTOGRAPHY: "<<CG<<" ("<<(CG*100)/total<<"%)"<<endl;
    cout<<"BIG DATA: "<<BD<<" ("<<(BD*100)/total<<"%)"<<endl;
    cout<<"DATA MINING AND WAREHOUSING: "<<DWDM<<" ("<<(DWDM*100)/total<<"%)"<<endl;
cout<<"------------------------------------------------------------------------------------"<<endl;
    return 0;
}
