#include<iostream>
using namespace std;
class ev{
private:
	int odasayisi;
	int metrekare;
	bool bahcelimi;
public:
	ev();
	ev(int,int,bool);
	void setodasayisi(int odasayisi);
	void setmetrekare(int metrekare);
	void setbahcelimi(bool bahcelimi);
	int getmetrekare();
	int getodasayisi();
	int getbahcelimi();
	int kirahesapla();//her oda 750 tl her metrekare için 5 tl bahçe ise 500 tl 
};