#include<bits/stdc++.h>
class Complex_number
{
    int a,b;
    public:
    void input_complex_number();
    void output_complex_number();
    friend Complex_number add_complex_number(Complex_number n1, Complex_number n2);
};
void Complex_number ::input_complex_number()
{
    std :: cout << "\nEnter the real part : ";
    std :: cin >> a ;
    std :: cout << "Enter the not real part : ";
    std :: cin >> b;
}
void Complex_number ::output_complex_number()
{
    std :: cout << a << " + " << b << "i" << std :: endl;
}
Complex_number add_complex_number(Complex_number n1, Complex_number n2)
{
    Complex_number t ;
    t.a = n1.a + n2.a ;
    t.b = n1.b + n2.b ;
    return t ;
}
int main()
{
    Complex_number n1, n2 ;
    std :: cout << "Enter the complex number 1 : ";
    n1.input_complex_number();
    std :: cout << "The complex number 1 is : ";
    n1.output_complex_number();
    std :: cout << "Enter the complex number 2 : ";
    n2.input_complex_number();
    std :: cout << "The complex number 2 is : ";
    n2.output_complex_number();
    std :: cout << "The total of complex number 1 and complex number 2 is : "; add_complex_number(n1,n2).output_complex_number(); 
}