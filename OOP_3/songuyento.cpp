#include<iostream>
using namespace std ;
void testSonguyento(int n)
{
    if(n < 2)
        {
            cout << "So nay khong phai so nguyen to !!!";
            exit(0) ;
        }
    else 
  {
    int count = 0 ;
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0)
            {
                count ++ ;
            }
            if(count == 0)
            {
                cout << "So nay la so nguyen to !!!" ;
                exit(0);
            }
            else
            {
                cout << "So nay khong phai so nguyen to !!!";
                exit(0);
            }
    }
  }
    
}

int main()
{
    int n ;
    cout << "Nhap so can kiem tra : " ;
    cin >> n ;
    testSonguyento(n);

}