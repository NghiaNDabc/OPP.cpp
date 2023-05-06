#include<iostream>
#include<iomanip>

using namespace std;

class SACH{
	char Masach[10];
	char Tensach[30];
	char Nxb[30];
	int Sotrang;
	float Giatien;
public:
	void NHAP();
	void XUAT();
};
void SACH :: NHAP(){
	cout << "Masach: " ; fflush(stdin); gets(Masach);
	cout << "Tensach "; fflush(stdin); gets(Tensach);
	cout << "Nxb : "; fflush (stdin); gets(Nxb);
	cout << "Sotrang: "; cin >> Sotrang;
	cout << "Giatien: "; cin >> Giatien;
}
void SACH :: XUAT(){
	cout << setw(10) << Masach << setw(20) << Tensach ;
	cout << setw(20) << Nxb << setw(5) << Sotrang << setw(5) << Giatien;
}
int main(){
	SACH* a;
	int n;
	cout << "Nhap n: "; cin >> n;
	a = new SACH[n];
	for (int i = 0; i < n; i++){
		cout << "Nhap sach " << i + 1 << endl;
		a[i].NHAP();
	}
	for (int i = 0; i < n; i++){

		a[i].XUAT();
		cout << endl;
	}
	free(a);	
}