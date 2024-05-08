#include <iostream>
#include "rhombus.h"
int main() 
{
 setlocale(LC_ALL,"RU");
 rhombus first({4,6},{6,10}, point{8,6},{4,6});
 //(7,16,12,20,17,16)
    //вызываем наши функции
 first.middle();
 first.coor4();
 first.print();
 first.way();
 first.square();
 //first.fun1();
 first.fun2();
 first.fun3();
}
