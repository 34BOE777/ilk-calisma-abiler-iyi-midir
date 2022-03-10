#include<iostream>
#include "header.h"
using namespace std;
ev::ev(){}
ev::ev(int odasayisi,int metrekare,bool bahcelimi){
		this->metrekare=metrekare;
		this->odasayisi=odasayisi;
		this->bahcelimi=bahcelimi;
	}
	void ev::setodasayisi(int odasayisi){
		this->odasayisi=odasayisi;
	}
	void ev::setmetrekare(int metrekare){
		this->metrekare=metrekare;
	}
	void ev::setbahcelimi(bool bahcelimi){
		this->bahcelimi=bahcelimi;
	}
	int ev::getmetrekare(){
		return metrekare;
	}
	int ev::getodasayisi(){
		return odasayisi;
	}
	int ev::getbahcelimi(){
		return bahcelimi;
	}
	int ev::kirahesapla(){
		if (getbahcelimi())
		{
			return odasayisi*750+metrekare*5+500;
		}
		else return odasayisi*750+metrekare*5;
	}
