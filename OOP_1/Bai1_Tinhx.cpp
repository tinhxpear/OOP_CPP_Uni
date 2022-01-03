#include<iostream>
using namespace std ;
double x(int a,int b,int c)
{
    return (double)(a+b+c)/3;
}
//Nhập ba số nguyên. Tính x= (a+b+c)/3.

int main()
{
   int a,b,c ;
   cout << "Nhap a = ";

   cin >> a ;
   cout << "\nNhap b = ";
   cin >> b ;
   cout << "\nNhap c = ";
   cin >> c ;
   
   
   cout << "\n(a + b + c)/3 = " <<  x(a,b,c) ; 
}