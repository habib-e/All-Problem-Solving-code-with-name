#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int col,i,j;
    string str;
    cin>>col;
    while(col)
    {
        getline(cin,str);
        getline(cin,str);
        int row=str.length()/col;
        char mat[row][col];
        int k=0;
        for(i=0;i<row;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<col;j++)
                    mat[i][j]=str[k++];
            }
            else
            {
                for(j=col-1;j>=0;j--)
                    mat[i][j]=str[k++];
            }
        }
        for(j=0;j<col;j++)
        {
            for(i=0;i<row;i++)
            {
                cout<<mat[i][j];
            }
        }
        cout<<endl;
        cin>>col;
    }

    return 0;
}
