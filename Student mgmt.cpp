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
void Delete(int rollnumber)
{
    struct Student * temp1 = head;
    struct Student * temp2 = head; 
    while(temp1!=NULL){
        
        if(temp1->rollnumber==rollnumber){
            
            printf("Record with roll number %d Found !!!\n", rollnumber);
            
            if(temp1==temp2){
                // this condition will run if
                // the record that we need to delete is the first node
                // of the linked list
                head = head->next;
                free(temp1);
            }
            else{
                // temp1 is the node we need to delete
                // temp2 is the node previous to temp1
                temp2->next = temp1->next;
                free(temp1); 
            }
            
            printf("Record Successfully Deleted !!!\n");
            return;
            
        }
        temp2 = temp1;
        temp1 = temp1->next;
        
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
    
}
int main()
{
    
return 0;	
}
