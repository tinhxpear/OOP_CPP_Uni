#include<iostream>
using namespace std;
class DT {
int n;
float *a;
//float a[100];
public:
DT() { n=0; a= NULL; }
DT(int n1) {
n= n1;
a= new float[n+1];
}
~DT() { delete a; }
DT operator=(const DT& d);
DT operator+(const DT& d);
friend ostream& operator<<(ostream& os, DT& d);
friend istream& operator>>(istream& is, DT& d);
};
DT DT::operator+(const DT &d) {
DT t;
t.n= d.n;
t.a= new float[d.n+1];
for(int i=0; i<=d.n; ++i)
t.a[i]= a[i] + d.a[i];
return t;
}
DT DT::operator=(const DT& d) {
n= d.n;
a= new float[n+1];
for(int i=0; i<=n; ++i)
a[i]= d.a[i];
return d;
}
ostream& operator<<(ostream& os, DT& d) {
for (int i=0; i<=d.n; ++i)
os<<d.a[i]<<" ";
return os;
}
istream& operator>>(istream& is, DT& d) {
for(int i=0; i<= d.n; ++i) {
cout<<"a["<<i<<"]= ";
is>>d.a[i];
}
return is;
}
int main() {
DT t, x, y(3);
cin>>y;
cout<<"y = "<<y;
x = y; // Su dung toan tu gan
cout<< endl;
cout<<"x = "<<x;
t= x + y;
cout<<endl<<"t = ";
cout<<t;
}