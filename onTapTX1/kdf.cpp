#include<bits/stdc++.h>

using namespace std;
char TenNSX[20];
	char DCNSX[30];
public:
	friend class HANGHOA;
	friend void XuatHaiHa(BANHKEO *x, int n);
};
class HANGHOA{
protected:
	char TenH[30];
	NHASX NSX;
	int DG;
public:
	void input();
	void output();
};
void HANGHOA :: input(){
	cout << "\tNhap Ten Hang: "; fflush(stdin); gets(TenH);
	cout << "\tNhap Ten NSX: "; fflush(stdin); gets(NSX.TenNSX);
	cout << "\tNhap Dia Chi NSX: "; fflush(stdin); gets(NSX.DCNSX);
	cout << "\tNhap Don Gia: "; cin >> DG;	
}
void HANGHOA :: output(){
	cout << setw(15) << TenH << setw(20) << NSX.TenNSX << setw(20) << NSX.DCNSX << setw(6) << DG;
}
class DATE{
	int D, M, Y;
public:
	friend class BANHKEO;
	friend void XuatHaiHa(BANHKEO *x, int n);
};
class BANHKEO:public HANGHOA{
	int KT;
	DATE NN;
public:
	void input();
	void output();
	friend void Sap(BANHKEO *x, int n);
	friend void Chen(BANHKEO *x, int &n, int k,BANHKEO m);
	friend void XuatHaiHa(BANHKEO *x, int n);
};
void BANHKEO :: input(){
	HANGHOA :: input();
	cout <<"\tNhap Kich Thuoc: "; cin >> KT;
	cout << "\tNgay: "; cin >> NN.D;
	cout << "\tThang: "; cin >> NN.M;
	cout << "\tNam: "; cin >> NN.Y;
}
void BANHKEO:: output(){
	HANGHOA :: output();
	cout <<setw(15) << KT << "\t"<< NN.D << "/" <<  NN.M << "/"<< NN.Y << endl;
}
void Xuat(BANHKEO *x, int n){
	cout << setw(15) << "Ten Hang"<< setw(20) << "Ten NSX" << setw(20) << "DC NSX " << setw(6) << "DOn gia";
	cout <<setw(15) << "Kich Thuoc " << "\t"<< "Ngay Nhap"<< endl;
	for(int i = 0; i < n; i++){
		x[i].output();
	}
}
void XuatHaiHa(BANHKEO *x, int n){
	cout << setw(15) << "Ten Hang"<< setw(20) << "Ten NSX" << setw(20) << "DC NSX " << setw(6) << "DOn gia";
	cout <<setw(15) << "Kich Thuoc " << "\t"<< "Ngay Nhap"<< endl;
	for(int i = 0; i < n; i++){
		if(strcmp(x[i].NSX.TenNSX,"Hai Ha") == 0 && x[i].NN.M == 3 && x[i].NN.Y==2021 )
		x[i].output();
	}
}
void Sap(BANHKEO *x, int n){
	for(int i = 1; i < n; i++)
		for(int j = 0; j < n - 1; j++ )
			if(x[j].DG > x[j+1].DG)
				swap(x[j],x[j+1]);
}
void Chen(BANHKEO *x, int &n, int k,BANHKEO m){
	x = (BANHKEO*) realloc(x,(n+1)*sizeof(BANHKEO));
	for (int i = n; i >= k - 1; i--)
		x[i+1] = x[i];
		x[k-1] = m;
	n++;
}
int main(){
	BANHKEO *x;
	int n;
	cout << "Nhap so luong banh keo:"; cin >> n;
	x = new BANHKEO[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap BANHKEO thu " << i +1 << endl;
		x[i].input();
	}
	cout << "Hang co Ten Hai Ha: " << endl;
	XuatHaiHa(x,n);
	Sap(x,n);
	cout << endl;
	cout << "Sau khi xep:" << endl;
	Xuat(x,n);
	int k;
	BANHKEO m;
	cout << endl;
	cout << "\nNhap vi tri can chen :"; cin >> k;
	cout << "Nhap banh keo can chen: "<< endl; m.input();
	Chen(x,n,k,m);
	Xuat(x,n);
	return 0;
		
}