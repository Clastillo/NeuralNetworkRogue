#include <iostream>
#include <vector>
#include "Neuron.h"


using namespace std;
//Constructor
Neuron::Neuron(){}

Neuron::Neuron(int size)
{
	m_bias = 0;
	m_value = 0;
	for (int i = 0; i < size; i++)
	{
		m_linked_Neuron.push_back(i);
		m_weight.push_back(0.0);
	}
}
//Destructor
Neuron::~Neuron(){}

//Print
void Neuron::print_Information()
{
}

//Connection
void Neuron::add_Connection(int)
{
}

void Neuron::remove_Connection(int)
{
}

//Calculation
void Neuron::calculate_Value()
{
}
