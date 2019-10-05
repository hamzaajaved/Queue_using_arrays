#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Queue[SIZE];
int Front = 0;
int Rear = 0;
void ENQUEUE(int val);
int DEQUEUE();
void PRINT();
int main(){
	ENQUEUE(1);
	ENQUEUE(2);
	ENQUEUE(3);
	ENQUEUE(4);
	ENQUEUE(5);
	PRINT();
	DEQUEUE();
	DEQUEUE();
	PRINT();
}

void ENQUEUE(int val){
	if(Rear == SIZE){
		printf("***Queue OverFlow***\n");
	}else{
		Queue[Rear++] = val;
	}
}

int DEQUEUE(){
	int val,i;
	if(Front == Rear){
		printf("***Queue is Empty***\n");	
	}else{
			printf("Deleted : %d\n",Queue[Front]);
			val = Queue[Front];
			for(i = 0; i <= Rear; i++){
				Queue[i] = Queue[i+1];
			}
			Rear--;
	}
	return val;
}

void PRINT(){
	printf("The Elements in Queue are: \n");
	if(Front == Rear){
		printf("***Queue is Empty***\n");	
	}else{
		int i;
		for(i = 0; i < Rear; i++){
			printf("%d ",Queue[i]);
		}
	}
	printf("\n");
}
