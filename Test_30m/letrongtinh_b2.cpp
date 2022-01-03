#include<bits/stdc++.h>
using namespace std;
class monhoc{
	string ma, ten;
	int sotin;
	public:
		string getma(){
			return ma;
		}
		void nhap();
		void xuat();
};
void monhoc::nhap(){
	cout<<"nhap ma : ";
	fflush(stdin);
	getline(cin, ma);
	cout<<"nhap ten : ";
	fflush(stdin);
	getline(cin, ten);
	cout<<"nhap so tin : ";
	cin>>sotin;
}
void monhoc::xuat(){
	cout<<setw(20)<<left<<ma<<" || "<<setw(30)<<ten<<" || "<<setw(10)<<sotin;
}
class DKHP{
	int n;
	monhoc *mh;
	string masv, tensv;
	public:
		int getn(){
			return n;
		}
		void nhap(){
//			cout<<"nhap so sinh vien : ";
//			cin>>n;
//			mh=new monhoc[n+5];
//			for(int i=0; i<n; i++){
//				
//			}
			cout<<"nhap ma sv: ";
			fflush(stdin);
			getline(cin, masv);
			cout<<"nhap ho ten sv: ";
			fflush(stdin);
			getline(cin, tensv);
			cout<<"nhap so mon hoc sinh vien dang ki : ";
			cin>>n;
			mh=new monhoc[n+5];
			for(int i=0; i<n; i++){
				mh[i].nhap();
			}
		}
		void xuat(){
			cout<<"ma sinh vien : "<<masv;
			cout<<"ten sinh vien : "<<tensv;
			for(int i=0; i<n; i++){
				mh[i].xuat();
			}
		}
};
class allmh{
	int n;
	monhoc *mh;
	public:
		void nhap(){
			cout<<"nhap so mon hoc : ";
			cin>>n;
			mh=new monhoc[n+5];
			for(int i=0; i<n; i++){
				mh[i].nhap();
			}
		}
		void xuat(){
			for(int i=0; i<n; i++){
				mh[i].xuat();
			}
		}
};
class alldkhp{
	int n;
	DKHP *a;
	public:
		void nhap(){
			cout<<"nhap so sinh vien: ";
			cin>>n;
			a=new DKHP[n+1];
			for(int i=0; i<n ;i++){
				a[i].nhap();
			}
		}
		void xuat(){
			cout<<"\ndanh sach sinh vien : ";
			for(int i=0; i<n; i++){
				a[i].xuat();
			}
		}
		void ktra(string t){
			int dem=0;
			for(int i=0; i<n; i++){
				for(int j=0; j<a[i].getn();j++){
				
				}
			}
		}
};
main(){
	allmh mh;
	alldkhp a;
	cout<<"nhap danh sach cac mon hoc cho truoc : \n";
	mh.nhap();
	mh.xuat();
	cout<<"\n--------dkhp---------\n";
	a.nhap();a.xuat();
}