#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string baris;
    string namafile;

    cout << "masukkan nama file : ";
    cin >> namafile;

    //membuka file dalam mode menulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(namafile, ios::out);

}


