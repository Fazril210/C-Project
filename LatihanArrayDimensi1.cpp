#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main()
{
	int Nama_Array[10];

	cout<<"Masukkan Nilai Pada : "<<endl;
	/** Perulangan Memasukkan Nilai Array */
	for (int C=0; C<10; C++)
	{
		cout<<"Elemen[" << C << "] = ";cin>>Nama_Array[C];
	}
	cout<<"\n";

	cout<<"Tampilkan Nilai yang Dimasukkan "<<endl;
	/** Perulangan Menampilkan Nilai Array */
	for (int D=0; D<10; D++)
	{
		cout<<"Nilai yang terdapat pada elemen ke ";
		cout<<D+1<<" = " <<Nama_Array[D]<<endl;
	}
	cout<<"\n";

	/** Perulangan menampilkan nilai Array Satu Baris */
	for (int D=0;D<10;D++)
	{
		cout<<Nama_Array[D]<<"  ";
	}
	cout<<"\n";
	cout<<"\n";

	/** Perulangan menampilkan nilai Array Satu  Kolom */
	for(int D=0;D<10;D++)
	{
		cout<<Nama_Array[D]<<endl;
	}
	cout<<"\n";
return 0;
}
