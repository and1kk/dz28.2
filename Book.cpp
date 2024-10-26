
#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string author, string edition, Date publicationDate, long isbn)
    : author(author), edition(edition), publicationDate(publicationDate), isbn(isbn) {}

void Book::displayBookInfo() const {
    cout << "Автор: " << author << endl;
    cout << "Видання: " << edition << endl;
    cout << "Дата публікації: ";
    publicationDate.display();
    cout << endl;
    cout << "ISBN: " << isbn << endl;
}
