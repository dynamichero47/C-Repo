#include<stdio.h>
#include<math.h>
int main()
{
    int ON,RN=0,TN;
    scanf("%d",&ON);
    TN=ON;
    while(TN)
    {
        int cur_digit = TN % 10;
        RN = RN * 10 + cur_digit;
        TN = TN/10;
    }
    if(ON==RN)
    {
    printf("Palindrome");
    }
    else
    {
    printf("Not Palindrome");
    }
}