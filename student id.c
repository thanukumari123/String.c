#include<stdio.h>
#include<string.h>
struct student
 {
    int id;
    char name[20];
    float marks;
};
int main() 
{
    struct student s;
    s.id =763;
    strcpy(s.name,"radha");
    s.marks=85.5;
    printf("ID:%d\nName:%s\nMarks:%.2f",s.id,s.name,s.marks);
    return 0;
}