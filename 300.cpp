#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int T,i,temp;
    cin>>T;
    int A[T],B[T];
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&A[i],&B[i]);
    }
    for(i=0;i<T;i++)
    {
        temp=A[i];
        A[i]=B[i];
        B[i]=temp;
    }
    for(i=0;i<T;i++)
    {
        printf("%d %d\n",A[i],B[i]);
    }

    return 0;
}