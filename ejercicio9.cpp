#include <iostream>
using std::cout;

int main() {

    int i = 1;
    while (i <= 10) {
        if ( i % 2 == 0  ) {
            cout<< i<<"\n";//imprimir numeros pares verticalmente
        }
      i=i+1;
    }
return 0;
}
