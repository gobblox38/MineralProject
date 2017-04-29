#pragma once
#include "Cleavage.h"

class Mineral {
public:
	Mineral();
	Mineral(const double hardness, const string fracture, const string streak, const string color, const string luster, const string habit, const string chemicalFormula);
	double getHardness() const;
	string getFeature(const int input) const;
	void setHardness(const double hardness);
	void setFeature(string input, const int loc);
	Cleavage getCleavage() const;

private:
	string features[6];
	double hardness;
	Cleavage cleavage;
	/* 0 string fracture;
	 1 string streak;
	 2 string color;
	 3 string luster;
	 4 string habit;
	 5 string chemicalFormula;*/
};