#include<bits/stdc++.h>
// Đây là cách sử dùng con trỏ ===================================================================
void hoanvi(float *x , float *y)
{
    float t ;
    t = *x ;
    *x = *y ;
    *y = t ;
}
int main()
{
    float a , b ;
    std :: cout << "Nhap a = ";
    std :: cin >> a ;
    std :: cout << "Nhap b = ";
    std :: cin >> b ;
    hoanvi(&a,&b);
    std :: cout << "a = " << a << std :: endl << "b = " << b ; 
}