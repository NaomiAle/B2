#include<iostream>
using namespace std;
int main()
{
	int NACJ_aa,NACJ_ma,NACJ_da,NACJ_an,NACJ_mn,NACJ_dn,NACJ_a,NACJ_m,NACJ_d;
	cout<<"Ingrese la fecha actual : ";
	cin>>NACJ_aa>>NACJ_ma>>NACJ_da;

	cout<<"Ingrese la fecha de nacimiento : ";
	cin>>NACJ_an>>NACJ_mn>>NACJ_dn;
	if(NACJ_da>NACJ_dn){
		NACJ_d=NACJ_da-NACJ_dn;
	}else{
		NACJ_da=NACJ_da+30;
		NACJ_ma=NACJ_ma-1;
		NACJ_d=NACJ_da-NACJ_dn;
	}
	if(NACJ_ma>NACJ_mn){
		NACJ_m=NACJ_ma-NACJ_mn;
	}else{
		NACJ_ma=NACJ_ma+12;
		NACJ_aa=NACJ_aa-1;
		NACJ_m=NACJ_ma-NACJ_mn;
	}
	NACJ_a=NACJ_aa-NACJ_an;
	cout<<"Usted tiene "<<NACJ_a<<" años, "<<NACJ_m<<" meses, "<<NACJ_d<<" dias "<<endl;
	return 0;

}
