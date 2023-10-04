# include <iostream>
# include <limits>
# include <cstring>
# include <vector>
# include <iomanip>

using namespace std;

void pause();
void limpaTela();

float recebeNota(float idNota){
    float valor;
    do{
        cout << "Digite a " << idNota << "ª nota: ";
        cin >> valor;
        if(valor < 0 || valor > 10){
            cout << "Nota inválida tente novamente! " << endl;
            cout << "OBS: A nota deve estar entre 0 e 10" << endl;
        }
    }while(valor < 0 || valor > 10);

    return valor;
}

int main(){
    vector<float> aluno;
    vector<vector<float>> boletin;
    char opc;
    float valor;

    do
    {
        limpaTela();

        cout << "Digite a matricula: ";
        cin >> valor;
        aluno.insert(aluno.begin(),valor);
        
        aluno.insert(aluno.begin()+1,recebeNota(1));
        
        aluno.insert(aluno.begin()+2,recebeNota(2));

        aluno.insert(aluno.begin()+3,recebeNota(3));

        boletin.push_back(aluno);

        cout << "Deseja continuar? [S/N]: ";
        cin >> opc;

    } while (opc != 'N' && opc != 'n');
    
    
    for (size_t i = 0; i < boletin.size(); i++){
        cout << "\n Matricula || Nota1 || Nota2 || Nota3 || Media" << endl;
        cout << "================================================" << endl;
        cout << " " <<boletin[i][0] << "   ||   " << fixed << setprecision(1) << boletin[i][1] << "   ||   " << fixed << setprecision(1) << boletin[i][2]
         << "   ||   " << fixed << setprecision(1) << boletin[i][3] << "   ||   " << fixed << setprecision(1) << double ((boletin[i][1] + boletin[i][2] + boletin[i][3]) / 3) << endl;
        cout << "================================================" << endl << endl;
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