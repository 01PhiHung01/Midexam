#include <iostream>
using namespace std;

#define max 10000
int Stack[max];
int Top;

//init Stack with Top = -1
void StackInit(){
	Top = -1;
}

void push(int V){
	if(Top > max-1){
		cout<<"Stack is full";
	}else{
		Top++;
		Stack[Top] = V;
	}
}

int top(){
	if (Top == -1){
		cout<<"Stack is empty";
		return -1;
	}else{
		int res = Stack[Top];
		return res;
	}
}
int main(){
	//init Stack
	StackInit();
	//push to Stack
	push(5);
	push(21);
	push(10);
	push(99);
	push(101);
	cout<<top()<<endl;
}
