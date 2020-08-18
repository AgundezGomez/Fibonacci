#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fibonacci(int n){
	if(n>1){
		return fibonacci(n-1)+fibonacci(n-2);
	}else{
		if(n==0){
			return 0;
		}
		if (n==1){
			return 1;
		}
	}
}

int main() {
	int z;
	cout<< "Ingrese la posicion"<<endl;
	cin>>z;
	cout << "la serie solicitada es: "<<fibonacci(z);
	return 0;
}
