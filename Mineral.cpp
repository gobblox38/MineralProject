/*CSCI261: Final Project
*
*Author: Dustin Huntsman
*in collaboration with Brian Gray
*
*28 Apr 2017
*
*
*/

#include "Mineral.h"

Mineral::Mineral() {
	hardness = 0;
	for (int i = 0; i < 6; ++i)
		features[i] = "Empty";
}

Mineral::Mineral(const double hardness, const string fracture, const string streak, const string color, const string luster, const string habit, const string chemicalFormula) {
	this->hardness = hardness;
	features[0] = fracture;
	features[1] = streak;
	features[2] = color;
	features[3] = luster;
	features[4] = habit;
	features[5] = chemicalFormula;
}

double Mineral::getHardness() const {
	return hardness;
}

string Mineral::getFeature(const int input) const {
	return features[input];
}

void Mineral::setHardness(const double hardness) {
	this->hardness = hardness;
}

void Mineral::setFeature(string input, const int loc) {
	features[loc] = input;
}

Cleavage Mineral::getCleavage() const {
	return cleavage;
}


//building database
