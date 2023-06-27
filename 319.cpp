#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
typedef struct str
{
   char c[100]; // 100 character array
}str;
long long int decimal(string s)
{  
    int i,flag=0,j=0;
    string dec;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='.'){flag=1;continue;}
        if(flag==1)
        {
            dec[j++]=s[i];
        }
        

    }
    long long int num = stoi(dec);
        return num;
}
long long int integer(string s)
{  
    int i,flag=0,j=0;
    long long int num;
    string dec;
    for(i=0;s[i]!='\0';i++)
    {   
        dec[j++]=s[i];
        if(s[i]=='.'){break;;}
       
        

    }
     num = stoi(dec);
        return num;
}

int main()
{   
    int T,i;
    cin>>T;
    int N[T];
    long long int D[T],I[T];
    str Y[T];
    for(i=0;i<T;i++)
    {
        scanf("%d %s",&N[i], &Y[i].c);

    }
    for(i=0;i<T;i++)
    {   
        I[i] = integer(Y[i].c); 
        D[i] = decimal(Y[i].c);
    }
    for(i=0;i<T;i++)
    {
        printf("%lld.%lld\n",N[i]+D[i],N[i]+I[i]);
    }

    
    


    return 0;
}