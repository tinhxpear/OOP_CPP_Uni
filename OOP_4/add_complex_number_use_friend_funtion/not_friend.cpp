#include<bits/stdc++.h>
class Complex_number
{
    private:
    int a,b ;
    public:
    void input_complex_number();
    void output_complex_number();
    Complex_number add(Complex_number u2);
};
void Complex_number :: input_complex_number()
{
    std :: cout << "Enter value a = ";
    std :: cin >> a ;
    std :: cout << "Enter value b = ";
    std :: cin >> b ;
}
void Complex_number :: output_complex_number()
{
    std :: cout << a << " + " << b << "i" << std :: endl;
}
Complex_number Complex_number :: add(Complex_number u2)
{
    Complex_number t ;
    t.a = a + u2.a ;
    t.b = b + u2.b ;
    return t;
}
int main()
{
    Complex_number u1 , u2 ;
    std :: cout << "Enter the complex number 1 : \n";
    u1.input_complex_number();
    std :: cout << "u1 = " ; u1.output_complex_number();
    std :: cout << "Enter the complex number 2 : \n";
    std :: cout << "u2 = " ; u2.input_complex_number();
    std :: cout << "u2 = "; u2.output_complex_number();
    std :: cout << "u1 + u2 = " ; u1.add(u2).output_complex_number();
}