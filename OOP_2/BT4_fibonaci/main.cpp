#include<bits/stdc++.h>
void fibonaci(int n)
{
    long long fn ,f1 = 0 , f2 = 1;
    for (int i = 0; i <= n; i++)
        {
            if(i<=1) std :: cout << "F[" << i << "] = " << i << std :: endl ;
            else{
                fn = f1 + f2 ;
                f1 = f2 ;
                f2 = fn ;
                std :: cout << "F[" << i << "] = " << fn << std :: endl;
            }
                
        }
} 
int main()
{
    int n ;
    std :: cout << "Nhap so luong fibonaci ban can tim : ";
    std :: cin >> n ;
    std :: cout << "Day so fibonaci cua ban la : ";
    fibonaci(n);
}