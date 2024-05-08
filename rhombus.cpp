#include<cmath>
#include"rhombus.h"
rhombus::rhombus(point a,point b, point c,point k1)//присваиваем значения 
{
    A = a;
    B = b;
    C = c;
    K = k1;
}
void rhombus::middle()//ищем середину ромба 
{
    mid.x = B.x;
    mid.y = A.y;
}
void rhombus::coor4()//находим координаты оставшихся вершин
{
    D.x = B.x;
    D.y = abs(mid.y - (B.y - mid.y));
}
void rhombus::print()
{
    std::cout << "Координаты левой вершинки (" << A.x << "," << A.y << ")" << "\n";
    std::cout << "Координаты верхней вершинки (" << B.x << "," << B.y << ")" << "\n";
    std::cout << "Координаты правой вершинки (" << C.x << "," << C.y << ")" << "\n";
    std::cout << "Координаты нижней вершинки (" << D.x << "," << D.y << ")" << "\n";
}
void rhombus::way()//находим диагонали ромба
{
    std::cout << "Диагональ AC: ";
    AC = sqrt((pow(C.x - A.x, 2)) + (pow(C.y - A.y, 2)));//по формуле робма 
    std::cout << AC<< "\n";
    std::cout << "Диагональ BD: ";
    BD = sqrt((pow(D.x - B.x, 2)) + (pow(D.y - B.y, 2)));
    std::cout << BD << "\n";
}
void rhombus::square()//находим площадь ромба 
{
    int S;
    std::cout << "S = " << (AC + BD) / 2 << "\n";//находим площадь ромба по формуле 
}
void rhombus::fun2()
{
 if(K.x == 0)
  std::cout << "1";
 else 
  std::cout << "0";
    std::cout << "\n";
}
void rhombus::fun3() 
{
 if(K.y == 0)
  std::cout << "1";
 else 
  std::cout << "0";
}