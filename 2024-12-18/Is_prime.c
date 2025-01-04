#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if (n<2)
    {
        printf("Is not a prime");
    }
    else if (n<4)
    {
        printf("Is a prime");
    }
    else if (n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0)
    {
        printf("Is not a prime");
    }
    else{
        printf("Is a prime");
    }
    
    return 0;
}