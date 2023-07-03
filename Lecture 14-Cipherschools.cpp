//conversion-2

#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node(int n){
			data = n;
			next = NULL;
		}
};
Node* makeLL(){
	int data;
	cin>>data;
	
	Node* h = NULL;
	Node*temp = NULL;
	while(data!= -1){
		Node*newNode =new Node(data);
		if(h == NULL){
			h = newNode;
			temp = h;
		}
		cin>>data;
	}
	return h;
}
void print(Node*head){
	Node*t = head;
	
	while(t!= NULL){
		cout<<t->data<<"->";
	}
	return;
}

int main(){
	Node* head = makeLL();
	print(head);
	return 0;
}