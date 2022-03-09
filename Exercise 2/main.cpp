#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
  Invoice vazio = Invoice();
  Invoice doisPcs = Invoice(1, "MacBook Pro", 2, 3000.00);
  Invoice ipad = Invoice();

  ipad.setNum(2);
  ipad.setQtd(6);
  ipad.setDesc("iPad Air");
  ipad.setPreco(670.00);

  cout << "Teste objeto vazio: " << vazio.getDesc() << " " << vazio.getPreco() << endl << endl;

  cout << "Código do item: " << doisPcs.getNum() << endl;
  cout << "Descricao: " << doisPcs.getDesc() << endl;
  cout << "Quantidade: " << doisPcs.getQtd() << endl << "Preco: €" << doisPcs.getPreco() << endl;
  cout << "TOTAL: €" << doisPcs.getInvoiceAmount() << endl << endl;

  cout << "Código do item: " << ipad.getNum() << endl;
  cout << "Descricao: " << ipad.getDesc() << endl;
  cout << "Quantidade: " << ipad.getQtd() << endl << "Preco: €" << ipad.getPreco() << endl;
  cout << "TOTAL: €" << ipad.getInvoiceAmount() << endl;

  return 0;
}