#include<bits/stdc++.h>
#define ll long long
using namespace std;
class MatHang{
	string maHang;
	long long dongia;
	public:
		string getmaHang(){return maHang;}
		int getDongia(){return dongia;}
		void nhap(){
			cout<<"Nhap ma hang: "; fflush(stdin);
			getline(cin,maHang);
			cout<<"Nhap don gia: ";
			cin>>dongia;
		}
		void xuat(){
			cout<<maHang<<setw(20)<<dongia<<endl;
		}
};
class HoaDon{
		string maHang, ngayban;
		int soluong;
		public:
			string getmaH(){return maHang;}
			int getsoluong(){return soluong;}
			string getngB(){return ngayban;}
			void nhap(){
				cout<<"Nhap ma hang: "; fflush(stdin);
				getline(cin,maHang);
				cout<<"Nhap so luong: ";
				cin>>soluong;
				cout<<"Nhap ngay ban: "; fflush(stdin);
				getline(cin,ngayban);
			}
			void xuat(){
				cout<<maHang<<setw(20)<<soluong<<setw(15)<<ngayban<<endl;
			}
};
int main()
{
	int n, m;
	MatHang mh[100];
	HoaDon dh[100];
	cout<<"Nhap so luong mat hang: ";
	cin>>m;
	for(int i=0; i<m; i++) mh[i].nhap();
	cout<<"\n-----------DS MAT HANG------------\n";
	for(int i=0; i<m; i++) mh[i].xuat();
	
	cout<<"\nNhap so luong don hang: "; cin>>n;
	for(int i=0; i<n; i++) dh[i].nhap();
	cout<<"\n-----------DS DON HANG------------\n";
	for(int i=0; i<n; i++) dh[i].xuat();
	
	int dem = 0;
	for(int i =0; i<n; i++){
		if(dh[i].getsoluong()>10)
		dem++;
	}
	
	cout<<"\nSo hoa don co so luong > 10 la: "<<dem<<endl;
	if(dem == 0)
		cout<<" khong co hoa don";	
	
	string x;
	cout<<"Nhap so ngay ban: ";fflush(stdin);
	getline(cin,x);
	int sum = 0;
	for(int i=0; i<m; i++){
		if(dh[i].getngB() == x){
			for(int j=0; j<n; j++)
				if(dh[i].getmaH() == mh[j].getmaHang())
			sum += dh[i].getsoluong() * mh[j].getDongia();
		}
	}
	cout<<"Tong tien ban trong ngay "<<x<<" la: "<<sum;
	
}