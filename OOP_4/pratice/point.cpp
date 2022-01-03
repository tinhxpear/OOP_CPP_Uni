#include<bits/stdc++.h>
class Point{
    private:
    int x ,y ;
    public:
    void input();
    void output();
    float distance();
    float distance(float &d);
};
void Point :: input()
{
    std :: cout << "Enter point x = ";
    std :: cin >> x ;
    std :: cout << "Enter point y = ";
    std :: cin >> y ;
}
void Point :: output()
{
    std :: cout << "(" << x << "," << y << ")" << std :: endl;
}
float Point ::  distance()
{
    return sqrt(x*x + y*y);
}

int main()
{
    Point a,b ;
    std :: cout << "Nhap toa do diem A : \n";
    a.input();
    std :: cout << "A" ; a.output(); 
    std :: cout << std :: endl ;
    std :: cout << "Nhap toa do diem B : \n";
    b.input();
    std :: cout << "B"; b.output();
    std :: cout << "The distance from point A to origin is : " << a.distance() << std :: endl;
    std :: cout << "The distance from point B to origin is : " << b.distance() << std :: endl;

}