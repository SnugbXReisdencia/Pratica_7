# include <iostream>
# include <limits>
# include <cstring>

using namespace std;

void pause();
void limpaTela();

int main(){
    limpaTela();

    int altura;
    char caractere = 'A';

    cout << "Digite a altura do padrão: ";
    cin >> altura;

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            if (caractere >= 'A' && caractere <= 'Z') {
                cout << caractere;
                caractere++;
            } else if (caractere == 'Z'+1) {
                caractere = 'a';
                cout << caractere;
                caractere++;
            } else if(caractere == 'z'+1){
                caractere = 'A';
                cout << caractere;
                caractere++;
            }
            else{
                cout << caractere;
                caractere++;
            }
        }
        cout << endl;
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