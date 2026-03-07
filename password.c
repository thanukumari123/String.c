#include<stdio.h>
#include<string.h>
int main()
{
    char password[50];
    printf("Enter password: ");
    scanf("%s",password);
    if(strlen(password)>=8)
        printf("Strong Password\n");
    else
        printf("Weak Password\n");
    return 0;
}