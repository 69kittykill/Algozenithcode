#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int T,i;
    cin>>T;
    int A[T],B[T];
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&A[i],&B[i]);
    }
    for(i=0;i<T;i++)
    {
        printf("%d\n",A[i]+B[i]);
    }

    return 0;
}