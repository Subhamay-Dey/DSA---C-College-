#include<iostream>
#include<string>

class books {
    public:
        std::string bookname;
        std::string authername;
        int publishingDate;

        void addBooks() {
            std::cout<<"enter the name of the book:";
            getline(std::cin,bookname);
            std::cout<<"Enter the author name:";
            getline(std::cin,authername);
            std::cout<<"Enter the publishing date:";
            std::cin>>publishingDate;
        }
        void displayBooks() {
            std::cout<<"book name is: "<<bookname<<std::endl;
            std::cout<<"author name is: "<<authername<<std::endl;
            std::cout<<"publishing date is: "<<publishingDate<<std::endl;
        }
};

int main() {
    books bookstore[3];
    for(int i = 0; i < 3; i++) {
        bookstore[i].addBooks();
    }
    for(int i = 0; i < 3; i++) {
        bookstore[i].displayBooks();
    }
    return 0;
}