#include<bits/stdc++.h>
using namespace std;

class MatHang
{
	private:
		string MH;
		int DG;
	public:
		void nhap()
		{
			cin.ignore(1);
			cout << "Nhap ma hang: "; getline(cin, MH);
			cout << "Nhap don gia: "; cin >> DG;
		}
		void xuat()
		{
			cout << "MH : " << MH << setw(15) << "DG : " << DG;
		}
}; 

class HoaDon
{
	private:
		string MaH, Ngay;
		int SL;
	public:
		void nhap()
		{
			cout << "Nhap ma hang: "; fflush(stdin); getline(cin, MaH);
			cout << "Nhap so luong: "; cin >> SL;
			cout << "Nhap ngay ban: "; fflush(stdin); getline(cin, Ngay);
		}
		void xuat()
		{
			cout << "MH : " << MaH << setw(15) << "SL : " << SL << setw(20) << "Ngay : " << Ngay;
		}
		int getSL()
		{
			return SL;
		}
}; 

int main()
{
	int n, m;
	cout << "Nhap so hoa don n = "; cin >> n;
	MatHang *a = new MatHang[m+1];
	HoaDon *b = new HoaDon[n+1];
//Nhap m Mat Hang
//	cout << "Nhap so mat hang m = "; cin >> m;
//	for(int i=0; i<m; i++)
//	{
//		a[i].nhap();
//		cout << endl;
//	}
//	for(int i=0; i<m; i++)
//	{
//		a[i].xuat();
//		cout << endl;
//	}

//Nhap n Hoa Don
	
	for(int i=0; i<n; i++)
	{
		b[i].nhap();
		cout << endl;
	}
	// for(int i=0; i<n; i++)
	// {
	// 	b[i].xuat();
	// 	cout << endl;
	// }

//Dem so hoa don co so luong lon hon 10
	// int d = 0;
	// for(int i=0; i<n; i++)
	// {
	// 	if(b[i].getSL() > 10)
	// 	{
	// 		d++;
	// 	}
	// }
	// cout << "So hoa don lon hon 10 la: " << d;
}
