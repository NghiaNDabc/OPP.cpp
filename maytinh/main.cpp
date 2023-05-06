#include <bits/stdc++.h>

using namespace std;

//class MAY
//{
//protected:
//    char  MaMay[10];
//    char LoaiMay[20];
//    char NhanHieu[30];
//    float Gia;
//public:
//    void abc(){
//        cout << "abc";
//    };
//};
//class MAYTINH : public MAY
//{
//    float CPU, RAM, HDD;
//public:
//    void nhap();
//    void xuat();
//};
//void MAYTINH :: nhap()
//{
//    cout << "Ma may: "; fflush(stdin); gets(MaMay);
//    cout << "Loai may "; fflush(stdin); gets(LoaiMay);
//    cout << "Nhan hieu: "; fflush(stdin); gets(NhanHieu);
//    cout << "gia : "; cin >> Gia;
//    cout << "CPU: "; cin >> CPU;
//    cout << "RAM : "; cin >> RAM;
//    cout << "HDD : "; cin >> HDD;
//}
//void MAYTINH :: xuat()
//{
//    cout << "Ma may: "<<MaMay << endl;
//    cout << "Loai may " << LoaiMay << endl;
//    cout << "Nhan hieu: " << NhanHieu << endl;
//    cout << "gia : " <<  Gia << endl;
//    cout << "CPU: " << CPU << endl;
//    cout << "RAM : " <<  RAM << endl;
//    cout << "HDD : " << HDD << endl;
//}
class HINH
{
   protected:
       int MAU;
       int VIEN;
   public:
    void nhap()
    {
        cout << "Mau sac: "; cin >> MAU;
        cout << "Vien: "; cin >> VIEN;
    };
    void xuat()
    {
        cout << "Mau sac: " << MAU << endl;
        cout << "Vien : " << VIEN << endl;
    };
    HINH(int x, int y)
    {
        MAU = x;
        VIEN = y;
    };
//    HINH()
//    {
//
//    };
};
class HCN : public HINH
{
    //pham trong nghia
    float D, R;
public:
    void nhap()
    {
        HINH :: nhap();
        cout << "D : "; cin >> D;
        cout << "R : "; cin >> R;
    };
    void xuat()
    {
        HINH :: xuat();
      cout << "D : " << D << endl;
        cout << "R : " << R;
    };
    HCN(int x, int y, float z, float t) : HINH(x,y)
    {
        D = z;
        R = t;
    };

};
int main()
{
    //tren
//    MAY a;
//    MAYTINH x;
//    x.nhap();
//    x.xuat();

//duoi
    HCN k(7,2,4,5);
 //   k.HINH::nhap();
  //  k.nhap();
 //   k.HINH :: xuat();
    k.xuat();
    return 0;
}
