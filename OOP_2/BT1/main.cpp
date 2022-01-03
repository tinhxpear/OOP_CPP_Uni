//Xây dựng hàm giải phương trình bậc 2, trong đó giá trị trả về 
//thể hiện việc phương trình có 1 hoặc 2 nghiệm hay vô nghiệm

#include<bits/stdc++.h>
void ptb2(int a, int b, int c)
{
    int d = b*b - 4*a*c ;
    if(d < 0) std :: cout << "Phuong trinh vo nghiem !!! ";
    else if(d > 0) std :: cout << "Phuong trinh co 2 nghiem phan biet !!!";
    else std :: cout << "Phuong trinh co nghiem kep !!!";
}
int main()
{
    int a, b, c ;
    std :: cout << "Nhap a = ";
    std :: cin >> a ;
    std :: cout << "Nhap b = ";
    std :: cin >> b ;
    std :: cout << "Nhap c = ";
    std :: cin >> c ;
    std :: cout << "Ket qua cua phuong trinh : ";
    ptb2(a,b,c);
}