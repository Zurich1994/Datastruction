#include<iostream>
int n[]={1,2,3,4,-1,-1,5,-1,-1,6,-1,-1,7,8,9,-1,-1,-1,10,-1,-1};
int m=-1;
using namespace std;
class TNode{
private:
	int data;
	TNode *rightchild;
	TNode *leftchild;
public:
	TNode(){
	rightchild=0;
	leftchild=0;
	}
	friend class Tree;
};
class Tree{
private:
	TNode *root;
public:
	Tree(){
	root=0;
	}
	void CreateNode(TNode* &);
	void TheCreateNode();
	void TravelTree(TNode* );
	void TheTravelTree();
};
void Tree::CreateNode(TNode* &p){
   m++;
   if(n[m]!=-1&&m<21){
   p=new TNode();
   p->data=n[m];
   CreateNode(p->leftchild);
   CreateNode(p->rightchild);
   }
}
void Tree::TheCreateNode(){
   CreateNode(root);
}
void Tree::TravelTree(TNode* p){
	if(p){
		if(p->data!=-1){
			cout<<p->data<<"  ";
			system("pause");
			TravelTree(p->leftchild);
			TravelTree(p->rightchild);
		}
	}
}
void Tree::TheTravelTree(){
    TravelTree(root);
}
void f2(){
  Tree t;
  t.TheCreateNode();
  t.TheTravelTree();
  cout<<endl;
}









