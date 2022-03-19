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
    void cetakBarang(){
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
    // getter
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

/*===========================================================*/

  // add implementation inheritance

class Coffee : public Barang {
        public: 
        // property barang has been added
        // tambahan property
        string jenisKopi;
        int levelKopi;
        // constructor
        Coffee(string namaBarang = "", int jumlahBarang = 0, string jenisKopi = "", int levelKopi  = 0 ){
        Coffee::namaBarang = namaBarang;
        Coffee::jumlahBarang = jumlahBarang;
        Coffee::jenisKopi = jenisKopi;
        Coffee::levelKopi = levelKopi;
        }

        // method setter
        void setJenisKopi( string jenisKopi ) {
        Coffee::jenisKopi = jenisKopi;
        }
        void setLevelKopi(int levelKopi ) {
        Coffee::levelKopi = levelKopi;
        }
        // getter
        string setJenisKopi() {
        return Coffee::jenisKopi;
        }
        int setLevelKopi() {
        return Coffee::levelKopi;
        }
        /* ============================================= */
        // overriding
        void cetakBarang(){
        Barang::cetakBarang();
        cout << "jenis kopi: " << jenisKopi << endl
        << "kopi bintang " << levelKopi << endl;
        }   
};


int main()
{
    // inisiasi obj
  Barang barang1;
    // acess property
  barang1.namaBarang = "skincare";
  barang1.jumlahBarang = 100;
  barang1.cetakBarang();
    // access methods
  barang1.tambahStok(20);
  cout << "adakah stok barang? " << barang1.cekStok() << endl;
  barang1.cetakBarang();
    // access property from constructor
  Barang barang2("sneakers", 100);
  barang2.cetakBarang();
    // access setter
  barang2.setJumlahBarang(150);
  barang2.cetakBarang();
  
  
/*===========================================================*/

  // add implementation inheritance
    // access class inheritance
    Coffee kopi1("Coffe latte", 100, "Robusta", 5);
    // 
    kopi1.cetakBarang();
  
  return 0;
}

// add implementation inheritance
// overriding & overloading

