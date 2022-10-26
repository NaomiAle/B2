#include<iostream>
using namespace std;
int main()
{
	float NACJ_x,NACJ_s=0,NACJ_s1=0,NACJ_s5=0;
	int NACJ_i=0,NACJ_l,NACJ_i1=0,NACJ_i5=0;
	cout<<"Ingrese l: ";
	cin>>NACJ_l;
	do{
		cout<<"Ingrese x : ";
		cin>>NACJ_x;
		NACJ_i=NACJ_i+1;
		NACJ_s=NACJ_s+NACJ_x;
		if(NACJ_x==1){
			NACJ_i1=NACJ_i1+1;
			NACJ_s1=NACJ_s1+NACJ_x;

		}else{
			NACJ_i5=NACJ_i5+1;
			NACJ_s5=NACJ_s5+NACJ_x;
		}

	}while(NACJ_i<NACJ_l);
	cout<<"La cantidad de monedas fue : "<<NACJ_i<<endl;
	cout<<"El valor fue: "<<NACJ_s<<endl;

	cout<<"La cantidad de monedas s1 fue : "<<NACJ_i1<<endl;
	cout<<"El valor fue : "<<NACJ_s1<<endl;

	cout<<"La cantidad de monedas .5
	cout<<"El valor fue : "<<NACJ_s5<<endl;
	return 0;

}
