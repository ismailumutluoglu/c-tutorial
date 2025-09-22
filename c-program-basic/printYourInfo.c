#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char name[100];

    printf("How old are you ? ");
    scanf("%d", &age);

    printf("What is your name ?");
    scanf("%s", name);

    printf("Your name is : %s\tYour age is : %d", name, age);
    return 0;
}