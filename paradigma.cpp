#include <iostream>
using namespace std;
 
class Mahasiswa{
public :
    int nim;
    string nama;
    float nilai;
    
    void printdata(){
        cout<< " << nim " << endl;
        cout << " << nama" << endl;
        cout << " << nilai" << endl;
    }
}; //batas class

int main(){
    Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "abra"; 
    