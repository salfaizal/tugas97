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
	glpro.typecustom 		= "caferacer ";
	glpro.tenagamesin		= 150 ;
	
//cout tiger	
	cout << (tiger.typecustom);
	cout << (tiger.tenagamesin)<<" ";
	tiger.jenismotor("honda tiger ");
//cout scorpio
	cout << (scorpio.typecustom);
	cout << (scorpio.tenagamesin)<<" ";
	scorpio.jenismotor("yamaha scorpio ");
//cout glpro
	cout << (glpro.typecustom);
	cout << (glpro.tenagamesin)<<" ";
	glpro.jenismotor("honda gl-pro ");
}
//output void
void motorcustom ::jenismotor(string dibuat){
	cout<<"jenis motornya "<<dibuat<<endl;
}
