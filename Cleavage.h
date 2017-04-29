#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Cleavage {
public:
	Cleavage();
	Cleavage(const string quality,const int quantity,const vector<double>& orientation);
	string getQuality() const;
	int getQuantity() const;
	vector<double> getOrientation() const;

private:
	string quality;
	int quantity;
	vector<double> orientation;
};