#include <bits/stdc++.h>
using namespace std;
void printReverse(string str)
{
    int i;
    string word="";
    for (i=0; i < str.length(); i++)
    {
        if (str[i] != ' ')
            word += str[i];
        else
        {
            reverse(word.begin(), word.end());
            cout << word << " ";
            word = "";
        }
    }
    if (str[i] != '\0')
        word += str[i];
    else
    {
        reverse(word.begin(),word.end());
        cout <<word<< " ";
    }

}

int main()
{
    string str;
    while(cin>>str)
    {
        if(str[i])
        printReverse(str);
    }
    return 0;
}
