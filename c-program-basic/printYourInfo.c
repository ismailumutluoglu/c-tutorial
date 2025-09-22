#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char name[100];

    printf("What is your name : ");
    scanf("%s", name);

    printf("How old are you ?");
    scanf("%d", &age);

    printf("My name is : %s\tMy age is : %d", name, age);
    return 0;
}