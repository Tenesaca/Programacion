# include<iostream>

using namespace std;
int main()
{
	float n1,d1,n2,d2,n3,d3,n4,n5;
	
	cout<<"Ingrese numerador 1 : ";
	cin>>n1;
	
	cout<<"Ingrse denominador 1 : ";
	cin>>d1;
	
	cout<<"Ingrese numerador 2 : ";
	cin>>n2;
	
	cout<<"Ingrese denominador 2 : ";
	cin>>d2;
	
	d3=d1*d2;
	n3= d3/d1*n1;
	n4= d3/d2*n2;
	n5=n3+n4;
	
	cout<<"la suma total de las fracciones es :"<<n5<<"/"<<d3;
}
