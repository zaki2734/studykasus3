
using namespace std;


void output(int jm, int total, int menu){
 ofstream myfile;
 string menu2[7] = {"kosong","Ayam geprek","Ayam goreng","udang goreng","cumi goreng","Ayam Bakar"};
    myfile.open("rumahmakan.txt");

    myfile << "==============Slip Pembayaran============="<<endl<<endl<<endl;
    myfile << "pesanan : "<<menu2[menu]<<endl;
    myfile << "Jumlah pesanan "<<jm<<endl;
    myfile << "total bayar = "<<total<<endl;
    myfile << "===========selamat menikmati=============="<<endl;
    myfile << "=============Terima Kasih================="<<endl;

    myfile.close();

}
