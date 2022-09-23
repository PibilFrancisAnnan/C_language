#include <stdio.h>

int main()
{
    int number;

    printf("enter a number");
    scanf("%d",&number);//The scanf is used to input information from the console
    printf("cube of number is:%d",number*number*number);

    return 0;
}