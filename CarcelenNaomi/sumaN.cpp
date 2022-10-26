#include<iostream>
using namespace std;
int main()
{
	float NACJ_x,NACJ_i=0,NACJ_s=0,NACJ_l;
	cout<<"Ingrese el valor de l: ";
	cin>>NACJ_l;
	do{
		cout<<"Ingrese el valor de x: ";
		cin>>NACJ_x;
		NACJ_i=NACJ_i+1;
		NACJ_s=NACJ_s+NACJ_x;
	}while(NACJ_i<NACJ_l);

	cout<<"La suma de los numeros fue: "<<NACJ_s<<endl;
	return 0;
}

