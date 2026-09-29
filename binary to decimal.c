#include<stdio.h>
int main()
{
    int decimal=0,base=1,rem,binary;
    printf("enter the binary number :");
    scanf("%d",&binary);

    while(binary>0)
    {

        rem=binary%10;
        decimal=decimal+rem*base;
        base=base*2;
        binary=binary/10;
    }

    printf("decimal number is %d",decimal);
    return 0;
}

