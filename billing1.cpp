#include <iostream>
using namespace std;

int main()
{
	char nama[50], pembeli[50];
	int harga, jumlah, total, tot_jum, jum_bayar, kembalian, discount;
	string input, kode;

	cout<<"			TOKO ELEKTRONIK XIANSHENG			"<<endl;
	cout<<"	     ============================================="<<endl;
	cout<<"Nama Pembeli 	: ";gets(pembeli);
	cout<<"Pilihan Barang yang Tersedia"<<endl;
	cout<<" 001 - Laptop Gaming RAM 16GB - Rp. 50.000.000"<<endl;
	cout<<" 002 - VGA NVDIA RTX 3090 - Rp. 35.000.000"<<endl;
	cout<<" 003 - Smartphone Gaming  - Rp. 15.000.000"<<endl;
	cout<<" 004 - Headset Harman Kardon - Rp. 5.000.000"<<endl;
	cout<<" 005 - Mouse Gaming - Rp. 3.000.000"<<endl;



	cout<<endl;
	cout<<endl;
	cout<<"Barang yang dipilih		: ";cin>>kode;
	cout<<"Jumlah Beli			: ";cin>>jumlah;


	if (kode == "001"){
		cout<<"Barang yang dibeli adalah Laptop Gaming RAM 16GB";
		harga = 50000000;
	}else if (kode == "002"){
		cout<<"Barang yang dibeli adalah VGA NVDIA RTX 3090";
		harga = 35000000;
	}else if (kode == "003"){
		cout<<"Barang yang dibeli adalah Smartphone Gaming";
		harga = 15000000;
	}else if (kode == "004"){
		cout<<"Barang yang dibeli adalah Headset Harman Kardon";
		harga = 50000000;
	}else if (kode == "005"){
		cout<<"Barang yang dibeli adalah Mouse Gaming";
		harga = 30000000;
	}else {
		cout<<"Kode yang Anda Pilih Tidak Tersedia";
	}

	cout<<"\n\n\n"<<endl;
	cout<<"======================================================"<<endl;
	cout<<"		    STRUK PEMBAYARAN				 "<<endl;
	cout<<"		TOKO ELEKTRONIK XIANSHENG            "<<endl;
	cout<<"======================================================"<<endl;
	cout<<"Nama Pembeli		: "<<pembeli<<endl;
	cout<<"Harga			: "<<harga<<endl;
	cout<<"Jumlah			: "<<jumlah<<endl;


	total = harga * jumlah;
	cout<<"Total			: "<<total<<endl;

	cout<<"\n\n"<<endl;
	if(total == 100000000 || total > 50000000){
		discount = 0.05 * total;
	}else if (total > 50000000) {
		discount = 0.10 * total;
	}else {
		discount = 0;
	}
	cout<<"Potongan 		: "<<discount<<endl;
	cout<<"======================================================"<<endl;

	tot_jum = total - discount;
	cout<<"Total Belanja	: "<<tot_jum<<endl;

}
