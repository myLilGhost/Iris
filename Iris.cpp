#include "Iris.h"

Iris::Iris(int s,double sLength, double sWidth, double pLength, double pWidth)
{
    setSpecies(s);
    setSepalLength(sLength);
    setSepalWidth(sWidth);
    setPetalLength(pLength);
    setPetalWidth(pWidth);
}

void Iris::setSpecies(int s)
{
    species = s;
}
void Iris::setSepalLength(double sLength)
{
    SepalLength = sLength;
}

void Iris::setSepalWidth(double sWidth)
{
    SepalLength = sWidth;
}

void Iris::setPetalLength(double pLength)
{
    PetalLength = pLength;
}

void Iris::setPetalWidth(double pWidth)
{
    PetalWidth = pWidth;
}

double Iris::getSepalLength() const
{
    return SepalLength;
}

double Iris::getSepalWidth() const
{
    return SepalWidth;
}

double Iris::getPetalLength() const
{
    return PetalLength;
}


double Iris::getPetalWidth() const
{
    return PetalWidth;
}

int Iris::getSpecies() const
{
    return species;
}