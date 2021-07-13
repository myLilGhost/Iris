#ifndef IRIS_H
#define IRIS_H

#include <fstream>
#include <iostream>
using namespace std;

class Iris {
public:
	Iris(int,double, double, double, double);
	void setSepalLength( double );
	void setSepalWidth(double);
	void setPetalLength(double);
	void setPetalWidth(double);
	void setSpecies(int);
	double getSepalLength() const;
	double getSepalWidth() const;
	double getPetalLength() const;
	double getPetalWidth() const;
	int getSpecies() const;
private:
	int species;
	double SepalLength;
	double SepalWidth; 
	double PetalLength; 
	double PetalWidth; 
};

#endif
