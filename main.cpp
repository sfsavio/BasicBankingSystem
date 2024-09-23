#include<iostream>
#include<vector>
#include<string>
#include<clocale>

std::string checkBook(std::vector<std::string> books, std::vector<std::string> status);
std::string createBook(std::vector<std::string> books, std::string bookName, std::vector<std::string> status);
//std::string rentBook(std::vector<std::string> books);
//std::string returnBook(std::vector<std::string> books);


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    std::cout << "Bem vindo a Biblioteca Do IFMG - Por Favor Selecione Uma Opção:\n1. Cadastrar Livro \n2. Consultar Livro\n3. Alugar Livro\n4. Devolver Livro\n5. Sair";
    
    std::vector<std::string> books; 
    std::vector<std::string> status;
    
   

    
    books.shrink_to_fit();
    //std::cout << books.size();
   
    checkBook(books, status);

    

    return 0;
}
std::string checkBook(std::vector<std::string> books, std::vector<std::string> status) {
    std::string bookName;
    std::cout << "\nDigite o nome livro para verificar se ele ja existe no sistema: \n";
    std::getline(std::cin, bookName);

    for (int i = 0; i < books.size(); i++)
    {
        if (bookName == books[i]){
            std::cout << "Book Found In Position: " << i << " -> book_name: " << books[i] << std::endl;
            std::cout << status[i];
            checkBook(books, status);
        } else {
            
        }
    }
    createBook(books, bookName, status);    
}

std::string createBook(std::vector<std::string> books, std::string bookName, std::vector<std::string> status) {
    std::cout << "\nBook: \"" << bookName << "\" added.." << std::endl;
    books.push_back(bookName);

    std::string status_positivo = "status: Disponivel";
    std::string status_negativo = "status: Indisponivel";
    status.push_back(status_positivo);

    for (int i = 0; i < books.size(); i++) {
        std::cout <<"Book: " << books[i] << "\t\t\t" << status[i] << "\n";
    }

    checkBook(books, status);
  
}
