#include <iostream>

using namespace std;

class Barang {
    // property || attribute
    public:
    string namaBarang;
    int jumlahBarang;
    // constructor
    Barang(string namaBarang = "", int jumlahBarang = 0){
      Barang::namaBarang = namaBarang;
      Barang::jumlahBarang = jumlahBarang;
    }
    // methods
    public:
    void isiBarang(){
        cout << "nama barang: " << Barang::namaBarang << endl << "jumlah barang: " << Barang::jumlahBarang << endl;
    }
    void tambahStok(int tambah){
        jumlahBarang = jumlahBarang + tambah;
        cout << "stok berhasil ditambahakan jadi: " << jumlahBarang << endl; 
    }
    bool cekStok() {
        if(jumlahBarang > 0 ) {
            return true;
        } else {
            return false;
        }
    }
    // method setter
    void setNamaBarang( string namaBarang ) {
      Barang::namaBarang = namaBarang;
    }
    void setJumlahBarang(int jumlahBarang ) {
      Barang::jumlahBarang = jumlahBarang;
    }
    string getNamaBarang() {
      return Barang::namaBarang;
    }
    int getJumlahBarang() {
      return Barang::jumlahBarang;
    }
    // destructor
    // ~Barang(){
    // }
};


int main()
{
    // inisiasi obj
  Barang barang1;
    // acess property
  barang1.namaBarang = "skincare";
  barang1.jumlahBarang = 100;
  barang1.isiBarang();
    // access methods
  barang1.tambahStok(20);
  cout << "adakah stok barang? " << barang1.cekStok() << endl;
  barang1.isiBarang();
    // access property from constructor
  Barang barang2("sneakers", 100);
  barang2.isiBarang();
    // access setter
  barang2.setJumlahBarang(150);
  barang2.isiBarang();
  return 0; 
}
