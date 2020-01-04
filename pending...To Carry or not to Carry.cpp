#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<iso646.h>
using namespace std;
int main()
{
    int no,no1,j=1,var,var2,re,re1,binary=0,binary1=0,i=1;
    int n1=0,n2=0,sum=0,carry=0,new_num=0;
    while(scanf("%d %d",&no,&no1)!=EOF)
    {
        var=no;
        var2=no1;
        while(no!=0)
        {
            re=no%2;
            no=no/2;
            binary=binary+(re*i);
            i=i*10;
        }
        while(no1!=0)
        {
            re1=no1%2;
            no1=no1/2;
            binary1=binary1+(re1*j);
            j=j*10;
        }
        n1=binary;
        n2=binary1;
        int k=0;
        while((n1!=0) || (n2!=0))
        {
            if((n1%10==0)&&(n2%10==0) && (carry==0))
            {
                sum=0;
                carry=0;
            }
            else if((n1%10==0)&&(n2%10==1) && (carry==0))
            {
                sum=1;
                carry=0;
            }
            else if((n1%10==1) && (n2%10==0)&& (carry==0))
            {
                sum=1;
                carry=0;
            }
            else if((n1%10==1) && (n2%10==1)&& (carry==0))
            {
                sum=0;
                carry=1;
            }
            else if((n1%10==0) && (n2%10==0)&& (carry==1))
            {
                sum=1;
                carry=0;
            }
            else if((n1%10==0) && (n2%10==1)&& (carry==1))
            {
                sum=0;
                carry=1;
            }
            else if((n1%10==1) && (n2%10==0)&& (carry==1))
            {
                sum=0;
                carry=1;
            }
            else if((n1%10==1) && (n2%10==1)&& (carry==1))
            {
                sum=1;
                carry=1;
            }
            new_num+=sum+pow(10,k);
            k++;
            n1/=10;
            n2/=10;

        }
        if(carry==1)
        {
            new_num+=pow(10,k);
        }


        int N,bin,dec=0,Pow=1,Rem;
        N=new_num;
        bin=N;
        while(N>0)
        {
            Rem=N%10;
            dec+=Rem*Pow;
            N/=10;
            Pow*=2;
        }
        cout<<dec<<endl;
        var=var2=re=no=binary=re1=no1=binary1=n1=n2=new_num=carry=sum=0;
        N=dec=new_num=bin=Pow=Rem=0;
//        var=0;
//        var2=0;
//        re=0;
//        no=0;
//        binary=0;
//        re1=0;
//        no1=0;
//        binary1=0;
//        n1=0;
//        n2=0;
//        new_num=0;
//        carry=0;
//        sum=0;
    }

    return 0;
}
