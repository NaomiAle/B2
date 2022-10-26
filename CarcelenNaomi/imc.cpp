#include<iostream>
using namespace std;
int main()
{
	float NACJ_imc,NACJ_peso,NACJ_altura;
	cout<<"Ingrese el peso (kg) : ";
	cin>>NACJ_peso;
	cout<<"Ingrese la altura (metros) : ";
	cin>>NACJ_altura;
	NACJ_imc=NACJ_peso/(NACJ_altura*NACJ_altura);
	if(NACJ_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}if(NACJ_imc>=18.5 && NACJ_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}if(NACJ_imc>=25 && NACJ_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}if(NACJ_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;
	}
	return 0;

}
