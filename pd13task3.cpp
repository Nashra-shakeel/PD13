#include <iostream>
using namespace std;
string getMorseCode(char);
string toMorseCode(string &input);
string morseCode[36] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---","-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",};
main() 
{
    string input;
    cout<<"Enter a string:";
    getline(cin,input);
    string result =toMorseCode(input);
    cout<<"Morse Code: "<<result<<endl;
}
string getMorseCode(char ch) 
{
    if (ch >= 'a' && ch <= 'z') {
        ch=ch-('a'-'A');
    }
    if (ch >= 'A' && ch <= 'Z') {
        return morseCode[ch-'A'];
    }
    if (ch==' ') {
        return "-.-.-.-";
    }
    else 
    {
    return "";
    }
}
string toMorseCode(string &input) 
{
    string result;
    for (int i = 0; input[i] != '\0'; i++) 
    {
        string morse=getMorseCode(input[i]);
        result+=morse+" ";
    }
 return result;
}
