#include <bits/stdc++.h>
using namespace std;
void grade(int m, int f, int r)
{
    if (m == -1 || f == -1)
    {
        printf("F");
        return;
    }
    int sum = m + f;
    //     If the total score in mid-term and final-term is greater than or equal to 80, grade is A.
    // If the total score in mid-term and final-term is greater than or equal to 65 and less than 80, grade is B.
    // If the total score in mid-term and final-term is greater than or equal to 50 and less than 65, grade is C.
    // If the total score in mid-term and final-term is greater than or equal to 30 and less than 50, grade is D.
    // However, if the score of the make-up examination is greater than or equal to 50, the grade will be C.
    // If the total score in mid-term and final-term is less than 30, grade is F.
    if (sum >= 80)
        printf("A");
    if (sum < 80 && sum >= 65)
        printf("B");
    if (sum < 65 && sum >= 50)
        printf("C");
    if (sum < 50 && sum >= 30)
    {
        if (r>=50)printf("C");
        else printf("D");
    }
    if(sum<30) printf("F");
    return;
}

int main()
{
    int T, i, j;
    cin >> T;
    int M[T], F[T], R[T];
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d", &M[i], &F[i], &R[i]);
    }
    for (i = 0; i < T; i++)
    {
        grade(M[i],F[i],R[i]);
        printf("\n");
    }


    return 0;
}