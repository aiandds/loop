#include<stdio.h>

int main (void)
{   int N, sum, num, aver;
    sum = 0;

    //get num
    printf("Enter the N value:- ");
    scanf("%d",&N);

    //get num upto N value and sum it
    for(int n = 0; n < N; n++ )
    {   printf("Enter the number:- ");
        scanf("%d",&num);
        sum += num;
    }

    //average 
    aver = sum / N;

    //print the value
    printf("The sum = %d\n",sum);
    printf("The average = %d\n",aver);
}
