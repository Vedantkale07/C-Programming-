#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct student s1,s2;
    printf("enter the information for s1\n");
    scanf("%d %s %f",&s1.rollno,&s1.name,&s1.marks);
    printf("\nEnter the information of s2\n");
    scanf("%d %s %f",&s2.rollno,&s2.name,&s2.marks);
       printf("___Information of s1 student___\n");
    printf(" RollNO=%d\nName=%s \nMArks=%f\n",s1.rollno,s1.name,s1.marks);
    printf("\n___Information of s2 student___\n");
    printf("RollNO=%d\nName=%s \nMArks=%f\n",s2.rollno,s2.name,s2.marks);

}
