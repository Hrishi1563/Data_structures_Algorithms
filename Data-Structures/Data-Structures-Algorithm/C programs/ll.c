#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
 struct node *next;
} *temp;
void create(int A[],int n)
{
    
    temp->data=A[n];
    temp->next=0;
    struct node *q=(struct node*) malloc(sizeof(struct node));
     if(n<4)
    {
    	temp->next=q;
    	temp=q;
        create(A,n+1);
    }
    else
    {
    	temp->next=0;
	}
}
    
  void display(struct node *n)
  {
     while(n!=0)
     {
     	printf("Hello");
         printf("%d",n->data);
         n=n->next;
     }
  }
    

int main(void) {
    int A[]={3,5,7,0};
	struct node *p;
	p=(struct node*) malloc(sizeof(struct node));

	temp = p;
	create(A,0);
	display(p);
	return 0;
}


