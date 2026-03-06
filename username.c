#include<stdio.h>
#include<string.h>
int main()
{
    char username[5];
    printf("Enter username: ");
    scanf("%s", username);
    if(strlen(username)<=5)
        printf("Valid Username\n");
    else
        printf("Username must contain atleast 5 characters\n");
    return 0;
}