#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Student
{
    int rollnumber;
    char name[100];
    char phone[100];
    float percentage;
    struct Student *next;
    
}* head;
void search(int rollnumber)
{
struct Student * temp = head;
while(temp!=NULL){
if(temp->rollnumber==rollnumber){
printf("Roll Number: %d\n", temp->rollnumber);
printf("Name: %s\n", temp->name);
printf("Phone: %s\n", temp->phone);
printf("Percentage: %0.4f\n", temp->percentage);
return;
}
temp = temp->next;
}
printf("Student with roll number %d is not found !!!\n", rollnumber);
}
int main()
{
    
return 0;	
}
