#include <iostream>
#include <ctime>
#include "randomValue.h"

int randomValue() {


	std::srand(std::time(nullptr)); // use current time as seed for random generator

	const int random_value = std::rand() % 100;

	return random_value;
}