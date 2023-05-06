#include <bits/stdc++.h>

using namespace std;

class MANG
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    MANG();
    MANG(int x);
    ~MANG();
};
void MANG :: nhap()
{
    // if(n == NULL)
    cout << "Nhap n: "; cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i <<"]";
        cin >> a[i];
    }
}
void MANG :: xuat()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
MANG :: MANG()
{
    n = 0;
    a = NULL;
}
MANG :: MANG(int x)
{
    n = x;
    a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = 0;
}
MANG :: ~MANG()
{
    delete [] a;
    cout << "XOA ";
}
int main()
{
    MANG a;
    a.nhap();
    a.xuat();
    cout << endl;
    MANG b(10);
    b.xuat();
    return 0;
}
