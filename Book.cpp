
#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string author, string edition, Date publicationDate, long isbn)
    : author(author), edition(edition), publicationDate(publicationDate), isbn(isbn) {}

void Book::displayBookInfo() const {
    cout << "�����: " << author << endl;
    cout << "�������: " << edition << endl;
    cout << "���� ���������: ";
    publicationDate.display();
    cout << endl;
    cout << "ISBN: " << isbn << endl;
}
