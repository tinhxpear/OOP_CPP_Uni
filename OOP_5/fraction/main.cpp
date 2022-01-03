#include<iostream>
class Fraction
{
private:
    int nummerator,denominator;
    int greatest_common_divisior(int a, int b);
public:
    void input();
    void output();
    Fraction multiplication(Fraction &k);
    Fraction toltal(Fraction &k) ;
};
void Fraction :: input()
{
    std :: cout << "\nEnter the nummerator : ";
    std :: cin >> this->nummerator;
    std :: cout << "Enter the denominator : ";
    std :: cin >> this->denominator;
}
int Fraction:: greatest_common_divisior(int nummerator, int denominator)
{
	while(nummerator != denominator)
	{
    if(nummerator>denominator) nummerator-= denominator;
    else denominator-= nummerator ;
	}
	return nummerator ;   
}
void Fraction :: output()
{
    std :: cout << nummerator/greatest_common_divisior(nummerator,denominator) << " / " << denominator/greatest_common_divisior(nummerator,denominator) << std :: endl;
}
Fraction Fraction:: multiplication(Fraction &k)
{
    Fraction t ;
    t.nummerator = this->nummerator * k.nummerator ;
    t.denominator = this->denominator *k.denominator;
    return t;
}
Fraction Fraction ::toltal(Fraction &k)
{
    Fraction t ;
    t.nummerator = this->nummerator + k.nummerator ;
    t.denominator = this->denominator + k.denominator;
    return t ;
}
int main()
{
    Fraction k1, k2 ;
    std :: cout << "Enter the fraction k1 : ";
    k1.input();
    std :: cout << "k1 = "; k1.output();
    std :: cout << "Enter the fraction k2 : ";
    k2.input();
    std :: cout << "k2 = "; k2.output();
    std :: cout << "The result of k1 * k2 = " ; k1.multiplication(k2).output();  
    std :: cout << "The result of k1 + k2 = ";k1.toltal(k2).output();
}
