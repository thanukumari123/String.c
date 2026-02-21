#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("Enter the name:\n");
    scanf("%s", name);

    int size = strlen(name);
    char unq[size+1];   
    int k = 0;

    unq[0] = name[0];
    k++;
    unq[k] = '\0';

    for(int i = 1; i < size; i++)
    {
        int flag = 0;

        for(int j = 0; j < k; j++)
        {
            if(name[i] == unq[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            unq[k] = name[i];
            k++;
            unq[k] = '\0';
        }
    }

    printf("Unique : %s", unq);

    return 0;
}