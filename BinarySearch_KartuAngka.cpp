#include <iostream>
using namespace std;

int main()
{
    int n, target;
    int a[1005];

    cout << "Masukkan jumlah kartu: ";
    cin >> n;

    cout << "Masukkan angka kartu (urut menaik): ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Masukkan angka kartu yang ingin dicari: ";
    cin >> target;

    int l = 0, r = n - 1, pos = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        cout << "median : " << m << endl;

        if (a[m] == target)
        {
            pos = m;
            break;
        }
        else if (a[m] < target)
        {
            cout << "Mencari di kanan" << endl;
            l = m + 1;
        }
        else
        {
            cout << "Mencari di kiri" << endl;
            r = m - 1;
        }
    }

    if (pos != -1)
    {
        cout << "Kartu ditemukan pada indeks ke-" << pos << endl;
    }
    else
    {
        cout << "Kartu tidak ditemukan" << endl;
    }

    return 0;
}