#include<iostream>
#include<vector>

using namespace std;



class Book{
    public:
        string title;
        string author;
        string PUB_date;
        int ISBN;
        string edition;
    public:
        Book(string title,string author, string PUB_DATE,int ISBN,string editiion){
            this->title = title;
            this->author = author;
            this->PUB_date = PUB_DATE;
            this->ISBN = ISBN;
            this->edition = edition;


        }

};


class Library{
    private:
        string name;
        string location;
        string workinghours;
        vector<Book>books;

    public:
        Library(string name,string location,string workinghours){
            this->name = name;
            this->location = location;
            this->workinghours = workinghours;
        }


        void addBook(Book book){
            books.push_back(book);
        }


        void displaybook(){
            for(Book &book:books){
                cout<<book.title<<endl;
            }
        }
};



int main(){
        
}