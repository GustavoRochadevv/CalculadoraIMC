#include <iostream>

using namespace std;

int main()
{  string  nome;
   float   peso , altura , imc ;

    cout << "digite seu nome:" <<endl;
    cin >> nome;

    cout << "digite seu peso:" <<endl;
    cin >> peso;

    cout << "digite sua altura" <<endl;
    cin >> altura;

    imc = peso / (altura * altura);

    if ( imc < 18.5){
        cout << nome << "voce esta abaixo do peso."<< endl;

      }
    else if (imc  >= 18.5 && imc <= 24.9 ){
        cout << nome << " voce esta no peso normal." << endl;

    }
    else if (imc  >=25 && imc <= 29.9 ){
        cout << nome << " voce esta sobrepeso." << endl;

    }
    else if (imc  >=30 && imc <= 34.9 ){
        cout << nome << "voce esta com obesidade grau 1." << endl;

    }
     else if (imc  >=35 && imc <= 39.9 ){
        cout << nome << " voce esta com obesidade grau 2." << endl;

    }

    else if (imc  >=40 ){
        cout << nome << " obesidade morbida." << endl;

    }

    return 0;
}
