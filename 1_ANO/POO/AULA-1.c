#include <iostream>
#include <random>

using namespace std;

 struct horario{
        int hora;
        int minuto;
        int segundo;
    };

void setar_horario(struct horario *funcao);
void printar_24(struct horario funcao);

int main(){

struct horario teste;

setar_horario(&teste);
printar_24(teste);


    return 0;
}

void setar_horario(struct horario *funcao){
    srand(time(NULL));
    int test = rand()*10;
    cout << test << "\n";
    funcao->hora = test / 3600;
    funcao->minuto = (test - (funcao->hora * 3600)) /60;
    funcao->segundo = test - funcao->hora * 3600 - funcao->minuto * 60;

}

void printar_24(struct horario funcao){

    cout << funcao.hora % 24 << ":" << funcao.minuto << ":" << funcao.segundo;

}