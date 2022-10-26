#include<iostream>
using namespace std;
int main()
{
	float NACJ_x,NACJ_s=0,NACJ_vb,NACJ_piva=12,NACJ_viva,NACJ_pdesc=10,NACJ_vdesc,NACJ_vn;
	int NACJ_i=0,NACJ_l;
	cout<<"Ingrese l: ";
	cin>>NACJ_l;
	do{
		cout<<"Ingrese x: ";
		cin>>NACJ_x;
		NACJ_i=NACJ_i+1;
		NACJ_s=NACJ_s+NACJ_x; 
	}while(NACJ_i<NACJ_l);
	NACJ_vb=NACJ_s;
	NACJ_viva=NACJ_vb*NACJ_piva/100;
	NACJ_vdesc=NACJ_vb*NACJ_pdesc/100;
	NACJ_vn=NACJ_vb+NACJ_viva-NACJ_vdesc;
	cout<<"El valor a pagar es de: "<<NACJ_vn<<endl;
	return 0;
	
}
