#include<iostream>
using namespace std;
class Dayso
{
	private:
		int n;
        int *a ; // Khai bao con tro nguyen
	public:
		friend istream& operator>>(istream &is, Dayso &p)
		{
			cout << "Nhap n = "; 
            is >> p.n;
            p.a = new int[p.n + 1]; // cap phat dong mang
            cout << "Nhap cac phan tu cua day so : ";
            for(int i = 0 ; i < p.n ; i ++)
            {
                is >> p.a[i];
            }
            return is ;
		}
		friend ostream& operator<<(ostream &os, Dayso &p)
		{
			for(int i = 0 ; i < p.n ; i ++)
            {
                os << p.a[i] << " " ;
            }
            os << endl ;
            return os ;
		}
        double tbc()
        {
            int t = 0 ;
            for(int i = 0 ; i < n ; i ++)
            {
                t += a[i] ;
            }
            return t/n ;
        }
};
int main()
{
	Dayso a ;
    cin >> a ;
    cout << a ;
    cout << "Trung binh cong cua day so la : " << a.tbc() ;
}
