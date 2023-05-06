#include<bits/stdc++.h>

class NCC{
	char MaNCC[10];
	char TenNCC[50];
	char DCNCC[50];
public:
	void nhap();
	void xuat();
};
void NCC :: nhap()
{
	cout << "Ma ncc: "; fflush(stdin); gets(MaNCC);
	cout << "TenNCC: "; fflush(stdin); gets(TenNCC);
	cout << "DCNCCBBBBBB: "; fflush(stdin); gets(DCNCC);
}
void NCC :: xuat(){
		cout << "Ma ncc: " << MaNCC << endl;
	cout << "TenNCC: " << TenNCC << endl;
	cout << "DCNCCAAA: " << DCNCC << endl;
}

int main()
{
}
