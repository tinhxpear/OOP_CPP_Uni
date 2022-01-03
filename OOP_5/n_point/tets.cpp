#include<iostream>
#define cout std :: cout
#define cin std :: cin 
class Sinhvien
{
	private:
		std :: string name ;
		int birthday,p_program,p_data,p_web;
	public:
		void input();
		friend void n_input(const int &n, Sinhvien *a);		
};
void Sinhvien::input()
{	
	cout << "Nhap ten sinh vien : ";
	getline(cin,name);
	cout << "Nhap tuoi : ";
	cin >> birthday;
	cout << "Nhap diem lap trinh : ";
	cin >> p_program ;
	cout << "Nhap diem cau truc du lieu : ";
	cin >> p_data ;
	cout << "Nhap diem thiet ke web : ";
	cin >> p_web ;
}
void n_input(const int &n, Sinhvien *a)
{
	for(int i = 1 ; i <=n ; i ++)
	{
		cout << "Sinh vien " << i << ": \n";
		a[i].input();
	}
}
int main()
{
	int n ;
	cout << "Nhap so luong sinh vien : ";
	cin >> n ;
	cin.ignore();
	Sinhvien *a = new Sinhvien[n];
	n_input(n,a);	
}