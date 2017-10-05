/*
 * pnt.h
 *
 *  Created on: Oct 2, 2017
 *      Author: Sean
 */

#ifndef PNT_H_
#define PNT_H_
using namespace std;
#include <string>
#include <iostream>

class point{
	int x,y;
	//static int test;
public:

	point(){x=y=0;};
	point(int a, int b){x=a;y=b;};
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	void print();
	point operator+(point);
	friend void print2(point&);

	friend class B;//other class can use these vars


};

//friend ostream& operator<<(ostream&, const Point&);
//
//ostream& operator<<(ostram& os, const Point& p){
  //os<<p.x<<':'<<p.y<<endl;
  //return os;
  //}

//1 - 2 4
//2 - 8
//3 -





#endif /* PNT_H_ */
