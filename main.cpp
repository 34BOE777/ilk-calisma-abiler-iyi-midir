#include<iostream>
#include "header.h"
//#include "cu.cpp"
using namespace std;
int main()
{	
	int a,b,c;
	ev e1(2,100,1);
	ev e2;
	cout<<"1. evin oda sayısı: "<<e1.getodasayisi()<<", metrekaresi"<<e1.getmetrekare()<<" bahçe var mı ? "<<e1.getbahcelimi()<<endl;
	cout<<"2.ev için: \noda sayısı girin:";
	cin>>a;
	cout<<"\nMetrekae sayısı girin: ";
	cin>>b;
	cout<<"\nBahçeli ise 1'i bahçeli değil ise 0' basın: ";
	cin>>b;
	e2.setodasayisi(a);
	e2.setmetrekare(b);
	e2.setbahcelimi(c);
	cout<<"\n\n2.evin oda sayısı: "<<e2.getodasayisi()<<", metrekaresi: "<<e2.getmetrekare()<<", bahçe var mı ? "<<e2.getbahcelimi()<<endl;
	cout<<"1.evin kirası :  "<<e1.kirahesapla()<<endl;
	cout<<"2.evin kirası :  "<<e2.kirahesapla()<<endl;


	
	return 0;
}