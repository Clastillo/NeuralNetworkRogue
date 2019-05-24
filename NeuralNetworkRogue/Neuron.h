#pragma once

#include <vector>

class Neuron
{
public:
	//Constructor
	Neuron();
	Neuron(int);

	//Destructor
	~Neuron();

	//Getter
	double getBias() { return m_bias; }
	std::vector<int> getLinked_Neuron() { return m_linked_Neuron; }
	std::vector<double> getWeight() { return m_weight; }
	double getValue() { return m_value; }

	//Print
	void print_Information();

	//Connection
	void add_Connection(int);
	void remove_Connection(int);

	//Calculation
	void calculate_Value();

protected:
	double m_value;
	double m_bias;
	std::vector<int> m_linked_Neuron;
	std::vector<double> m_weight;
};

