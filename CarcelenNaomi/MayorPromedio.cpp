#include<iostream>
using namespace std;
int main()
{
	float NACJ_x,NACJ_pm;
	int NACJ_i=0,NACJ_l;
	cout<<"Ingrese l: ";
	cin>>NACJ_l;
	do{
		cout<<"Ingrese x: ";
		cin>>NACJ_x;
		NACJ_i=NACJ_i+1;
		if(NACJ_x>NACJ_pm){
			NACJ_pm=NACJ_x;
		}
	}while(NACJ_i<NACJ_l);
	cout<<"El promedio maximo de el curso fue: "<<NACJ_pm<<endl<<endl;
	return 0;
}

