#include <iostream>

using namespace std;

int main(void)
{
    char namaAku[] = {"Mohamad Ilham"};
    char *pNama = namaAku;

    unsigned long long int nomorNim[] = {231011403251};
    unsigned long long int *pNim = nomorNim;

    int tglLahir[] = {27, 2, 2004};
    int *pTgl = tglLahir;

    cout << "Nama: ";
    for (int iNama = 1; iNama <= 13; iNama++)
    {
        cout << *pNama;
        pNama++;
    }
    cout << endl;

    cout << "NIM: ";
    for (int iNim = 1; iNim <= 1; iNim++)
    {
        cout << *pNim;
        pNim++;
    }
    cout << endl;

    cout << "Tanggal Lahir: ";
    for (int iTgl = 1; iTgl <= 3; iTgl++)
    {
        cout << *pTgl;
        if (iTgl < 3)
        {
            cout << "-";
        }
        pTgl++;
    }

    return 0;
}