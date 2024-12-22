#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    char data[30];
    printf("enter anything:");
    scanf("%d,%c",num,data);
    if ((num%10)>0)
    {
        printf("this is a integer");

    }
    else
    {
        printf("this is a string");
    }
    


    return 0;
}
