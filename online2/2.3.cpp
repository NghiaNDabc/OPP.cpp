#include<bits/stdc++.h>

using namespace std;
class TRUONGDH;
class TRUONG{
protected:
	char MaT[10];
	char TenT[30];
	char DC[30];
public:
	void nhap();
	void xuat();
};
void TRUONG :: nhap(){
	cout << "MaT: "; fflush(stdin); gets(MaT);
	cout << "TenT: "; fflush(stdin); gets(TenT);
	cout << "DC: "; fflush(stdin); gets(DC);
}
void TRUONG :: xuat(){
	cout << "MaT: " << MaT << endl;
	cout << "TenT: " << TenT << endl;
	cout << "DC: " << DC << endl;
}
class KHOA{
	char MaK[10];
	char TenK[30];
	char TruongKhoa[30];
public:
	friend class TRUONGDH;
	friend void XOA(TRUONGDH &x);	
};

class BAN{
	char MaB[10];
	char TenB[30];
	char NgayTL[30];
public:
	friend class TRUONGDH;	
};

class TRUONGDH : public TRUONG{
	KHOA *x;
	int n;
	BAN *y;
	int m;
public:
	void nhap();
	void xuat();
	friend void XOA(TRUONGDH &x);
};
void TRUONGDH :: nhap(){
	TRUONG :: nhap();
	cout << "Nhap so KHOA (n): "; cin >> n;
	x = new KHOA[n];
	cout << "Nhap so BAN (n): "; cin >> m;
	y = new BAN[m];
	for(int i = 0; i < n; i++){
		cout << "Nhap KHOA " << i + 1 << endl;
			cout << "MaK: "; fflush(stdin); gets(x[i].MaK);
			cout << "TenK: "; fflush(stdin); gets(x[i].TenK);
			cout << "TruongK: "; fflush(stdin); gets(x[i].TruongKhoa);
			cout << endl;
	}
	for(int i = 0; i < m; i++){
		cout << "Nhap BAN " << i + 1 << endl;
			cout << "Ma Ban: "; fflush(stdin); gets(y[i].MaB);
			cout << "Ten Ban: "; fflush(stdin); gets(y[i].TenB);
			cout << "Ngay TL: "; fflush(stdin); gets(y[i].NgayTL);
			cout << endl;
	}	
}
void TRUONGDH :: xuat(){
	TRUONG :: xuat();
			cout << "KHOA " << endl;
	for(int i = 0; i < n; i++){	
			cout << setw(20) << x[i].MaK << setw(20)<< x[i].TenK  << setw(20)<< x[i].TruongKhoa << endl;
	}
			cout << "BAN " << endl;
	for(int i = 0; i < m; i++){
			cout <<setw(20) << y[i].MaB << setw(20) << y[i].TenB << setw(20) << y[i].NgayTL << endl;
	}
}
void XOA(TRUONGDH &x){
	for(int i = 0; i < x.n; i++){
		while(strcmp(x.x[i].MaK, "KH01") == 0 && i < x.n){
			for(int j = i; j < x.n - 1; j++)
				x.x[j] = x.x[j+1];
			x.n--;
		}
		x.x = (KHOA*) realloc(x.x, x.n * sizeof(KHOA));
	}
}
int main(){
	TRUONGDH x;
	x.nhap();
	cout << "Xuat: " << endl;
	x.xuat();
	XOA(x);
	x.xuat();
}



