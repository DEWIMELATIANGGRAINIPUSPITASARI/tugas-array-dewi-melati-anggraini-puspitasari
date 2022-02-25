#include<iostream>;

using namespace std;

int main(){;
	
	//Deklarasi array 'ARnilai' dengan 4 buah elemen berisi int;
	int ARnilai[4];
	int tampung = 0;
	
	
	cout<<"=================================================";
    	cout<<"\n = Program menjumlahkan semua elemen array =\n";
	cout<<"===============================================\n";
	
	// Mengisi nilai ke dalam elemen array;
	cout<<"\n== isi array ==\n";
	for(int i = 0; i<4;i++){;
	    cout<<"isi indek ke ["<<i<<"]=";
	    cin>>ARnilai[i];	
	}
	
	for(int i=0;i<5;i++){;
		tampung = tampung + ARnilai[i];
		
	}
	
	cout<<"\n Hasil penjumlahan semua elemen Array :"<<tampung;
	
	return 0;
	
}
