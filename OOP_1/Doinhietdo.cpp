#include<iostream>
#include<iomanip>
using namespace std ;
void  nhietdo()
{
    for (int i = 10; i <  41; i++)
    {
        if(i%2==0)
        {
            cout << setw(5) << i << " Do C " << "\t" << setw(10) << (i*9/5) + 35 << " Do F " << endl ;
        }
        
    }
    
}


int main()
{
    cout << setw(10) << "Celcius" << setw(25) << "Farenheited" << endl << endl ;
    nhietdo();

}