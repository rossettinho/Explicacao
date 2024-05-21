#include <iostream>
using namespace std;

//Resposta da Pergunta 1:
int main() {
  class Pessoa{
  private:
  string nome;
  int idade; 

  public: 
  string getnome(){
    return nome;
  }
  int getidade(){
    return idade;
  }
  }; 

  
  class Conta {
  private:
      int saldo;

  public:

      int getsaldo() {
          return saldo;
      }

      void colocardinheiro() {
          int dinheiro = 10;
          cout << (dinheiro + getsaldo()) << endl;
      }
  };

  class SensorTemperatura{
  private:
  int temperatura;

  public:
  int gettemperatura(){
    return temperatura;
  }

  void mudatemperatura(){
    temperatura = 30;
  }
  };

  

}



