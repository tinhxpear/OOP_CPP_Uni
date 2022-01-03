#include<iostream>
#include<math.h>
class Polynomial
{
    private :
    int n ;
    float *a = new float[n];
    float x ;
    public:
    void input();
    void output();
    friend float value(const float &x, const float *a, const int &n);
    void printvalue();  
};
void Polynomial :: input()
{
    std :: cout << "Enter step : ";
    std :: cin >> n;
    for (int i = n; i >= 0; i--)
    {
        std :: cout << "A[" << i << "] = " ;
        std :: cin >> a[i];
    }  
}
void Polynomial ::output()
{
    std :: cout << "F(x) = ";
    for (int i = n; i >= 0; i--)
    {
        if(i == n) std :: cout << a[n] << "x^" << n << " + ";
        else if(i<n && i >1) std :: cout << a[i] << "x^" << i << " + ";
        else if(i == 1) std :: cout << a[1] << "x" << " + ";
        else std :: cout << a[0];

    }  
}
float value(const float &x, const float *a, const int &n)
{
    if(n == 0) return a[0];
    else return a[n]*pow(x,n) + value(x,a,n-1);
}
void Polynomial :: printvalue()
{
    std :: cout << "\nNhap x = ";
    std :: cin >> x ;
    std :: cout << "Gia tr cua da thuc la : " << value(x,a,n);
}
int main()
{
    Polynomial f;
    f.input();
    f.output();
    f.printvalue();
    std :: cout << std :: endl;
    system("pause");
}