#include<iostream>
#include<math.h>
class Point
{
    private:
    int x, y ;
    public:
    void input();
    void output();
    float distance(Point &d);
    float perimeter(Point &d2 , Point &d3);
};
void Point :: input()
{
    std :: cout << "\nEnter x = ";
    std :: cin >> x ;
    std :: cout << "Enter y = ";
    std :: cin >> y ;
}
void Point :: output()
{
    std :: cout << "(" << x << " , " << y << ")" << std :: endl;
}
 float Point ::  distance(Point &d)
 {
     return sqrt(pow(this->x - d.x,2) + pow(this->y - d.y,2)) ;
 }
 float Point :: perimeter(Point &d2, Point &d3)
 {
 	float t ;
 	t += d2.distance(d3);
 	t += (*this).distance(d2);
 	t += (*this).distance(d3);
 	return t ;
 } 
int main()
{
    Point d1, d2 , d3 ;
    std :: cout << "Enter d1 : ";
    d1.input();
    std :: cout << "d1 = "; d1.output();
    std :: cout << "Enter d2 : ";
    d2.input();
    std :: cout << "d2 = "; d2.output();
    std :: cout << "Enter d3 : ";
    d3.input();
    std :: cout << "d3 = "; d3.output();
    std :: cout << "The distance of d1 and d2 : " << d1.distance(d2) << std :: endl;
    std :: cout << "The distance of d1 and d3 : " << d1.distance(d3) << std :: endl;
    std :: cout << "The distance of d2 and d3 : " << d2.distance(d3) << std :: endl;
    std :: cout << "The perimeter of triangle d1d2d3 is : " << d1.perimeter(d2,d3) << std :: endl;
}
