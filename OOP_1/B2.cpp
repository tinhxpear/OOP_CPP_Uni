// Nhập một dãy số thực , in các số dương trên 1 dòng và các số âm dòng dưới.
#include<iostream>
using namespace std;
#define MAX 100
void nhap(int n , double a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so thu " << i + 1 << " : " ;
        cin >> a[i] ;
    }
    
}
void xuat(int n,double a[])
{
    cout << "Day cua ban la : \n";
    for (int i = 0; i < n; i++)
    {
        
        cout << a[i] << " ";
    }
    
}
void dieukien(int n,double a[])
{
    for (int i = 0; i < n; i++)
    {
        
        if(a[i] > 0)
        {
            cout << a[i] << " ";
        }
        
    }
    cout << endl;
    for (int  i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            cout << a[i] << " ";
        }
        
    }
    
}

int main()
{
    int n ;
    double a[MAX] ;
    cout << "Nhap so luong phan tu : " ;
    cin >> n ;
    nhap(n,a);
    dieukien(n,a);
}