#include<iostream>
using namespace std;
class SNode{
private:
	int data;
	SNode* front;
public:
	SNode(int d,SNode *p){
	data=d;
	front=p;
	}
	friend class Stack;
};
class Stack{
private:
	SNode *top;
public:
	Stack(){
	top=0;
	}
	void push(int i){
	SNode *q=new SNode(i,top);
	top=q;
	}
	void show(){
		while(top){
			cout<<top->data<<endl;
			top=top->front;
		}
	}
};
void f1()
{
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.show();
}
