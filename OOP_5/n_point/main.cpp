#include<iostream>
#include<math.h>
class Point
{
    private:
    int x,y ;
    public:
    void input();
    void output();
    float distance(Point &p);
    friend float n_distance(int &n, Point *n_p);
    friend void n_input(int &n, Point*n_p);
    friend void n_output(int &n, Point *n_p);
};
void Point ::input()
{
    std :: cout << "\nNhap x = ";
    std :: cin >> x ;
    std :: cout << "Nhap y = ";
    std :: cin >> y ;
}
void Point::output()
{
    std :: cout << "(" << x << "," << y << ")" << std :: endl;
}
void n_input(int &n, Point *n_p)
{
    for (int i = 1; i <= n; i++)
    {
        std :: cout << "p[" << i << "] : ";
        n_p[i].input();
        std :: cout << "p[" << i << "] = ";
        n_p[i].output();
        std :: cout << std :: endl;
    }   
}
float Point :: distance(Point &p)
{
    return sqrt(pow(this->x - p.x,2) + pow(this->y - p.y,2));
}
float n_distance(int &n, Point *n_p)
{
    float t= 0;
    for (int i = 1; i <n ; i++)
    {
       t+= n_p[i].distance(n_p[i+1]);      

    }
    return t;
}
int main()
{
    int n;
    std :: cout << "Nhap so luong diem : ";
    std :: cin >> n ;
    Point *n_p = new Point[n+1];
    std :: cout << "Nhap diem: \n";
    n_input(n,n_p);
    std :: cout << "\nKhoang cach giua cac diem : " << n_distance(n,n_p);
    system("pause");
    delete[]n_p;

}