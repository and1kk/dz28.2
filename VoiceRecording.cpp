// VoiceRecording.cpp
#include "VoiceRecording.h"
#include <iostream>
using namespace std;

VoiceRecording::VoiceRecording(string speaker, int duration, Date recordingDate)
    : speaker(speaker), duration(duration), recordingDate(recordingDate) {}

void VoiceRecording::displayRecordingInfo() const {
    cout << "Озвучує: " << speaker << endl;
    cout << "Тривалість: " << duration << " хвилин" << endl;
    cout << "Дата запису: ";
    recordingDate.display();
    cout << endl;
}
