/* Membuat program sewa lapangan futsal
    Nama Kelompok : 
        Aditiya Permana
        Kevin Renaldo
        Rizky Kaisar 
        Fajar*/

#include <iostream>
using namespace std;

int main()
{

    //Deklarasi variable dan Tipe data
    string nama, member, status;
    long masukkan_bayar, total_bayar, total_akhir, kembalian, harga_lapangan;
    int lama_sewa, tgl_sewa, jam_sewa;
    int hrg_siang, hrg_malam;
    double diskon;

    //nilai variable
    hrg_siang = 80000;
    hrg_malam = 125000;
    diskon = 0.1;

    //Looping dengan Do
    do
    {

        // Tampilan Jadwal & Harga Lapangan Futsal
        cout << "===============================================================" << endl;
        cout << "|                      LAPANGAN FUTSAL 99                     |" << endl;
        cout << "|                   Daftar Harga Sewa Lapangan                |" << endl;
        cout << "===============================================================" << endl;
        cout << "|      Waktu Sewa                                Harga Sewa   |" << endl;
        cout << "|    09.00 - 18.00                              80.000 / Jam  |" << endl;
        cout << "|    18.00 - 21.00                             125.000 / jam  |" << endl;
        cout << "|                   UNTUK MEMBER DISKON 10%                   |" << endl;
        cout << "===============================================================" << endl;

        //Input Data Penyewaan Lapangan
        cout << "Nama Penyewa                                      : ";
        cin >> nama;
        cout << "Ingin Menyewa Lapangan Berapa Lama                : ";
        cin >> lama_sewa;
        cout << "Jam Berapa Anda Ingin Menyewa Lapangan (9 s.d 21) : ";
        cin >> jam_sewa;
        cout << "Masukkan Tanggal Sewa Lapangan (1 s.d 30)         : ";
        cin >> tgl_sewa;
        cout << "===============================================================" << endl;

        /* Logik Penyewaan Siang
        Dari Jam 09.00 s.d 18.00 */
        if (jam_sewa >= 9 && jam_sewa <= 18)
        {
            if (lama_sewa <= 1)
            {
                harga_lapangan = hrg_siang;
            }
            else if (lama_sewa >= 2)
            {
                harga_lapangan = hrg_siang * lama_sewa;
            }
        }

        /* Logik Penyewaan Malam
        Dari Jam 19.00 s.d 21.00 */
        else if (jam_sewa >= 19 && jam_sewa <= 21)
        {
            if (lama_sewa <= 1)
            {
                harga_lapangan = hrg_malam;
            }
            else if (lama_sewa >= 2)
            {
                harga_lapangan = hrg_malam * lama_sewa;
            }
        };

        //View Data Penyewaan Lapangan
        cout << "Atas Nama                                         : " << nama << endl;
        cout << "Lama Penyewaan Lapangan Dalam Jam                 : " << lama_sewa << endl;
        cout << "Waktu Jam Sewa Lapangan                           : " << jam_sewa << endl;
        cout << "Waktu Tanggal Sewa Lapangan                       : " << tgl_sewa << endl;
        cout << "Total Harga Penyewaan Lapangan                    : " << harga_lapangan << endl;
        cout << "===============================================================" << endl;

        //Input Data Member atau Non Member
        cout << "Apakah Anda Member (y/t)                          : ";
        cin >> member;
        cout << "===============================================================" << endl;

        /*Logik member
        Menggunakan Opertaor Logika OR */
        if (member == "y" || member == "Y")
        {
            //Output Jika Member
            cout << "Selamat Anda Mendapat Diskon 10%" << endl;
            total_bayar = harga_lapangan - (harga_lapangan * diskon);
        }
        else if (member == "t" || member == "T")
        {
            //Output Jika Tidak Member
            total_bayar = harga_lapangan;
        }

        //Total Bayar lapangan sebelum meberi uang nya
        cout << "Total Bayar Lapangan Yang Anda Sewa               : " << total_bayar << endl;

        //Membayar Uang
        cout << "===============================================================" << endl;
        cout << "Masukkan Jumlah Uang                              : ";
        cin >> masukkan_bayar;

        //Logik Pembayaran
        if (masukkan_bayar >= total_bayar)
        {
            total_akhir = masukkan_bayar - total_bayar;
            kembalian = total_akhir;
        }
        else
        {
            total_akhir = total_bayar;
        }

        //Output Pengembalian Uang
        cout << "Kembalian                                         : " << kembalian << endl;

        //Interface Ingin Memesan Lagi atau tidak
        cout << "===============================================================" << endl;
        cout << "Apakah Anda Ingin Menyewa Lapangan Lagi (y/t)     : ";
        cin >> status;

        /*Looping Status
        Menggunakan Operator Logika OR
        Looping dengan Do While */
    } while (status == "y" || status == "Y");

    //Program Selesai Jika tidak Memesan lagi
    cout << "===============================================================" << endl;
    cout << "|                                                             |" << endl;
    cout << "|               Terimakasih Telah Menyewa Lapangan            |" << endl;
    cout << "|                                                             |" << endl;
    cout << "===============================================================" << endl;
}