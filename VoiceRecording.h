
#ifndef VOICE_RECORDING_H
#define VOICE_RECORDING_H

#include <string>
#include "Date.h"
using namespace std;

class VoiceRecording {
protected:
    string speaker;
    int duration; // тривалість у хвилинах
    Date recordingDate;

public:
    VoiceRecording(string speaker, int duration, Date recordingDate);
    void displayRecordingInfo() const;
};

#endif // VOICE_RECORDING_H
