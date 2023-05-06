#include <bits/stdc++.h>

using namespace std;
class NSX
{
    char Mansx[12];
    char Tennsx[32];
    char DCNSX[32];
    friend class HANG;
};
class HANG
{
   char Mahang[12];
   char Tenhang[32];
   float Dongia;
   float Trongluong;
   NSX x;
public:
    void NHAP();
    void XUAT();
};
void HANG :: NHAP()
{
    cout << "Mahang: "; fflush(stdin); gets(Mahang);
    cout << "Tenhang: "; fflush(stdin); gets(Tenhang);
    cout << "Don gia: ";   cin >>Dongia;
    cout << "Trong luong: "; cin >> Trongluong;

    cout << "Mansx: "; fflush(stdin); gets(x.Mansx);
    cout << "Tennsx: "; fflush(stdin); gets(x.Tennsx);
    cout << "DCNSX: "; fflush(stdin); gets(x.DCNSX);

}
void HANG :: XUAT()
{
  cout << "Mahang: " << Mahang<< endl;
    cout << "Tenhang: " << Tenhang << endl;
    cout << "Don gia: " << Dongia<< endl;
    cout << "Trong luong: " << Trongluong << endl;

    cout << "Mansx: " << x.Mansx << endl;
    cout << "Tennsx: " << x.Tennsx<< endl;
    cout << "DCNSX: " << x.DCNSX<< endl;
}

int main()
{
    HANG x;
    x.NHAP();
    x.XUAT();

    return 0;
}
