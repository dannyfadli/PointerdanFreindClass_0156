#include <iostream>
using namespace std;

class mahasiswa
{
    public:
        int nim;
        void showNim()
        {
            cout << "No induk = " << nim << endl;
        }
};

int main()
{
    mahasiswa mhs{1};       //Object mhs
    mhs.showNim();          //Member access Operator 

    mahasiswa& refMhs = mhs;//pointer reference refmhs
    refMhs.nim = 2;         //member acces operator
    mhs.showNim();
}

