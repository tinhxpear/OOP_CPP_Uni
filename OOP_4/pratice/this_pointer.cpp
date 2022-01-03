#include<bits/stdc++.h>
class Test
{
    private:
    int x ;
    public:
    Test (int x1 = 0) 
    {
        x = x1 ;
    }
    void print();
} ;
void Test::print()
{
    std :: cout << "        x = " << x << std :: endl; // x = 12
    std :: cout << "this -> x = " << this->x << std :: endl; // this->x = 12
    std :: cout << "(*this).x = " << (*this).x << std :: endl; // (*this).x = 12
}
int main()
{
    Test test_object(12) ;
    test_object.print();

}