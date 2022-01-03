#include<bits/stdc++.h>
class Diem
{
float x,y;
public:
friend std :: ostream& operator<<(std :: ostream& os, Diem& p); // xuat
friend std :: istream& operator>>(std :: istream& is, Diem& p); // nhap
Diem operator*(Diem d);
float kc(); // khoang cach tu this den goc toa do
float kc(Diem& d); // khoang cach tu this den d
Diem(float x1, float y1) {
x= x1; y= y1;
}
Diem() { }
};
int main(){
Diem d1(1,2), d2, d3;
Diem d4(d1);
//cout<<"\nNhap diem 1: ";
//cin>>d1;
std :: cout<<"\nNhap diem 2: ";
std :: cin>>d2;
d3= d1*d2;
std :: cout<<"\nDiem 3: ";
std :: cout<<d3;
std :: cout<<"\nKhoang cach tu diem 3 den O: ";
std :: cout<<d3.kc();
std :: cout<<"\nKhoang cach tu diem 3 den diem 1: ";
std :: cout<<d3.kc(d1);
}