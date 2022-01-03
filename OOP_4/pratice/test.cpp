#include<bits/stdc++.h>
class PS
{
    private:
    int ts , ms ;
    public :
    void nhap()
    {
        std :: cout << "Nhap tu so cua ban : ";
        std :: cin >> ts ;
        std :: cout << "Nhap mau so cua ban : ";
        std :: cin >> ms ;
    }
    void xuat()
    {
        std :: cout << "Phan so cua ban la : " << ts << " / " << ms ;
    }
};

int main()
{
    PS a ;
    a.nhap();
    a.xuat();
}