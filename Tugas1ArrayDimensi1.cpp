#include <iostream>
using namespace std;

int main()
{
	string Nama_Bulan[4][3] = {{"Januari","Februari","Maret"},{"April","Mei","Juni"},{"Juli","Agustus","September"},{"Oktober","November","Desember"}};

	cout<<"				          PROGRAM NAMA BULAN"<<endl;
	cout<<"			                      TAHUN 2018"<<endl;
	cout<<"		========================================================================"<<endl;
	for (int a=0;a<4;a++)
	{
		cout<<"\t\t";
		for (int b=0;b<3;b++)
		{
			cout<<Nama_Bulan[a][b]<<"";
			cout<<"\t\t              ";
		}
		cout<<endl;
	}
	cout<<"\n\n";
return 0;

}
