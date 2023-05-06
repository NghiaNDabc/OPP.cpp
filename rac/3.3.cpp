#include<bits/stdc++.h>

using namespace std;
class HANG;
class DATE
{
	int D;
	int Y;
	int M;
	friend class HANG;
	friend void Hang2017(HANG* x, int n);
};

class HANG
{
	char Mahang[10];
	char Tenhang[30];
	DATE NSX;
public:
	void NHAP();
	void XUAT();
	friend void Hang2017(HANG* x, int n);
	
};

void HANG :: NHAP()
{
	cout << "Ma hang: "; fflush(stdin); gets(Mahang);
	cout << "Ten Hang: "; fflush(stdin); gets(Tenhang);
	cout << "Ngay: "; cin >> NSX.D;
	cout << "Thang: "; cin >> NSX.M;
	cout << "Nam: "; cin >> NSX.Y;
}
void HANG :: XUAT(){
	cout << setw(10) << Mahang << setw(15) << Tenhang << setw(20) << NSX.D << "/" << NSX.M << "/" << NSX.Y;
	cout << endl;
}
void Hang2017(HANG* x, int n)
{
	cout << endl <<"cac mat hang sx 2017 " << endl;
	for(int i = 0; i < n; i++){
		if(x[i].NSX.Y == 2017)
		x[i].XUAT();
	}
}
int main()
{
 HANG* x;
 int n;
 cout << "NHap so mat hang: "; cin >> n;
 x = new HANG[n];
 for(int i = 0; i < n; i++)
 x[i].NHAP();
 for(int i = 0; i < n; i++)
 x[i].XUAT();
  Hang2017(x, n);
 return 0;	
}