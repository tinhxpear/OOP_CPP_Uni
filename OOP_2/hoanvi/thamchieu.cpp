#include<bits/stdc++.h>
void hoanvi(float &a , float &b)
{
    float t ;
    t = a ;
    a = b ;
    b = t ;
}
int main()
{
    float x ,y;
    std :: cout << "Nhap x = ";
    std :: cin >> x ;
    std :: cout << "Nhap y = ";
    std :: cin >> y ;
    hoanvi(x,y);
    std :: cout << "x = " << x << std :: endl  << "y = " << y ;
}