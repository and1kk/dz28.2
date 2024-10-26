// VoiceRecording.cpp
#include "VoiceRecording.h"
#include <iostream>
using namespace std;

VoiceRecording::VoiceRecording(string speaker, int duration, Date recordingDate)
    : speaker(speaker), duration(duration), recordingDate(recordingDate) {}

void VoiceRecording::displayRecordingInfo() const {
    cout << "������: " << speaker << endl;
    cout << "���������: " << duration << " ������" << endl;
    cout << "���� ������: ";
    recordingDate.display();
    cout << endl;
}
