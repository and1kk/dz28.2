// TalkingBook.h
#ifndef TALKING_BOOK_H
#define TALKING_BOOK_H

#include "Book.h"
#include "VoiceRecording.h"

class TalkingBook : public Book, public VoiceRecording {
private:
    int tapes; // кількість касет

public:
    TalkingBook(string author, string edition, Date publicationDate, long isbn,
        string speaker, int duration, Date recordingDate, int tapes);
    void displayTalkingBookInfo() const;
};

#endif // TALKING_BOOK_H
