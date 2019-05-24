#pragma once

#include <vector>
#include "Neuron.h"

class NeuralNetwork : protected Neuron
{
public:
	//Constructor
	NeuralNetwork();
	NeuralNetwork(std::vector<int>);

	//Destructor
	~NeuralNetwork();

	//Print
	void print_Information();

	//Neuron Management
	void add_Neuron(int, int);
	void remove_Neuron(int, int);


	//Neural Network calculations
	void calculateNetwork(std::vector<double>);
	double calculateCost();

protected:
	std::vector<int> m_network_Size;
	std::vector<double> m_input_Value;
	std::vector<std::vector<Neuron*>> m_neuron;
};
