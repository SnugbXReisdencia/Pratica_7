# include <iostream>
# include <limits>
# include <cstring>

using namespace std;

void pause();
void limpaTela();

int main(){
    limpaTela();

    srand(time(0));

    int num_Random, palpite, chance;
    char opc;
    bool vitoria;

    do{
        system("clear");
        chance = 0;
        vitoria = false;
        num_Random = rand() % 100 + 1;

        cout << "####### Descubra O numero #######" << endl;
        cout << "OBS: Voce tem 5 chances" << endl;
        do{
            cout << " Tentativa: " << chance+1 << endl;
            cout << "Der o seu palpite: ";
            cin >> palpite;

            if (palpite == num_Random)
            {
                cout << "Parabens voce acertou!!" << endl;
                vitoria = true;
            }else if(palpite > num_Random){
                cout << "O numero é Menor do que seu palpite\n\n" << endl;
            }else{
                cout << "O numero é Maior do que seu palpite\n\n" << endl;
            }
            chance++;
        }while (chance != 5 && palpite != num_Random);
        if (!vitoria)
        {
            cout << "**** Voce perdeu!! **** \n O numero era: "<< num_Random << endl;
        }

        cout << "Deseja continuar jogando? (S/n): ";
        cin >> opc;

    } while (opc != 'N' && opc != 'n');

    cout << "Fim de Jogo!!" << endl;
    
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