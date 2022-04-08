#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include "proses.h"
#include "output.h"
using namespace std;

int main(){

    int menu,jm,total, jarak;

    cout << "=============Rumah Makan Drazak =============="<<endl;
    cout << "Menu :"<<endl;
    cout << "1. Ayam geprek\t: Rp 21.000,00"<<endl;
    cout << "2. Ayam goreng\t: Rp 17.000,00"<<endl;
    cout << "3. Udang goreng\t: Rp 19.000,00"<<endl;
    cout << "4. Cumi goreng\t: Rp 20.000,00"<<endl;
    cout << "5. Ayam bakar\t: Rp 25.000,00"<<endl;
    cout << "Pilih Pesanan : ";
    cin >> menu;
    cout<<"Jumlah Pesanan ";
    cin>>jm;
    cout << "Masukan Jarak Rumahmu :"<<endl;
    cin >> jarak;

    
     if ( menu == 1){
        proses proses;
        proses.ayam_geprek(jm,jarak);
     }
     else if ( menu == 2){
        proses proses;
        proses.ayam_goreng(jm,jarak);
     }
     else if ( menu == 3){
        proses proses;
        proses.udang_goreng(jm,jarak);
     }
     else if ( menu == 4){
        proses proses;
        proses.cumi_goreng(jm,jarak);
     }
     else if ( menu == 5){
        proses proses;
        proses.ayam_bakar(jm,jarak);
     }


    if (menu==1){
            total = jm * 21000;
    }else if (menu==2){
            
            total = jm * 17000;
    }else if (menu==3){
            
            total = jm * 19000;
    }else if (menu==4){
            
            total = jm * 20000;
    }else if (menu==5){
           
            total = jm * 25000;
    }


    if (jarak <= 3)
    {
        total = total + 15000;
    }
    else
    {
        total = total + 25000;
    }
   
    
     output(jm,total,menu);
     
return 0;
}
