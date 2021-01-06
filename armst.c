#include<stdio.h>
#include<math.h>

int main (void)

{
    int num, lst, rem, sum, givn, power, jus, ck_pow;

    //get number
    printf("Enter the number:- ");
    scanf("%d",&num);

    //hold value
    power = 0;
    ck_pow = num;
    givn = num;

    //check how many digit
    while (ck_pow >0)
    {
        jus = ck_pow / 10;
        power++;
        ck_pow = jus;
    }
    
    //sum of the num with power
    while(givn > 0)
    {   
        lst = givn % 10;
        rem = givn / 10;
        givn = rem;
        sum += pow(lst,power);

    }

    // check given value and sum value  
    if (num == sum)
    {
        printf("The given number %d is armstrong\n",num);
        return 0;
    }
    else
    {
        printf("The given number %d is NOT armstrong\n", num);
        return 0;
    }
    
        
    

}