#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
   return intArray[front];
}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == MAX;
}

int size() {
   return itemCount;
}  

void enqueue(int data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
}

int dequeue() {
   int data = intArray[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}

int main() {

   enqueue(3);
   enqueue(5);
   enqueue(9);
   enqueue(1);
   enqueue(12);
 
   insert(15);
 
   if(isFull()){
      printf("Queue is full!\n");   
   }

   // remove one item 
   int num = dequeue();
	
   printf("Element removed: %d\n",num);
 
   enqueue(16);

 
   // As queue is full, elements will not be inserted. 
   enqueue(17);
   enqueue(18);
 
   printf("Element at front: %d\n",peek());

   printf("----------------------\n");
   printf("index : 5 4 3 2  1  0\n");
   printf("----------------------\n");
   printf("Queue:  ");
	
   while(!isEmpty()) {
      int n = dequeue();           
      printf("%d ",n);
   }   
}
