#include <iostream>
using namespace std;

bool numeroPrimo (int numero){
int resto = 0;
for(int i=1;i<=numero;i++){
    if(numero%i==0){
        resto++;
    }
}
if(resto==2){
   return 1;
}else{
   return 0;
}
}

int main (){
int numeroUsuario = 23;

if(numeroPrimo(numeroUsuario)){
    cout << "es primo";
}else{
    cout << "no es";
 }
return 0;
}

