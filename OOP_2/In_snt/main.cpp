#include<bits/stdc++.h>
bool test(int k)
{
    bool t ;
    if(k == 2 || k == 3) return t= true ;
    for (int  i = 2; i*i < k; i++)
    {
        if(k % i == 0 ) return t = false ;
        else return t = true ;
    }   
    return t ;
}
void print(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if(test(i) == true) std :: cout << i << " ";
    }
    
}
int main()
{
    int n ;
    std :: cout << "Nhap gioi han day so nguyen to : ";
    std :: cin >> n ;
    std :: cout << "Day so nguyen to nho hon " << n << " la : ";
    print(n);
}