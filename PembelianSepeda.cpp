#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std ;
void cy()
{
cout << " 1 = CTB 26 Trex Hybrid (Rp.1,500,000) "<<endl ;
cout << " 2 = Genio Velvet (Rp.1,900,000) "<<endl ;
cout << " 3 = Polygon Sierra Deluxe Sport (Rp.5,000,000) " <<endl ;
}
void mt()
{
cout << " 1 = PHOENIX MTB 26-173 (Rp.2,000,000) "<<endl ;
cout << " 2 = Element Mountain Bike SPY 2.0 8 (Rp.3,350,000) "<<endl ;
cout << " 3 = UNITED STAVROS 27.5 (Rp.4,300,000) " <<endl ;
}
void rd()
{
cout << " 1 = Element Police Toronto (Rp.2,500,000) "<<endl ;
cout << " 2 = London Taxi Road Bike 700C (Rp.4,200,000) "<<endl ;
cout << " 3 = Road Bike Element FRC 52 (Rp.5,900,000) " <<endl ;
}
char * had(long int tb)
{
if(tb > 5000000)
return "Selamat Anda mendapatkan hadiah sarung tangan, helmet dan jersey";
else
if(tb > 3000000 && tb <= 5000000)
return "Selamat Anda mendapatkan hadiah sarung tangan dan helmet";
else
if(tb > 2000000 && tb <= 3000000)
return "Selamat Anda mendapatkan hadiah helmet";
else
return "-";
}
int main ()
{ struct{
string nm, kj, js, ts;
int jb, kt,tb;
long int harga;
}data[7];
int jmlh,a;
char x;
atas :
 system("cls");
 cout << "Masukkan Jumlah Data : ";cin>>jmlh;
 for(a=1;a<=jmlh;a++){
cout << "\n\n\t\t\t ==================================== " << endl ;
cout << "\t\t\t TOKO SEPEDA MAHES " << endl ;
cout << "\t\t\t ==================================== " << endl ;
cout << "\t\t\t MENJUAL BERBAGAI JENIS SEPEDA "<<endl;
cout << "\t\t\t C = CITY "<<endl;
cout << "\t\t\t M = MOUNTINE "<<endl;
cout << "\t\t\t R = ROAD "<<endl;
cout << "\t\t\t ____________\n\n" <<endl ;
cout << "Data ke-"<<a<<endl;
cout << " NAMA PELANGGAN : " ;
cin >> data[a].nm ;
cout << " KODE JENIS [ C / M / R ] : " ;
cin >> data[a].kj ;
cout << " JUMLAH BELI : " ;
cin >> data[a].jb ;
cout << " _____" << endl ;
if ( data[a].kj == "C" || data[a].kj == "c") { data[a].js = " CITY " ;{
 cy();
cout<<"Kode tipe : ";cin>>data[a].kt;}
if ( data[a].kt == 01 ) { data[a].ts = "CTB 26 Trex Hybrid" ; data[a].harga = 1500000; }
else if ( data[a].kt == 02) {data[a].ts = "Genio Velvet" ; data[a].harga = 1900000;}
else if ( data[a].kt == 03) {data[a].ts = "Polygon Sierra Deluxe Sport" ; data[a].harga=5000000;}
data[a].tb=data[a].jb*data[a].harga;
}
if ( data[a].kj == "M" || data[a].kj == "m") { data[a].js = " Mountain " ;{
 mt();
cout<<"Kode tipe : ";cin>>data[a].kt;}
if ( data[a].kt == 01 ) { data[a].ts = "PHOENIX MTB 26-173" ; data[a].harga = 2000000; }
else if ( data[a].kt == 02) {data[a].ts = "Element Mountain Bike SPY 2.0 8" ; data[a].harga = 3350000;}
else if ( data[a].kt == 03) {data[a].ts = "UNITED STAVROS 27.5" ; data[a].harga=4300000;}
data[a].tb=data[a].jb*data[a].harga;
}
if ( data[a].kj == "R" || data[a].kj == "r") { data[a].js = " Road " ;{
 rd();
cout<<"Kode tipe : ";cin>>data[a].kt;}
if ( data[a].kt == 01 ) { data[a].ts = "Element Police Toronto" ; data[a].harga = 2500000; }
else if ( data[a].kt == 02) {data[a].ts = "London Taxi Road Bike 700C" ; data[a].harga = 4200000;}
else if ( data[a].kt == 03) {data[a].ts = "Road Bike Element FRC 52" ; data[a].harga=5900000;}
data[a].tb=data[a].jb*data[a].harga;}
system("cls");
 }
{
cout<<"\t ----------------------------------------------------------------------------------------- "<<endl;
cout<<"\t No. Nama Jenis Sepeda Tipe Sepeda Harga Jumlah Total "<<endl;
cout<<"\t ----------------------------------------------------------------------------------------- "<<endl;
for(a=1;a<=jmlh;a++){
cout<<setiosflags(ios::right)<<setw(11)<<a;
cout<<setiosflags(ios::right)<<setw(10)<<data[a].nm;
cout<<setiosflags(ios::right)<<setw(9)<<data[a].js;
cout<<setiosflags(ios::right)<<setw(26)<<data[a].ts;
cout<<setiosflags(ios::right)<<setw(15)<<data[a].harga;
cout<<setiosflags(ios::right)<<setw(10)<<data[a].jb;
cout<<setiosflags(ios::right)<<setw(16)<<data[a].tb<<endl;
cout<<"\n\t========================================================================================="<<endl;
cout<<"\n\t\t "<<had(data[a].tb);
cout<<endl<<endl;
}
printf("\t APAKAH ANDA INGIN TRANSAKSI LAGI? [Y/N] : ");
x=getche();
if(x=='Y'||x=='y'){
goto atas;
}
else{
 system("cls");
cout<<endl<<endl;
cout<<"\t\t\t---------------------Terimakasih---------------------";
getch(); }
 }
}