#include <iostream>
using namespace std;

class proses
{
public:
	void ayam_geprek(int jm, int jarak){
		cout << "Total Pesanan Ayam Geprek"<<endl;
            total = jm * 21000;
            
            if (jarak <= 3)
    {
        total = total + 15000;
    }
    else
    {
        total = total + 25000;
    }
    cout<<total;
	}


	void ayam_goreng(int jm, int jarak ){
		cout << "Total Pesanan Ayam Goreng"<<endl;
            total = jm * 17000;
            
	if (jarak <= 3)
    {
        total = total + 15000;
    }
    else
    {
        total = total + 25000;
    }
    cout<<total;
	}


	void udang_goreng(int jm, int jarak){
		cout << "Total Pesanan Udang Goreng"<<endl;
            total = jm * 19000;
            
	if (jarak <= 3)
    {
        total = total + 15000;
    }
    else
    {
        total = total + 25000;
    }
    cout<<total;
	}


	void cumi_goreng(int jm, int jarak){
		cout << "Total Pesanan cumi Goreng"<<endl;
            total = jm * 20000;
            
	if (jarak <= 3)
    {
        total = total + 15000;
    }
    else
    {
        total = total + 25000;
    }
    cout<<total;
	}

	
	void ayam_bakar (int jm, int jarak){
		cout << "Total Pesanan Ayam Bakar"<<endl;
            total = jm * 25000;
            
     if (jarak <= 3)
    {
        total = total + 15000;
    }
    else
    {
        total = total + 25000;
    }   
    cout<<total;    
	}
	
	
	private: 
		int total, jarak;
	
};
