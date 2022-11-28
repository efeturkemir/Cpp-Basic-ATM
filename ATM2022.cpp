#include <iostream>
#include<locale.h>
using namespace std;
	
	
	
void showMenu(){
	cout<<"       ******ATM YE HOÞGELDÝNÝZ******\n";
	cout<<"1 . Bakiyeniz\n";
	cout<<"2 . Para Çek\n";
	cout<<"3 . Para Yatýr\n";
	cout<<"4 . Çýkýþ\n";
}



int main(){
	setlocale(LC_ALL, "Turkish");
	int option;
	double bakiye = 500;
	
	
	do{
		showMenu();
	
	cout<<"Seçenek:";
	cin>>option;
	switch(option){
		case 1: cout<<"Bakiyenizdeki Para: "<<bakiye<<endl ;
		break;
		case 2: cout<<"Ne kadar çekmek istersiniz?  ";
		double deposit;
		cin>>deposit;
	
		cout<<deposit<<" Lira Para Çektiniz!!";
		if(bakiye <= deposit){
			cout<<"Yeterli Paranýz Yok!";
		}else
		bakiye -= deposit;
		
		break;
		case 3: cout<<"Ne kadar Yatýrmak istersiniz?";
		double withdraw;
		cin>>withdraw;
		
				
		bakiye += withdraw;
		
	}
}
while(option!=4);
	
}



