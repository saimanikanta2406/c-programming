#include <stdio.h>
 struct student{
    char    name[30];
    int     roll;
    float   marks;
};

int main()
{
    struct student  std; 
    struct student  *ptr;     
     
    ptr= &std;                
     
    printf("Enter details of student: ");
    printf("\nName :");       
    gets(ptr->name);
    printf("Roll No :");       
	scanf("%d",&ptr->roll);
    printf("marks :");    
	scanf("%f",&ptr->marks);
    printf("\nEntered details: ");
    printf("\nName:%s \nRollNo: %d \nmarks: %02f\n",ptr->name,ptr->roll,ptr->marks);

    return 0;
}
