/*Viết lớp Số phức có các thuộc tính là phần thực, phần ảo, một hàm
tạo không đối, một hàm tạo có 2 đối trong đó đối thứ hai mặc định
bằng 0, hàm thành phần tính tổng hai số phức. Viết hàm main() để
sử dụng.
*/
#include<iostream>
class Complex
{
    int a, b ;
    public:
    friend std :: istream &operator>>(std :: istream &is, Complex &x);
    friend std :: ostream &operator<<(std :: ostream &os, Complex &x);
    Complex &operator+(Complex &x);
    Complex &operator=(Complex &x);
    Complex(int a1, int b1 = 0)
    {
        a = a1; b = b1 ;
    }
    Complex(){ 
        std :: cout << "Khoi tao a mac dinh\n";
        std :: cout << "Khoi tao b mac dinh\n";
    }


};
std :: istream &operator>>(std :: istream &is, Complex &x)
{
    std :: cout << "Nhap phan thuc : ";
    is >> x.a;
    std :: cout << "Nhap phan ao : ";
    is>> x.b ;
    return is ;
}
std :: ostream &operator<<(std :: ostream &os, Complex &x)
{
    os<< x.a << " + " << x.b << "i" << std :: endl;
    return os;
}
Complex &Complex:: operator=(Complex &x)
{
    this->a = x.a;
    this->b = x.b;
    return *this;
}
Complex &Complex:: operator+(Complex &x)
{
    a = this->a + x.a;
    b = this->b + x.b;
    return *this;
}
int main()
{
    Complex a(3), b,c ;
    // std :: cout << "Nhap so phuc a : \n";
    // std :: cin >> a ;
    // std :: cout << "a = " << a;
    std :: cout << "Nhap so phuc b : \n";
    std :: cin >> b ;
    std :: cout << "b = " << b ;
    c = a + b ;
    std :: cout << "\na + b = " << c;
}