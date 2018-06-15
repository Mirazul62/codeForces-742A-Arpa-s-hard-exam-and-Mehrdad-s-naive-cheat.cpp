#include<bits/stdc++.h>
using namespace std;
int module(int a,char b[])
{
     int mod=0;
     for(int i=0;i<strlen(b);i++)

         mod=(mod*10+b[i]-'0')%a;
         return mod;

}
int lastDigit(char a[],char b[])
{
    int len_a=strlen(a);
    int len_b=strlen(b);
    if(len_b==1 && b[0]=='0')
        return 1;
    int exp;
    exp=(module(4,b)==0)? 4:module(4,b);
    int res=pow(a[len_a-1]-'0',exp);
    return res%10;
}
int main()
{
    char a[]="1378",b[100000];
    cin>>b;
    cout<<lastDigit(a,b);
}
