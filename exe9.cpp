# include <iostream>
# include <limits>
# include <cstring>

using namespace std;

void pause();
void limpaTela();

int main(){
    limpaTela();

    int numero;
    int primeiro = 0, segundo = 1, proximo;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Sequência de Fibonacci até " << numero << ": ";

    while (primeiro <= numero) {
        cout << primeiro << " ";
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;
    

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