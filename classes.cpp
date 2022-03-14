#include <iostream>

class Book{
public:
    string title;
    string author;
    int pages;
    Book(){                  //This is a constructor  they can have parameters
        cout<<"Creating object"<<endl;
    }
};

class Authors:public Book{
public:
    int contact;
    Authors(string aName, string aAuthor, int pPages){
        title = aName;
        author = aAuthor;
        pages = pPages;
    }
};


 void classy(){
    std::cout<<"--------------------classes ------------------------------"<<endl;
    Book book1;
    book1.author = "A.N Khamron";
    book1.title = "Learning c++";
    book1.pages = 1200;
    cout<<"Author is "<<book1.author<<endl;
    cout <<"Number of pages "<<book1.pages<<endl;
    cout <<"Title "<<book1.title<<endl;

    Authors auth("A.N khamron","Alvin", 1299);
    cout<<"constructors"<<auth.pages<<endl;

}