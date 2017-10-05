#include "pnt.h"
#include <iostream>
using namespace std;

void point::setX(int a){
	x=a;
}
void point::setY(int b){
	y=b;
}
int point::getX(){return x;}
int point::getY(){return y;}
void point::print(){
	cout << x<<' '<<y<<endl;
}
point point::operator+(point other){
	point temp;
	temp.x=x+other.x;
	temp.y=y+other.y;
	return temp;
}

void print2(point& a){
	cout<< a.x;//can use because friend
}
