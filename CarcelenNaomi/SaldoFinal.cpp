#include<iostream>
using namespace std;
int main()
{
	float NACJ_x,NACJ_s=0;
	int NACJ_i=0,NACJ_l;
	cout<<"Ingrese cantidad de egrasos (1) : ";
	cin>>NACJ_l;
	cout<<"Ingrese el saldo inicial (s) : ";
	cin>>NACJ_s;
	do{
		cout<<"Ingrese egreso (x) : ";
		cin>>NACJ_x;
		NACJ_i=NACJ_i+1;
		NACJ_s=NACJ_s+NACJ_x;
	}while(NACJ_i<NACJ_l); 
	cout<<"El saldo final es: "<<NACJ_s<<endl;
	return 0;

}
