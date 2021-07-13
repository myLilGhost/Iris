#pragma once
#include "Iris.h"
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>

class data :public Iris {
public:
	data(int s,double sLength, double sWidth, double pLength, double pWidth);
	void get_distance();

private:
	int index;
	vector<Iris> dataSet;
	vector<Iris> setTest;
	
};
