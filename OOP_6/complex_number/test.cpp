#include <iostream>
//#define cout std :: cout
//#define cin std :: cin
using namespace std ;
class SP{
	private:
		double a, b ;
	public:
		friend std :: istream &operator>>(std :: istream &is, SP &k);
		friend std :: ostream &operator<<(std::ostream &os, SP &k);
		SP &operator+(SP &k);
		SP &operator*(SP &k);
};
std:: istream &operator>>(std::istream &is, SP &k){
    cout << "Nhap a = ";
	is>> k.a ;
	cout << "Nhap b = ";
	is >> k.b ; 
}
std :: ostream &operator<<(std :: ostream &os, SP &k){
    os<< k.a << " + " << k.b << "i\n";
}
SP& SP:: operator+(SP &k){
   a = this->a + k.a ;
   b = this->b + k.b ;
   return (*this);
}
SP& SP::operator*(SP &k){
   a = (this->a * k.a)- (this->b * k.b);
   b = (this->a * k.b )+ (this->b * k.a) ; 
   return (*this);
}
int main()
{
	SP k, h, t ;
	cin >> k >> h ;
	cout << k << h ;
	cout << "k + h = " << k + h;
	t = k * h ;
	cout <<"k * h = " <<  t ;
   
}
