#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){
  Pessoa pessoa1 = Pessoa("Catarina Silva");
  Pessoa pessoa2 = Pessoa("Duarte", "3333", 18);

  pessoa2.setTel("960000000");
  pessoa1.setNome("Catarina Silva");
  pessoa2.setIdade(25);

  cout << "Nome: " << pessoa1.getNome() << endl;
  cout << "Idade: ";
  if(pessoa1.getIdade()){
    cout << pessoa1.getIdade() << endl;
  }else{
    cout << "Não identificado" << endl;
  }
  cout << "Telefone: " << pessoa1.getTel() << endl << endl;

  cout << "Nome: " << pessoa2.getNome() << endl;
  cout << "Idade: ";
  if(pessoa2.getIdade()){
    cout << pessoa2.getIdade() << endl;
  }else{
    cout << "Não identificado" << endl;
  }
  cout << "Telefone: " << pessoa2.getTel() << endl << endl;

  return 0;
}