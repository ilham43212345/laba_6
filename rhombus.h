#include<iostream>
class point
{
public:
    int x,y;
};
class rhombus
{
private:
    point K;
    point A,
    B,
    C,
    mid,
    D;
public:
 int AC;
 int BD;
    rhombus(point a,point b,point c,point k1);
 void middle(); 
 void coor4();
 void print();
 void way();
 void square();
    //void fun1();
 void fun2();
 void fun3();    
};