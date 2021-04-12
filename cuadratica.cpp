#include<iostream>
#include<cmath>
using namespace std;
float a,b,c,d,e;
float x,raiz1,raiz2,subraiz2,subraiz1,y;
float cuadraticap(int a,int b,int c)
{
	d=((b*b)-(4*a*c));
	raiz1=((4+(sqrt(d)))/(2*a));
	return raiz1;
}
float cuadratican (int a,int b, int c)
{
    e=((b*b)-(4*a*c));
	raiz2=((4-(sqrt(e)))/(2*a));
	return raiz2;
}
int main()
{
	cout<<"Digite el primer numero de la ecuacion"<<endl;
	cin>>a;
	cout<<"Digite el segundo numero de la ecuacion"<<endl;
	cin>>b;
	cout<<"Digite el tercer numero de la ecuacion"<<endl;
	cin>>c;
	x=cuadraticap(a,b,c);
	if(d<0)
	{
	    d=abs(d);
		cout<<"La raiz positiva es compleja y su resultado es:"<<(-b)/(2*a)<<"+"<<d<<"i"<<endl;	
	}
	else
	{
	    cout<<"La raiz positiva es:"<<x<<endl;
	}
	y=cuadratican(a,b,c);
	if(e<0)
	{
	    e=abs(e);
		cout<<"La raiz negativa es compleja y su resultado es:"<<(-b)/(2*a)<<"-"<<e<<"i"<<endl;	
	}
	else	
	{
	
	    cout<<"La raiz negativa es:"<<y<<endl;
	    return 0;
	}
}