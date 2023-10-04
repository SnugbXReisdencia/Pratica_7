# include <iostream>
# include <limits>
# include <cstring>

using namespace std;

void pause();
void limpaTela();

int main(){
    limpaTela();

    int value;

    cout << "Informe um numero: ";
    cin >> value;

    for (int i = 1; i <= value; i++){
        if (value % i == 0)
        {
            cout << value << " é divivel por: " << i << endl;
        }
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