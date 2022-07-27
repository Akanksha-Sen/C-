#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next=NULL;
};
int main()
{
    struct node *start,*two,*three;
    
    start=(struct node*)malloc(sizeof(struct node));   
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    
    start->next=two;
    two->next=three;
    
    start->data=99;
    two->data=100;
    three->data=101;
    three->next=NULL;
    
    printf(start);
    cout<<start<<endl<<two<<endl<<three;
    return 0;
}
