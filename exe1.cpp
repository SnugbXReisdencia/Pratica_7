# include <iostream>
# include <limits>
# include <cstring>

using namespace std;

void pause();
void limpaTela();

int main(){
    limpaTela();
    int l = 1;

    for (int i = 1; i <= 100; i++) {
        bool isMultipleOf3 = (i % 3 == 0);
        bool isMultipleOf5 = (i % 5 == 0);
        if(i == 100){
            if (isMultipleOf3 && isMultipleOf5) {
                cout << "FizzBuzz";
            } else if (isMultipleOf3) {
                cout << "Fizz";
            } else if (isMultipleOf5) {
                cout << "Buzz";
            } else {
                cout << i;
            }
        }else {
            if (isMultipleOf3 && isMultipleOf5) {
                cout << "FizzBuzz, ";
            } else if (isMultipleOf3) {
                cout << "Fizz, ";
            } else if (isMultipleOf5) {
                cout << "Buzz, ";
            } else {
                cout << i << ", ";
            }
        }
        if(i == l+17){
            cout << "\n\n";
            l += 17;
        }
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