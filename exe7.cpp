# include <iostream>
# include <limits>
# include <cstring>

using namespace std;

void pause();
void limpaTela();

int main(){
    limpaTela();
    int altura;

    cout << "Digite a altura do padrão: ";
    cin >> altura;

    cout << "Padrão 'a':" << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            cout << " * ";
        }
        cout << endl;
    }

    cout << "Padrão 'b':" << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }

    cout << "Padrão 'c':" << endl;
    for (int i = 1; i <= altura; i++) {
        for (int k = 1; k <= altura; k++) {
            if(i == 1 || i == altura){
                cout << " * ";
            }else{
                if(k == 1 || k == altura){
                    cout << " * ";
                }else{
                    cout << "   ";
                }
                
            }
        }
        cout << endl;
    }

    pause();
    return 0;
}

void pause()
{
    // cin.ignore();
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