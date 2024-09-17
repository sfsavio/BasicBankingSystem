#include<iostream>
#include<string>
#include<vector>

using namespace std;

void selectOption(); 
void printLoginMenu();
void printCadMenu();
void cadUser();

void printMainMenu () {
	std::cout<<"Bem vindo ao BANCO IFMG!!"<<endl;
	std::cout<<"1. LOGIN\n" << "2. CRIAR CONTA\n" << "0. SAIR\n";

	selectOption();
}

 int mainMenu(int *ptr) {  // *ptr = &op
	std::cout<< endl <<"*ptr: "<<  *ptr << endl;
	switch (*ptr) {
	case 1:
		printLoginMenu();
		break;
	case 2:
		printCadMenu();
		break;
	case 0:
		std::cout << "\nSaindo..\n";
		return 0;
		break;
	default: 
		std::cout<< "Entre uma opcao valida..";
		selectOption();
		break;
	}
}

 void cadUser() {
	 std::vector<std::vector<strings> data> index;
	 
 }

int main () {	
	system("cls");
	system("color a");

	printMainMenu();
	
	system("pause");
}

void selectOption() {
	int option;
	std::cin >> option;
	std::cout << endl;

	mainMenu(&option);
}
void printCadMenu() {
	system("cls");
	char cad_op;
	std::cout << "Deseja cadastrar novo user? (s/n)\n";
	std::cin >> cad_op;
	switch (cad_op)
	{
	case 'n':
		std::cout << "Nao";
		break;
	case 's':
		std::cout << "sim";
		cadMenu();
	default:
		break;
	}
}

void printLoginMenu() {


}
