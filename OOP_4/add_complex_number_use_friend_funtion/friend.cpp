#include<bits/stdc++.h>
class Complex_number
{
    int a,b;
    public:
    void input_complex_number();
    void output_complex_number();
    friend Complex_number add(Complex_number u1, Complex_number u2);
};
void Complex_number :: input_complex_number()
{
    std :: cout << "Enter value a = ";
    std :: cin >> a ;
    std :: cout << "Enter valua b = ";
    std :: cin >> b ;
}
void Complex_number :: output_complex_number()
{
    std :: cout << a << " + " << b << "i" << std :: endl;
}
Complex_number add(Complex_number u1, Complex_number u2)
{
    Complex_number t ;
    t.a = u1.a + u2.a ;
    t.b = u1.b + u2.b ;
    return t ;
}
int main()
{
    Complex_number u, u1, u2 ;
    std :: cout << "Enter complex number u1 : \n"; u1.input_complex_number();
    std :: cout << "u1 = "; u1.output_complex_number();
    std :: cout << "Enter complex number u2 : \n"; u2.input_complex_number();
    std :: cout << "u2 = "; u2.output_complex_number();
    std :: cout << "\nu1 + u2 = " ; add(u1,u2).output_complex_number();

    
}