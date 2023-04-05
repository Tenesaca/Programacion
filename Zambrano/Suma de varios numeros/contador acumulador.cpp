# include <iostream>
using namespace std;
int main()
{
	int x,i,s,l;
	cout<<"ingrese los datos que va ha sumar\n ";
	cin>>x;
	l=0;
	i=0;
	do{
		cout<<"ingrese  numero  :" ;
		cin>>s;
	l=s+l;
	i=i+1;
	}while(i<x);
		cout<<"la suma de los numeros es :"<<l;
	}

