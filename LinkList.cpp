#include <iostream>
#include "LinkList.h"
using namespace std;

void newListForward(){
	cout<<"enter a number";
	int number;
	LinkList* current, *head=NULL,*last;

	cin>>number;
	while (number !=-99){
		current = new LinkList;
		current->data = number;
		current->next=NULL;
		if (head==NULL){
			head=current;last=current;
		} else {
			last->next = current;last=current;
		}
		cout <<"enter a number";
		cin>>number;
	}
	current=head;
	while(current!= NULL){
		cout<<current->data<<endl;
		current=current->next;
	}

}

void newListBack(){
	cout<<"enter a number";
	int number;
	LinkList* current, *head=NULL,*last;

	cin>>number;
	while (number !=-99){
		current = new LinkList;
		current->data = number;
		current->next=head;//change 1
		if (head==NULL){
			head=current;
			last=current;
		} else {
			//last->next = current;//change 2
			head=current;//change 3
		}
		cout <<"enter a number";
		cin>>number;
	}
	current=head;
	while(current!= NULL){
		cout<<current->data<<endl;
		current=current->next;
	}

}

void searchAndAdd3(){
	cout<<"enter a number";
	int number;
	LinkList* current, *head=NULL,*last;
	cin>>number;
	while (number !=-99){
		current = new LinkList;
		current->data = number;
		current->next=NULL;//change 1
		if (head==NULL){
			head=current;
			last=current;
		} else {
			last->next = current;//change 2
			last=current;//change 3
		}
		cout <<"enter a number";
		cin>>number;
	}
	cout << "enter number to search for:";
	cin>>number;
	current=head;
	bool changed;
	while(current!=NULL){
		if(current->data==number){current->data+=3;changed=1;}
		current=current->next;
	}
	if(!changed){cout<<"no value was changed"<<'\n';}
	current=head;
	while(current!= NULL){
		cout<<current->data<<endl;
		current=current->next;
	}
}


//int main(){
	//cout << "test";
	//newListForward();
	//newListBack();
	//searchAndAdd3();
	//return 0;
//}
