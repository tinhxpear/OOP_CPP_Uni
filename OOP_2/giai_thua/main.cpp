// Tạo hàm tính tổng giai thừa
#include<iostream>
int giaithua(int k)
{
    int i , t = 1 ;
    for(i = 1 ; i <= k ; i ++)
    {
        t *= i ;
    }
    return t ;
}
int main()
{
    int k ;
    std :: cout << "Nhap so can tinh giai thua : ";
    std :: cin >> k ;
    std :: cout << "Ket qua cua ban la : " << k << "! = " << giaithua(k);
}