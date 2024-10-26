// TalkingBook.cpp
#include "TalkingBook.h"
#include <iostream>
using namespace std;

TalkingBook::TalkingBook(string author, string edition, Date publicationDate, long isbn,
    string speaker, int duration, Date recordingDate, int tapes)
    : Book(author, edition, publicationDate, isbn),
    VoiceRecording(speaker, duration, recordingDate),
    tapes(tapes) {}

void TalkingBook::displayTalkingBookInfo() const {
    displayBookInfo();
    displayRecordingInfo();
    cout << "Кількість касет: " << tapes << endl;
}
