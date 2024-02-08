#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
using namespace std;


void grs(){
	cout<<"\t====================================================================================================================="<<endl;
}

int main() {
	struct {
	char nama[10][10];
	char nilai[5];
	int nuts[5], nuas[5], nakhir[5], nhuruf[5];
	int nim[15];
  } mahasiswa;
  char lagi,x,y;
  int i;
  int jml;
  {
   atas:
   cout<<"\t\t\t\t\t\t   DAFTAR NILAI MAHASISWA "<<endl;
   grs();
   cout<<"\t		 Masukkan Jumlah Data = ";cin>>jml;
   cout<<endl;


   for(i=1; i<=jml; i++) {
	cout<<"Data ke - "<<i<<endl;
	cout<<"\t Nama Mahasiswa : ";cin>>mahasiswa.nama[i];
	cout<<"\t NIM	        : ";cin>>mahasiswa.nim[i];
	cout<<"\t Nilai UTS      : ";cin>>mahasiswa.nuts[i];
	cout<<"\t Nilai UAS	: ";cin>>mahasiswa.nuas[i];
	cout<<endl<<endl<<endl<<endl;



mahasiswa.nakhir[i]=(mahasiswa.nuts[i]*60/100)+(mahasiswa.nuas[i]*40/100);

	if(mahasiswa.nakhir[i]>=80){
		mahasiswa.nilai[i]='A';
	}else if(mahasiswa.nakhir[i]>=70){
		mahasiswa.nilai[i]='B';
	}else if(mahasiswa.nakhir[i]>=56){
		mahasiswa.nilai[i]='C';
	}else if(mahasiswa.nakhir[i]>=47){
		mahasiswa.nilai[i]='D';
	}else if(mahasiswa.nakhir[i]<47){
		mahasiswa.nilai[i]='E';
  }
}


cout<<"\t 					DAFTAR NILAI MAHASISWA "<<endl;
grs();
cout<<"\t    No        Nama			  NIM			Nilai		Nilai		Nilai		Nilai";
cout<<endl;
cout<<"\t            Mahasiswa					 	 UTS             UAS            Akhir         Predikat";
cout<<endl;
grs();

for(i=1; i<=jml; i++){
	cout<<setiosflags(ios::right)<<setw(13)<<i;
	cout<<setiosflags(ios::right)<<setw(15)<<mahasiswa.nama[i];
	cout<<setiosflags(ios::right)<<setw(29)<<mahasiswa.nim[i];
	cout<<setprecision(10)<<"\t\t "<<mahasiswa.nuts[i];
	cout<<setprecision(10)<<"\t\t "<<mahasiswa.nuas[i];
	cout<<setprecision(10)<<"\t\t "<<mahasiswa.nakhir[i];
	cout<<setprecision(10)<<"\t\t "<<mahasiswa.nilai[i];
	cout<<endl<<endl;
}
grs();
cout<<"\t Mau Coba Lagi ??? ";cin>>lagi;
 system("cls");
 if(lagi=='Y' || lagi=='y')
 goto atas;
 else if(lagi=='T' || lagi=='t')
 return 0;
  }
}
