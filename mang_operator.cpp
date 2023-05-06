// cài đặt lớp Mảng sô nguyên
// Phương thức khởi tạo (có đối, không đối)
//nhập, xuất();
//toán tử cộng 2 mảng cùng kích thước, nếu hai mảng không cùng trả về mảng rỗng

// đổi dấu 1 mảng
// toán tử sắp 1 mảng tăng dần
#include<bits/stdc++.h>

using namespace std;
class ARRAY{
	int* values;
	int n;
public:
	void nhap();
	void xuat();
	ARRAY();
	ARRAY(int x);
	~ARRAY();
	ARRAY operator+(ARRAY y); // cộng hai mảng cùng kích thước
	ARRAY operator-();
	ARRAY operator++(); // sắp xếp
};
ARRAY :: ARRAY(){
	n = 0;
	values = NULL;
}
ARRAY :: ARRAY(int x){
	n = x;
	values = new int[n];
	for(int i=0; i < n; i++)
		values[i] = 0;
}
ARRAY ARRAY :: operator+(ARRAY y){
	ARRAY kq;
	if(y.n == n){
		kq.n = n;
		kq.values = new int[n];
		for(int i = 0; i < n; i++)
			kq.values[i] = values[i] + y.values[i];
	}
	return kq;
}
ARRAY ARRAY :: operator-(){
		for(int i = 0; i < n; i++)
			values[i] = -values[i];
		return *this;
}
ARRAY ARRAY :: operator++()
{
	for(int i = 0; i < n - 1; i++){
		int m = i;
		for(int j = i + 1; j < n; j++)
			if(values[j] < values[m]) m = j;
		if(m!=i) swap(values[m], values[i]);
	}
	return *this;
}
void ARRAY :: nhap(){
	cout << "Nhap n: "; cin >> n;
	values = new int[n];
	for(int i=0; i < n; i++){
		cout << "Phan tu thu " << i + 1 << " : ";
		cin >> values[i];
	}
}
void ARRAY :: xuat(){	
	for(int i=0; i < n; i++)
	cout << values[i] << " ";
}
ARRAY::~ARRAY(){
	n  = 0;
	delete [] values;
}
int main(){
	ARRAY x,y;
	cout << "Nhap mang x: " << endl;
	x.nhap();
	x.xuat();	
	cout << endl << "Nhap mang y: " << endl;
	y.nhap();
	y.xuat();
	 y.operator-();
    cout << "doidau : ";
    y.xuat();
//	++y;
//    cout << "sap xep : ";
//    y.xuat();
//   
//	ARRAY T;
//	cout << endl;
//	T = x+y;
//	T.xuat();
}