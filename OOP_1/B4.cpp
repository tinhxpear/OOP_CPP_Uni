// Nhập 1 dãy số thực , sắp xếp theo thứ tự tăng dần và giảm dần
#include<iostream>
using namespace std;
#define MAX 100
void nhap(int n, double *a)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so thu " << i + 1 << " : ";
        cin >> a[i];
    }
    
}
void xuat(int n , double *a)
{
    cout << "\nDay so cua ban la : \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void sapxepGiam(int n , double *a)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j =  n -1 ; j > i; j --)
        {
            if(a[i] < a[j])
            {
                swap(a[i],a[j]) ;
            }
        
        }
        
        
    }
    
  
}
void SapxepTang(int n, double *a)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j =  n -1 ; j > i; j --)
        {
            if(a[i] > a[j])
            {
                swap(a[i],a[j]) ;
            }
        
        }
        
        
    }
}

int main()
{
    int n;
    double *a = new double[n];
    cout << "Nhap so luong phan tu : ";
    cin >> n ;
    cout << endl;
    nhap(n,a);
    //xuat(n,a);
    sapxepGiam(n,a);   
    xuat(n,a);
    SapxepTang(n,a);
    xuat(n,a);



}