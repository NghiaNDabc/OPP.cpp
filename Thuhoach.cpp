#include <bits/stdc++.h>

using namespace std;

class HANG{
	char MAH[10];
	char TENH[30];
	float DG;
	int SL;
	int NAM;
public:
	HANG();
	HANG(char*x, char*y, float z, int t, int q);
	friend istream& operator>>(istream& x, HANG &y);
	friend ostream& operator<<(ostream& x, HANG y);
	friend bool checkIP12(HANG *h, int n);
	friend void NhapHang(HANG *&h, int &n);
	friend void XoaMoi20(HANG *&h, int &n);
	friend void SORT(HANG *h, int n);
	friend void XoaMoiH005(HANG *&h, int &n);
	
};
HANG :: HANG(){
	strcpy(MAH, "");
	strcpy(TENH, "");
	DG =0;
	SL =0;
	NAM =0;
}
HANG :: HANG(char*x, char*y, float z, int t, int q){
	strcpy(MAH, x);
	strcpy(TENH, y);
	DG =z;
	SL =t;
	NAM =q;
}
istream& operator>>(istream& x, HANG &y){
	cout << "MaH: "; fflush(stdin); x.getline(y.MAH,10);
	cout << "TenH: "; fflush(stdin); x.getline(y.TENH,30);
	cout << "DG: "; x >> y.DG;
	cout << "SL: "; x >> y.SL;
	cout << "Nam : "; x >> y.NAM;
	return x;
}

ostream& operator<<(ostream& x, HANG y){
	x << setw(10) << y.MAH << setw(20) << y.TENH << setw(20)<<  y.DG << setw(10) <<  y.SL << setw(10) <<  y.NAM << endl;
	return x;
}
void inVaoTep(HANG*h, int n, char *k){
	fstream f(k, ios :: out);	
	for( int i = 0; i < n; i++){
		cout <<  h[i];
		f << h[i];
		cout << endl;
	}
	f.close();
}
void NhapHang(HANG *&h, int &n){
		cout << "Nhap n: "; cin >> n;
		h = new HANG[n];
		for( int i = 0; i < n; i++){
		cout << "Nhap hang " << i << " :" << endl;
		cin >> h[i];
		cout << endl;
	}

}
bool checkIP12(HANG *h, int n){
	for ( int i = 0; i < n; i++)
	{
		if(strcmp(h[i].TENH,"IPHONE 12") == 0)
			return true;
	}
	return false;
}
void SORT(HANG *h, int n){
	for ( int i = 1; i < n; i++)
		for ( int j = 0; j < n - i; j++)
			if(h[j].DG * h[j].SL > h[j + 1].DG * h[j + 1].SL) 
				swap(h[j], h[j+1]);
}
//Xóa mặt hàng có mã H005 ra khỏi danh sách, xuất danh sách đã xóa vào
//tệp HANGREMOVE.TXT
void XoaMoiH005(HANG *&h, int &n){
	 for ( int i = 0; i < n; i++){
	 	while(strcmp(h[i].MAH,"H005") == 0 && i < n){
	 		for(int j = i; j < n-1; j++)
	 			h[j] = h[j+1];
	 		n--;
	 	}
	 h = (HANG*) realloc(h, n* sizeof(HANG));	
	}
}
//Xóa mọi mặt hàng có đơn giá nhỏ hơn 20 ra khỏi danh sách, xuất danh
//sách đã xóa vào tệp HANGREMOVE.TXT
void XoaMoi20(HANG *&h, int &n){
	 for ( int i = 0; i < n; i++){
	 	while(h[i].DG < 20 && i < n){
	 		for(int j = i; j < n-1; j++)
	 			h[j] = h[j+1];
	 		n--;
	 	}
	 h = (HANG*) realloc(h, n* sizeof(HANG));	
	}
}

int main(){
	HANG *h;
	int n;
  	NhapHang(h,n);
  	inVaoTep(h,n,"D:/HANGNHAP.txt");
  	
	if(checkIP12(h,n)) cout << "Co ip12" << endl;
		else cout << "khong Co ip12" << endl;

	
	cout << "==================" << endl <<"Sap xep hang: " << endl;
	SORT(h,n);
	inVaoTep(h,n,"D:/HANGSORT.txt");
	
	cout << "==================" << endl <<	"Hang sau khi xoa H005: " << endl;
	XoaMoiH005(h,n);
	inVaoTep(h,n,"D:/HANGREMOVE.txt");
	
	
	cout << "==================" << endl <<	"Hang sau khi xoa DG < 20: " << endl;
	XoaMoi20(h,n);
	inVaoTep(h,n,"D:/HANGREMOVE.txt");
	return 0;
	
}