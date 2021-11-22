#include <iostream>
using namespace std;

int main()
{
	int n,i;
	cout << "Banyaknya rumah Griya Asri : ";
	cin >> n;
	string nama[n], alamat[n];
	for(i=0;i<n;i++){
		cout<<"Masukkan nama pemilik rumah: ";
		cin >> nama[i];
		cout<<"Masukkan alamat rumah: ";
		cin >> alamat[i];
	}
	string k;
	string j;
	cout<<"Masukkan nama pemilik rumah yang ingin dicek : ";
	cin >> k;
	cout<<"Masukkan alamat pemilik rumah yang ingin dicek : ";
	cin >> j;
	cout<<endl;
	
	if(k==nama[0]&&j==alamat[0]){
		cout<<"Rumah ditemukan";
	}else if(k==nama[1]&&j==alamat[1]){
		cout<<"Rumah ditemukan";
	}else{
		cout<<"Rumah tidak ditemukan";
	}
	

	return 0;
}

