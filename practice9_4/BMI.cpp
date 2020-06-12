#include "BMI.h"

Bmi::Bmi(string newName, double newWeight, double newHeight) {
    name = newName;
    weight = newWeight;
    height = newHeight;
}

double Bmi::getBmi() {
    return weight / (height * height);
}