/*CSCI261: Final Project
*
*Author: Dustin Huntsman
*in collaboration with Brian Gray
*
*28 Apr 2017
*
*
*/

#include "Cleavage.h"

Cleavage::Cleavage() {
	quality = "Empty";
	quantity = 0;
	orientation.resize(1);
	orientation[0] = 0;
}

Cleavage::Cleavage(const string quality, const int quantity, const vector<double>& orientation) {
	this->quality = quality;
	this->quantity = quantity;
	this->orientation = orientation;
}

string Cleavage::getQuality() const {
	return quality;
}

int Cleavage::getQuantity() const {
	return quantity;
}

vector<double> Cleavage::getOrientation() const {
	return orientation;
}