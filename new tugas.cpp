#include <iostream>
#define phi 3.14
using namespace std;

int main(){
    char nama[100],jurusan[100];
    int nim;
    cout<<"======================================================"<<endl;
	cout<<" Masukkan Nama   :"; cin>>nama;
	
	cout<<"Masukkan nim     :"; cin>>nim;
	
	cout<<"Masukkan jurusan :"; cin>>jurusan;
	cout<<"======================================================"<<endl; 
    int BVL,p,l,s,r,a,t;
    float luas,volume;
    cout<<"Menghitung volume bangun ruang dan luas bangun datar"<<endl;
    cout<<"kode volume dan luas"<<endl;
    cout<<"1 :luas segitiga "<<endl;
	cout<<"2 :luas persegi panjang"<<endl;
	cout<<"3 :luas lingkaran"<<endl;
	cout<<"4 :volume tabung"<<endl;
	cout<<"5 :volume kerucut"<<endl;
	cout<<"\n=================================";
	
	cout<<"masukan kode bangun ruang yang ingin dicari luas dan volumenya : ";
        cin>>BVL,p,l,s,r,a,t;

    switch(BVL){
        case 1 :    {
                    cout<<"menghitung luas segitiga"<<endl;
                        cout<<"masukan alas   = "; cin>>a;
                        cout<<"masukan tinggi = "; cin>>t;
                        luas=t*a/2;
                        cout<<"luas segitiga  =\t " <<luas;
                    };
                    break;
        case 2 :    {
                        cout<<"menghitung luas lingkaran"<<endl;
                    cout<<"masukan jari-jari = "; cin>>r;
                    luas=phi*r*r;
                    cout<<"luas lingkaran    =\t " <<luas;
                    };
                    break;
        case 3 :    {
                        cout<<"menghitung luas persegi panjang"<<endl;
                        cout<<"masukan panjang       = "; cin>>p;
                        cout<<"masukan lebar         = "; cin>>l;
                        luas=p*l;
                        cout<<"luas persegi panjang  =\t "<<luas;

                    };
                    break;
        case 4 :    {
                        cout<<"menghitung volume tabung "<<endl;
                        cout<<"masukkan jari jari       = "; cin>>r;
                        cout<<"masukkan tinggi          = "; cin>>t;
                        volume=22*r*r*t/7;
                        cout<<"volume tabung adalah   = "<<volume;

                    };
                    break;
        case 5 :    {
        	            cout<<"menghitung volume kerucut "<<endl;
        	            cout<<"masukkan jari jari      = "; cin>>r;
        	            cout<<"masukkan tinggi         = "; cin>>t;
        	            volume=0.33*3.14*r;
        	            cout<<"volume kerucut adalah    = "<<volume;
        	
		            };
		            break;

    default : cout<<"JAGALAH SHOLAT,BEKERJA SAJA  DI DUNIA TAKKAN MEMBANTU MU DI PINTU NERAKA";
    }
}

