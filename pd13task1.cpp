 #include<iostream>
 #include<fstream>
 using namespace std;
 void readData(int &idx,int age[],string name[]);
 string getfield(string record,int field);
 main()
 {
    int age[100];
    string name[100];
    fstream data;
    int idx=0;
    readData(idx,age,name);
    for(int i=0;i<idx;i++)
    {
    if(age[i]%2==0)
    {
        cout<<"##############"<<endl;
        cout<<"#"<<age[i]<<" HB "<<name[i]<<"! "<<age[i]<<"#"<<endl;
        cout<<"##############"<<endl;
    }
    else
    {
        cout<<"**************"<<endl;
        cout<<"*"<<age[i]<<" HB "<<name[i]<<"! "<<age[i]<<"*"<<endl;
        cout<<"**************"<<endl;
    }
    }
 }
 void readData(int &idx,int age[],string name[])
 {
    string record;
    fstream data;
    data.open("names.txt",ios::in);
    while(!(data.eof()))
    {
        getline(data,record);
        name[idx]=getfield(record,1);
        age[idx]=stoi(getfield(record,2));
        idx=idx+1;
    }
 }
 string getfield(string record,int field)
 {
    int comma=1;
    string item;
    for(int x=0;x<record.length();x++)
    {
        if (record[x]==',')
        {
            comma=comma+1;
        }
        else if(comma==field)
        {
        item=item+record[x];
        }
    }
    return item;
 }