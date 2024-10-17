#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>

const float BASE_FREQUENCY = 160;
const float BASE_FM_FREQUENCY = BASE_FREQUENCY / 2;
const float BASE_AEG_DECAY = 1;
const unsigned int SAMPLERATE = 44100;
const unsigned int BUFFER_FRAMES = 512;

const std::string STEP_STYLESHEET_DEFAULT  = "border: 2px solid black; border-radius: 10; background-color: gray";
const std::string STEP_STYLESHEET_CURRENT  = "border: 2px solid black; border-radius: 10; background-color: #F0C0F0";
const std::string STEP_STYLESHEET_DISABLED = "border: 2px solid black; border-radius: 10; background-color: #404040";

#endif