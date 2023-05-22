#include<bits/stdc++.h>

using namespace std;
void xuat(int *p, int n){
	for (int i = 0; i < n; i++){
	
		cout << p[i] << " ";
	}
}
void Chen(int *p, int &n, int k){
	
	p = (int*) realloc(p, (n+1)*sizeof(int));
	for(int i = n; i >= k-1; i--)
		{
			p[i+1] = p[i];
		}
	p[k-1] = 100;
	n++;
}

void nhap(int *p, int &n){
	cout << "Nhap n: "; cin >> n;
	p = (int*) malloc(n*sizeof(int));
	for (int i = 0; i < n; i++){
		cout << "Nhap pt thu " << i + 1 << ": ";
		cin >>	p[i];
	}
}
int main(){
	int *p;
	int n;
	nhap(p,n);
	xuat(p,n);
	cout << endl;
	int k;
	cout << "Nhap k "; cin >> k;
	Chen(p,n,k);
	xuat(p,n);
}