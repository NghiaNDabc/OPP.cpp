#include<bits/stdc++.h>

using namespace std;

class ARRAY{
	int *value;
	int n;
public:
	ARRAY();
	ARRAY(int x);
	~ARRAY();
	void NHAP();
	void XUAT();
};
ARRAY :: ARRAY(){
	n = 0;
}
ARRAY :: ~ARRAY(){
	n = 0;
	delete [] value;
}

ARRAY :: ARRAY(int x){
	n = x;
	value = new int[n];	
	for(int i = 0; i < n; i++)
		 value[i] = 0;
	
}
void ARRAY :: NHAP(){
	if(n == 0){
		cout << "NHap n: "; cin >> n;
	}
	if(value == NULL)
	value = new int[n];
	
	for(int i = 0; i < n; i++){
		cout << "Nhap gia tri thu " << i + 1;
		cin >> value[i];
	}
	
}
void ARRAY :: XUAT(){
	for(int i = 0; i < n; i++)
	 cout<<value[i]<<" ";		
}
int main(){
	ARRAY a(8);
	cout << "Khoi tao manng:  " << endl;
	a.XUAT();
	cout << "Nhap mang : " << endl;
	a.NHAP();
	a.XUAT();	
}