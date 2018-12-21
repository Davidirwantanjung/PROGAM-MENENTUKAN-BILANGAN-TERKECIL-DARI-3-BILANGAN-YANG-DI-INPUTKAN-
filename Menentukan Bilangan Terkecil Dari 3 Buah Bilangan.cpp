#include<iostream>
using namespace std;
int main()
{
	int bil1, bil2, bil3, terkecil;
	cout<<"masukkan bilangan 1 : ";
	cin>>bil1;
	cout<<"masukkan bilangan 2 : ";
	cin>>bil2;
	cout<<"masukkan bilangan 3 : ";
	cin>>bil3;
	
	{
		if(bil1 < bil2)
		terkecil = bil1;
		
		else
		terkecil = bil2;
		
		if(bil3 < terkecil)
		terkecil = bil3;
		
		cout<<endl;
		cout<<"nilai terkecil = "<<terkecil;cout<<endl;
	}
	return 0;
}
