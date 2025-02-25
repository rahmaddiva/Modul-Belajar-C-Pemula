#include <iostream> // library untuk input output (cin dan cout)
#include <fstream> // library untuk file input output (ifstream dan ofstream) untuk menyimpan data ke dalam file txt 
#include <iomanip> // library untuk manipulasi input output (setw dan setprecision) untuk mengatur agar angka desimal yang ditampilkan tidak terlalu panjang

using namespace std; // menggunakan namespace std

// deklarasi data menu dan harga menggunakan array
const int JUMLAH_MENU = 7 ; // jumlah menu yang tersedia
string namaMenu[JUMLAH_MENU] = {"Nasi Goreng", "Mie Goreng", "Ayam Goreng", "Ayam Bakar", "Sate Ayam", "Soto Ayam", "Es Teh"}; // nama menu dalam bentuk array string
double hargaMenu[JUMLAH_MENU] = {15000, 12000, 20000, 25000, 15000, 10000, 5000}; // harga menu dalam bentuk array double 

int main()
{
    int pilihan, jumlah;// variabel ini untuk menyimpan pilihan menu dan jumlah pesanan yang diinputkan oleh user
    double total = 0.0 ; // variabel ini untuk menyimpan total harga pesanan
    char ulang ; // variabel ini untuk menyimpan pilihan user untuk mengulang pesanan atau tidak
    string rincian = "\nRincian Pemesanan : \n"; // variabel ini untuk menyimpan rincian pesanan yang diinputkan oleh user

    // tampilkan menu pemesanan mekanan dan minuman menggunakan perulangan do-while
    do {
        cout << "==========================================\n";
        cout << "Menu Pemesanan Makanan dan Minuman\n";
        cout << "Warung Makan MAMA DIVA\n";
        cout << "==========================================\n";

        // tampilkan menu makanan menggunakan array dan perulangan for loop serta fixed dan setprecision untuk mengatur angka desimal agar tidak terlalu panjang
        for (int i = 0; i < JUMLAH_MENU; i++) {
            cout << i+1 << ". " << namaMenu[i] << " : Rp. " << setprecision(15) << hargaMenu[i] << endl;
        }

        //input pilihan menu dan jumlah pesanan dari user
        cout << "=============================================\n";
        cout << "Masukkan Pilihan Menu (1 - " << JUMLAH_MENU << ") : ";
        cin >> pilihan;

        // validasi pilihan menu yang dimasukkan user dan hitung total harga pesanan serta simpan rincian pesanan
        if (pilihan >= 1 && pilihan <= JUMLAH_MENU) {
            cout << "Anda Memilih " << namaMenu[pilihan-1] << endl;
            cout << " Masukkan Jumlah Pesanan : ";
            cin >> jumlah;
            
            total += hargaMenu[pilihan-1] * jumlah;
            rincian += namaMenu[pilihan-1] + " X " + to_string(jumlah) + "\n";
        } else {
            cout << "Pilihan Menu Tidak Tersedia\n";
        }

        cout << "=============================================\n";
        cout << "Apakah Anda Ingin Memesan Lagi ? (Y/T) : ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');
    
    //tampilan total pesanan di layar menggunakan fixed dan setprecision untuk mengatur angka desimal agar tidak terlalu panjang
    cout << fixed << setprecision(2) ;
    cout << "=============================================\n";
    cout << rincian ;
    cout << "----------------------------------------------\n";
    cout << "Total pembayaran : Rp. " << total << endl;
    cout << "Terima Kasih Telah Memesan\n";
    cout << "=============================================\n";

    // simpan rincian pesanan ke dalam file txt menggunakan ofstream dan validasi apakah file berhasil disimpan atau tidak
    ofstream filePesanan("rincian_pesanan.txt");
    if (filePesanan.is_open()){
        filePesanan << "==========================================\n";
        filePesanan << rincian;
        filePesanan << "----------------------------------------------\n";
        filePesanan << "Total pembayaran : Rp. " << total << endl;
        filePesanan << "Terima Kasih Telah Memesan\n";
        filePesanan << "==========================================\n";  
        filePesanan.close();
        cout << "Rincian Pesanan Berhasil Disimpan\n";

    } else {
        cout << "Gagal Menyimpan Rincian Pesanan\n";
    }
    return 0;


 }
