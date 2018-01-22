#include <iostream>
#include <string>
using namespace std;


//class dan variabel
class motorcustom{
	public:
		void jenismotor (string dibuat);
		int tenagamesin;
		string typecustom;
};
int main(){
//varian motorcustom
	motorcustom tiger,scorpio,glpro;

//isi data tiger
	tiger.typecustom 	= "japstyle ";
	tiger.tenagamesin 	= 200 ;
//isi data scorpio
	scorpio.typecustom	= "chopper ";
	scorpio.tenagamesin 	= 300 ;
//isi data glpro
	glpro.typecustom 		= "kuning hitam ";
	glpro.tenagamesin		= 150 ;

