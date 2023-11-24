#include <iostream>
using namespace std;

int main()
{
    cout << "\nSELAMAT DATANG KAMPUS DI KAMPUS JAYA ABADI\n" << endl;

    int data[3][5] = {
        {150, 200, 180, 210, 190}, // TI
        {100, 120, 130, 150, 150}, // SI
        {160, 180, 190, 220, 200}  // Ekonomi
    };

    int jurusan, tahun;

    cout << "JUMLAH ALUMNI MAHASISWA 2010 - 2014" << endl;

    while (1)
    {
        cout << "Pilihan jurusan :\n"
             << "0. TI\n"
             << "1. SI\n"
             << "2. EKONOMI\n"
             << "Pilih : ";
        cin >> jurusan;

        if (jurusan < 3 && jurusan >= 0)
        {
            break;
        }
        else
        {
            cout << "Jurusan yang anda masukan tidak sesuai dengan konteks , silahkan masukan ulang" << endl;
        }
    }

    while (1)
    {
        cout << "Pilihan tahun 2010-2014 : \n"
             << "0. 2010\n"
             << "1. 2011\n"
             << "2. 2012\n"
             << "3. 2013\n"
             << "4. 2014\n"
             << "Pilih: ";
        cin >> tahun;

        if (tahun < 5 && tahun >= 0)
        {
            break;
        }
        else
        {
            cout << "Tahun yang anda masukan tidak sesuai dengan konteks , silahkan masukan ulang" << endl;
        }
    }

    cout << "Jumlah alumni : " << data[jurusan][tahun] << endl;

    cin.get();
    return 0;
}
