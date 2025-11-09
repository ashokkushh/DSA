#include<iostream>
using namespace std;

class Node{
public:
	int val;
	Node* next;

	Node(int data){
		val = data;
		next = NULL;
	}

};

class List{
	Node* head;
public:
	List(){
		head = NULL;
	}
	void pushf(int data){
		if(head == NULL){
			head = new Node(data);
		}else{
			Node* newnode = new Node(data);
			newnode->next = head;
			head = newnode;
		}
	}
	
	void pushb(int data){
		if(head == NULL){
			head = new Node(data);
		}else{
			Node* temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			Node* newnode = new Node(data);
			temp->next = newnode;
		}
	}
	void print(){
		Node* temp = head;
		while(temp != NULL){
			cout<<temp->val<<"-->";
			temp = temp->next;
		}
		cout<<endl;
	
	}
	
	
};

int main(){
	cout<<"Hlo! Its main Function"<<endl;
	List l;
	l.pushf(1);
	l.print();
	l.pushf(2);
	l.print();
	l.pushf(3);
	l.pushb(0);
	l.pushb(-1);

	l.print();
}
