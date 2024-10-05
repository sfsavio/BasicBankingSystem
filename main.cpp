#include<iostream>
#include<vector>
#include<string>
#include<locale>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits

std::string checkBook(std::vector<std::string> books, std::vector<std::string> status);
std::string createBook(std::vector<std::string> books, std::string bookName, std::vector<std::string> status);
std::string readBookName();
//std::string rentBook(std::vector<std::string> books);
//std::string returnBook(std::vector<std::string> books);


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    std::cout << "Bem vindo a Biblioteca Do IFMG - Por Favor Selecione Uma Opção:\n1. Cadastrar Livro \n2. Consultar Livro\n3. Alugar Livro\n4. Devolver Livro\n5. Sair";
    std::cout << std::endl;
    std::vector<std::string> books; 
    std::vector<std::string> status;
        
    books.shrink_to_fit();
    //std::cout << books.size();
    int op;
    std::cin>>op;
    std::cin.ignore();
    switch(op) {
        case 1:
              checkBook(books, status);   
              break;
        case 2:

        default:
              std::cout<<"default";
        break;
    }
        
    
    
   // checkBook(books, status); 

    return 0;
}
std::string checkBook(std::vector<std::string> books, std::vector<std::string> status) {
    std::string bookName = readBookName();
     for (int i = 0; i < books.size(); i++) {
         if (bookName == books[i]) {
             std::cout << "Book Found In Position: " << i << std::endl;
             std::cout << status[i];
             checkBook(books, status);
         }
     }
    
    char validate;
    //system("cls");
    std::cout << "Livro não cadastrado..\n";
    std::cout << "Deseja cadastrar \"" << bookName << "\" ? (s/n)";
    std::cin >> validate;
    
    if (validate == 's') {
        createBook(books, bookName, status);
    }
    if (validate == 'n') {
        main();
    }
   
    
}

std::string createBook(std::vector<std::string> books, std::string bookName, std::vector<std::string> status) {
    std::cout << "\nBook: \"" << bookName << "\" added.." << std::endl;
    books.push_back(bookName);

    std::string status_positivo = "status: Disponivel";
    std::string status_negativo = "status: Indisponivel";
    status.push_back(status_positivo);
    std::cout << std::endl << std::endl;
    for (int i = 0; i < books.size(); i++) {
        std::cout <<"Book: " << books[i] << "\t\t\t" << status[i] << "\n";
    }
    std::string op;
    std::cout << "Deseja adcionar um novo livro? (sim / nao) \n";
    std::cin.ignore();
    std::getline(std::cin, op);

    while (true) {
        if (op == "sim") {
            checkBook(books, status);
        }
        else {
            std::cout << "\n\nsaindo..";
            //main();
        }
        break;
    }
    /*checkBook(books, status);*/
  
}

std::string readBookName() {
    std::string bookName;
    std::cout << "\nDigite o nome livro para verificar se ele ja existe no sistema: \n";
    std::getline(std::cin, bookName);
 
    return bookName;
}