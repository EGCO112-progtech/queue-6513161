#include <stdio.h>
//#ifndef Node_h
//#define Node_h

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){
  new_node->order_number=x;
  new_node->qty=y;
  new_node->nextPtr=NULL;
  if(q->headPtr==NULL) q->headPtr=new_node;
  else (q->tailPtr)->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
  /*Finish enqueue */
 }
}

int calculate(NodePtr q,int customer_number){
  int cash,price;
  printf("Customer no: %d\n",customer_number);
  switch(q->order_number){
    case 1: printf("Ramen\nYou have to pay %d\n",price=200*q->qty); break;
    case 2: printf("Somtum\nYou have to pay %d\n",price=50*q->qty); break;
    case 3: printf("Fried chicken\nYou have to pay %d\n",price=100*q->qty); break;
    default: printf("No food available.\n"); goto end;
      }
  do{
    printf(":Cash: ");
    scanf("%d",&cash);
  }while(cash < price);
  if(cash==price) printf("Thank You\n");
  else {
    printf("Thank you\n");
    printf("Change is: %d\n",cash-price);
    }
  end:
  return 0;
  }

int dequeue_struct(Queue *q,int customer_number){
   NodePtr t=q->headPtr;
  if(customer_number!=999)
  calculate(t,customer_number);
  if(t){
     q->headPtr=t->nextPtr;
     if(q->headPtr==NULL) q->tailPtr=NULL;
     q->size--;
     free(t);
     return 0;
   }
   printf("Empty queue");
   return 0;
}

