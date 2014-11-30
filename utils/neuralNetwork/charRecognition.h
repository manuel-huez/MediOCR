#include <stddef.h>
#include <SDL/SDL.h>

#include "neuralNetwork.h"

#ifndef UTILS_NEURALNETWORK_CHARRECOGNITION_
#define UTILS_NEURALNETWORK_CHARRECOGNITION_

struct charRecognition {
	char *letters;
	unsigned size;
	struct NeuralNetwork *network;
};

struct charRecognitionList {
	struct charRecognition *current;
	struct charRecognitionList *next;
};

struct charRecognition *charRecognition_learn(char *rootPath,
	char chars[], size_t size, size_t variants);
char charRecognition_getChar(struct charRecognition *list,
			     SDL_Surface *surface);

#endif
