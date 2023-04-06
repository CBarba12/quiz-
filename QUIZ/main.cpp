#include"Relogbasico.h"
#include"MonitoreoCardiaco.h"
#include"Internet.h"
#include"Radio.h"




int main() {

	Relogbasico* R2 = NULL;
	MonitoreoCardiaco *M2= NULL;
	Internet* JK2 = NULL;
	Radio* RA2 = NULL;
	Radio* RA3 = NULL;




	Relogbasico* r1 = new Relogbasico();
	MonitoreoCardiaco* m1 = new MonitoreoCardiaco(r1);
	Internet* jk = new Internet(m1);
	Radio* RA1 = new Radio(jk);

	cout << RA1->tostring();
	cout << RA1->costo();

	cout << endl;
	cout << endl;

	m1->getptr();
	JK2=new Internet(m1->getptr()) ;
	RA3 = new  Radio(JK2);

	cout << RA3->tostring();

	cout << "Costo total --->" << RA3->costo();

	cout << endl;




	

//	cout << JK2->tostring();



	

	//cout << RA1->tostring();




	

}