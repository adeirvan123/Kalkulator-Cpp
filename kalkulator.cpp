#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int main () {
	
	int opsi, p;
	string perintah;
	double a,b;

while(true) {
	
	cout<<"PROGRAM KALKULATOR BIASA AJA"<<endl<<endl;
	cout<<"Pilih Salah Satu Opsi Dibawah : "<<endl;
	cout<<"1. Penjumlahan"<<endl<<"2. Pengurangan"<<endl<<"3. Perkalian"<<endl<<"4. Pembagian"<<endl<<"5. Exit"<<endl;
	cout<<"Masukkan Angka : ";
	cin>>opsi;


if (opsi != 5) {

	switch(opsi) {
		case 1 :
			cout<<"Masukkan nilai ke 1 = ";
			cin>>a;
			while (true) {

			cout<<"Masukkan 'y' untuk dijumlahkan : ";
			cin>>perintah;
			if (perintah == "y") 
			{
				cout<<"Masukkan nilai ke "<<p+2<<" = ";
				p++;
				cin>>b;
				a += b;
				cout<<"Hasil Penjumlahan Adalah "<<a<<endl<<endl;
			}else {
				break;
			}
						}
						break;
			
		case 2 :
			cout<<"Masukkan nilai ke 1 = ";
			cin>>a;
			while (true) {

			cout<<"Masukkan 'y' untuk mengurangi : ";
			cin>>perintah;
			if (perintah == "y") 
			{
				cout<<"Masukkan nilai ke "<<p+2<<" = ";
				p++;
				cin>>b;
				a -= b;
				cout<<"Hasil Pengurangan Adalah "<<a<<endl<<endl;
			}else {
				break;
			}
						}
						break;
			
		case 3 :
			cout<<"Masukkan nilai ke 1 = ";
			cin>>a;
			while (true) {

			cout<<"Masukkan 'y' untuk mengali : ";
			cin>>perintah;
			if (perintah == "y") 
			{
				cout<<"Masukkan nilai ke "<<p+2<<" = ";
				p++;
				cin>>b;
				a *= b;
				cout<<"Hasil Perkalian Adalah "<<a<<endl<<endl;
			}else {
				break;
			}
						}
						break;
				
		case 4 :
			cout<<"Masukkan nilai ke 1 = ";
			cin>>a;
			while (true) {

			cout<<"Masukkan 'y' untuk membagi : ";
			cin>>perintah;
			if (perintah == "y") 
			{
				cout<<"Masukkan nilai ke "<<p+2<<" = ";
				p++;
				cin>>b;
				a /= b;
				cout<<"Hasil Pembagian Adalah "<<a<<endl<<endl;
			}else {
				break;
			}
						}
						break;
			
		default :
			cout<<"Inputan Salah";//jika inputan opsi selain 1-5 maka switch akan batal. dan mengulangi perintah sebelumnya			
	}
}else {
	break;
}
	getch();
	system("cls");
}
	
}
