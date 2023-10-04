# include <iostream>
# include <limits>
# include <cstring>
# include <cmath>

using namespace std;

void pause();
void limpaTela();

int contarDigitos(int numero);

bool Armstrong(int numero);

int main(){
    limpaTela();

    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (Armstrong(numero)) {
        cout << numero << " é um número Armstrong." << endl;
    } else {
        cout << numero << " não é um número Armstrong." << endl;
    }
    
    pause();
    return 0;
}

int contarDigitos(int numero) {
    int digitos = 0;
    while (numero != 0) {
        numero /= 10;
        digitos++;
    }
    return digitos;
}

bool Armstrong(int numero) {
    int original = numero;
    int soma = 0;
    int digitos = contarDigitos(numero);

    while (numero != 0) {
        int digito = numero % 10;
        soma += pow(digito, digitos);
        numero /= 10;
    }

    return soma == original;
}

void pause()
{
    cin.ignore();
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void limpaTela()
{
    cin.clear();

    // Verifica se a variável de ambiente WINDIR está definida (ambiente Windows)
    const char *windir = getenv("WINDIR");

    if (windir != nullptr && strlen(windir) > 0)
    {
        // Se estiver definida, estamos no Windows, então use "cls"
        system("cls");
    }
    else
    {
        // Caso contrário, estamos em um ambiente Unix/Linux, use "clear"
        system("clear");
    }
}