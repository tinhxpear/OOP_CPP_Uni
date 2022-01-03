// Kiểm tra số xem có phải số nguyên tố hay không
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
int main()
{
    int k ;
    std :: cout << "Nhap so can kiem tra : ";
    std :: cin >> k ;
    if(test(k) == true ) std :: cout << "Day la so nguyen to !!!";
    else std :: cout << "Day khong phai la so nguyen to !!!";
}