#pragma once

#include <vector>

class NeuralNetwork
{
public:
	//Constructor
	NeuralNetwork();
	NeuralNetwork(std::vector<int>);
	//Destructor
	~NeuralNetwork();



	double calculateCost(void);
protected:
	
};

