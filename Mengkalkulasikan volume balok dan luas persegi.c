#include <iostream.h>
m
#include <conio.h>


int volume(int&l)

int main()


{

int t;

std::cout<<"masukkan nilai t:";

cin>>t;

l=l*t;

return l;

}

int luas(int p, int l) {

int x;

x=p*l;

cout<<"tampilkan nilai luas:"<<x<<endl;

volume(x);

return x;

}

void main(){

 int p,l,j;

 cout<<"masukkan nilai p:";

 cin>>p;

 cout<<"masukkan nilai l:";

 cin>>l;

 j=luas(p,l);

 cout<<"volume balok adalah:"<<j<<endl;

 getch();

}
