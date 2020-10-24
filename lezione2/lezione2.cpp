#include<iostream>

using namespace std;
int main() {



int intero;
int SUM=0;
int N=0;

	cout<< "INSERIRE NUMERO " <<  endl; 
	cin>> intero ;
	
while (intero!=0) 
{
	if (intero%2==0) {

	SUM+= intero;
	++N;
}

}
cout << "MEDIA NUMERI PARI" << SUM/N <<endl;
return 0;
}

