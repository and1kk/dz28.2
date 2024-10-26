
#include <iostream>
#include "Book.h"
#include "VoiceRecording.h"
#include "TalkingBook.h"
using namespace std;

int main() {
    setlocale(0, "");
    // Створення об'єкта класу Book
    Book book("Джоан Роулінг", "Перше", Date(1, 7, 1997), 9780747532743);
    cout << "Інформація про книгу:" << endl;
    book.displayBookInfo();
    cout << endl;

    // Створення об'єкта класу VoiceRecording
    VoiceRecording recording("Алан Рікман", 480, Date(15, 7, 2000));
    cout << "Інформація про аудіозапис:" << endl;
    recording.displayRecordingInfo();
    cout << endl;

    // Створення об'єкта класу TalkingBook
    TalkingBook talkingBook("Джоан Роулінг", "Перше", Date(1, 7, 1997), 9780747532743,
        "Алан Рікман", 480, Date(15, 7, 2000), 12);
    cout << "Інформація про аудіокнигу:" << endl;
    talkingBook.displayTalkingBookInfo();

    return 0;
}
