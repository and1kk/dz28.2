// Book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Date.h"
using namespace std;

class Book {
protected:
    string author;
    string edition;
    Date publicationDate;
    long isbn;

public:
    Book(string author, string edition, Date publicationDate, long isbn);
    void displayBookInfo() const;
};

#endif // BOOK_H
