/*
 * LinkList.h
 *
 *  Created on: Oct 4, 2017
 *      Author: Sean
 */

#ifndef LINKLIST_H_
#define LINKLIST_H_

class LinkList{
public:
	LinkList(){data=0;prev=next=0;}
	LinkList(int x){data=x;prev=next=0;}
	int data;
	LinkList* prev, *next;

	void newListForward();
	void newListBack();
	void searchAndAdd3();



};




#endif /* LINKLIST_H_ */
