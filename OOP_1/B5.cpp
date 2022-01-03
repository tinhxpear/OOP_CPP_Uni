// Nhập 2 số nguyên a,b. Tìm UCLN và BCNN
#include<iostream>
using namespace std;
int  UCLN(int a, int b)
{
    while (a!=b)
    {
        
        if(a>b)
        {
           a = a - b ;
        }
        else 
        {
            b = b - a ;
        }
    }
    return a ;

}
int BCNN(int a, int b)
{
    int x = a * b ;
    while (a!=b)
    {
        
        if(a>b)
        {
           a = a - b ;
        }
        else 
        {
            b = b - a ;
        }
    }
    return x/a ;



}

int main()
{
  int a,b ;
  cout << "Nhap a = ";
  cin >> a;

  cout << "\nNhap b = ";
  cin >> b ;
   cout << "UCLN = " << UCLN(a,b) << endl;
   cout << "BCNN = " << BCNN(a,b) << endl;

}