#include <iostream>

#include <stdlib.h>

using namespace std;
#define MAX 5
int queue[MAX];
int front = 0;
int rear = 0;

void push(int x);
void print();
void pop();


int main(int argc, char
  const * argv[]) {
  push(2);
  push(3);
  push(4);
  push(5);
  push(1);
  print();
  pop();
  pop();
  print(); 
  system("pause");
  return 0;
}

void push(int x) {
  if (rear == MAX) {
    cout << "Queue is Full" << endl;
  }else{
    queue[rear++] = x;
  }
}

void pop(){
  if(front == rear){
    cout << "Queue is Empty " << endl;
  }else{
    cout << "Deleted: " << queue[front] << endl;
    for(int i = 1; i < rear; i++){
      queue[i - 1]  = queue[i];
    }
    rear--;
  }
}
void print() {
  if(front == rear){
    cout << "Queue is Empty " << endl;
  }else{
    cout << "QUEUE IS:  " << endl;
    for(int i = 0; i < rear; i++){
      cout << queue[i] << endl; 
    }
  }
} 