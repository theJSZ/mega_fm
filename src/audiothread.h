#ifndef AUDIOTHREAD_H
#define AUDIOTHREAD_H

#include <QThread>
#include <RtAudio.h>
#include <stdio.h>
#include <Stk.h>
#include <ADSR.h>
#include "sequencer.h"
#include "fmosc.h"
#include "constants.h"

class Sequencer;
class AudioThread : public QThread {
public:
	AudioThread();
	~AudioThread();
	FMOsc *osc;

	// stk::ADSR *fmEnvelope;
	// stk::ADSR *ampEnvelope;

	unsigned int getSampleRate();
	float getBpm();
	Sequencer *sequencer;

protected:
	void run() override;

private:
	static int audioCallback(
		void *outputBuffer, void *inputBuffer,
		unsigned int nBufferFrames, double streamTime,
		RtAudioStreamStatus status, void *userData);

	RtAudio audio;
	RtAudio::StreamParameters parameters;
	unsigned int sampleRate = SAMPLERATE;
	unsigned int bufferFrames = BUFFER_FRAMES;
	float bpm;
};

#endif