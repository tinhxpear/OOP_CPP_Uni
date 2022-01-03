#include<bits/stdc++.h>
class Fraction
{
    int numerator,dinominator;
    public:
    void input_fraction();
    void output_fraction();
    int greatest_common_divisor(int numerator,int dinominator);
    friend Fraction multiplication(Fraction a, Fraction b);
};
int Fraction :: greatest_common_divisor(int numerator,int dinominator)
{
    while(numerator != dinominator)
    {
        if(numerator > dinominator) numerator -= dinominator ;
        else if(numerator < dinominator) dinominator -= numerator;
        else numerator;
    }
    return numerator;
}
void Fraction :: input_fraction()
{
    std :: cout << "\nEnter the numerator : ";
    std :: cin >> numerator;
    std :: cout << "Enter the dinominator : ";
    std :: cin >> dinominator;
}
void Fraction :: output_fraction()
{
    std :: cout << "Your Fraction is : " << numerator/greatest_common_divisor(numerator,dinominator) << " / " << dinominator/greatest_common_divisor(numerator,dinominator) << std :: endl;
}
Fraction multiplication(Fraction a, Fraction b)
{
    Fraction t ;
    t.numerator = a.numerator * b.numerator ;
    t.dinominator = a.dinominator * b.dinominator;
    return t ;
}
int main()
{
    Fraction a,b;
    std :: cout << "Enter your fraction  a : ";
    a.input_fraction();
    a.output_fraction();
    std :: cout << "Enter your fraction  b : ";
    b.input_fraction();
    b.output_fraction();
    std :: cout << "The multiplication of fraction a and fraction b is : "; multiplication(a,b).output_fraction();
}