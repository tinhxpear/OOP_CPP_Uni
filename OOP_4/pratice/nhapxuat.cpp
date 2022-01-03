#include<bits/stdc++.h>
class A 
{
    private :
    int x ;
    public:
    void nhap()
    {
        std :: cin >> x ;
    }
    void xuat()
    {
        std :: cout << x ;
    }
};
int main()
{
    A x, *p;
    std :: cout << "Nhap x = ";
    x.nhap();
    p = &x ;
    std :: cout << "x = ";
    p->xuat();

}