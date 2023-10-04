# include <iostream>
# include <limits>
# include <cstring>

using namespace std;

void pause();
void limpaTela();

int main(){
    limpaTela();

    int valor_digitado, valor_invertido, valor, resto;
    
    cout << "Informe uma valor" << endl;
    cin >> valor_digitado;

    valor = valor_digitado;
    valor_invertido = 0;

    while(valor != 0)
    {
        resto = valor % 10;
        valor_invertido = (valor_invertido * 10) + resto;
        valor = valor / 10;
    }

    cout << "Valor Inverso: " << valor_invertido << endl;

    if (valor_digitado == valor_invertido){
        cout << valor_digitado << " é um palindromo." << endl;
    }else{
        cout << valor_digitado << " não é um palindromo." << endl;
    }

    pause();
    return 0;
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