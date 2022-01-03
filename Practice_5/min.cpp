#include<iostream>
using namespace std ;
int main()
{
    int n[] = {1,2,3,4,5,6,7,8} ;
    int min = n[0] ;
    for(int i = 0 ; i < 8 ; i ++)
    {
        if(min < n[i]) min = n[i] ;
    }
    cout << min ;
}