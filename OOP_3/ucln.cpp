#include<iostream>
#include<math.h>
using namespace std ;
int  UCLN(int a, int b)
{
    while (a!=b)
    {
        
        if(a>b) a -= b ;
        else  b -= a ;
    }
    return a ;
}
void UCLN_Mang(int n , int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nSo thu " << i << " : " ;
        cin >> a[i] ;
    }
    cout << "\nDay so cua ban la : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    int x = a[0];
    for (int i = 1; i < n ; i++)
    {
       x =  UCLN(x,a[i]);

    }
    cout << "\nUCLN cua mang la : "<< x ;
}

int main()
{
    int n ;
    int a[n];
    cout << "So phan tu : ";
    cin >> n ;
    UCLN_Mang(n,a);
}