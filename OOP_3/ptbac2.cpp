#include <iostream>
#include <math.h>
using namespace std ;
 void nhap(int &a, int &b , int &c)
 {
     cout << "Nhap a = ";
     cin >> a ;
     cout << "Nhap b = ";
     cin >> b ;
     cout << "Nhap c = ";
     cin >> c ;
     cout << endl;

 }
void xuat(int a, int b, int c)
{
    
    int D = (int)pow(b,2) - (4*a*c) ;
    if(D < 0)
    {
      cout << "Phuong trinh vo nghiem !!!" ;
    }
   
    else if(D == 0)
    {
        cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b/(2*a) ;
    }
     else 
    {
        
        cout << "Phuong trinh co 2 nghiem phan biet : x1 = " << (double) (-b + sqrt(D))/(2*a ) << " va x2 = " << (double)  (-b -  sqrt(D))/(2*a ) ;
    }
}
int main()
{
    int a,b,c ;
    nhap(a,b,c);
    xuat(a,b,c);

}