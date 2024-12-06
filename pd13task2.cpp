#include<iostream>
#include<fstream>
using namespace std;
void readData(string &alphabets);
void missing (string);
main()
{
    string alphabets;
    missing(alphabets);
}
void missing(string alphabets)
{
    readData(alphabets);
    for (int i = 97; i <= 122; i++)
    {
        char ch = i;
        bool found = false;
        for (int j = 0; alphabets[j] != '\0'; j++)
        {
            if (ch == alphabets[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << ch;
        }
    }

    cout << endl;
}

void readData(string &alphabets)
 {
    string record;
    fstream data;
    data.open("names.txt",ios::in);
    while(!(data.eof()))
    {
        getline(data,record);
        alphabets=record;    
    }
 }