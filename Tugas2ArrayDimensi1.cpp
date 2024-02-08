#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

main()
{
	int a,b;
	int data_penjualan[4][4];
	char nama_barang[4][20];
	system("cls");

	for (a=1;a<=3;a++)
	{
		cout<<"Data Penjualan "<<a<<endl;
		cout<<"Nama Barang    : ";cin>>nama_barang[a];

		for(b=1;b<=3;b++)
		{
			cout<<"Data Tahun 200"<<b<<endl;
			cout<<"Jumlah Penjualan : ";cin>>data_penjualan[a][b];
		}
		cout<<"\n";
	}
	system("cls");
	cout<<"				    HASIL  PENJUALAN BARANG				 "<<endl;
	cout<<"		============================================================="<<endl;
	cout<<"		No	Nama Barang	 2001            2002            2003"<<endl;
	cout<<"		============================================================="<<endl;

	for (a=1;a<=3;a++)
	{
		cout<<"\t\t"<<a<<"\t"<<nama_barang[a]<<"\t   ";

		for(b=1;b<=3;b++)
		{
			cout<<"	 "<<data_penjualan[a][b]<<"	  ";
			cout<<"";
		}
		cout<<endl;
	}
	cout<<"		============================================================="<<endl;
	return 0;
}
