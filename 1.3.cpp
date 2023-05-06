#include<iostream>
#include<iomanip>

using namespace std;

class HANG{
	char Mahang[10];
	char Tenhang[30];
	float Dongia;
	int Soluong;
public:
	void 	NHAP();
	void XUAT();
};
void HANG :: NHAP(){
	cout << "Mahang : "; fflush(stdin) ; gets(Mahang);
	cout << "Tenhang: " ; fflush(stdin);  gets(Tenhang);
	cout << "Dongia: "; cin >> Dongia;
	cout << "Soluong: " ; cin >> Soluong;
}
void HANG :: XUAT(){
	cout << setw(10) << Mahang << setw(20) << Tenhang << setw(20) << Dongia << setw(5) << Soluong;
}
int main(){
	HANG* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new HANG[n];
	for (int i = 0; i < n; i++){
		cout << "Nhap mat hang thu " << i << endl;
		a[i].NHAP();
	}
	for (int i = 0; i < n; i++){
		a[i].XUAT();
	}
	free(a);
}