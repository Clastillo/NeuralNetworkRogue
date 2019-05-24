#include <iostream>
#include <vector>
#include "NeuralNetwork.h"

using namespace std;
//Constructor
NeuralNetwork::NeuralNetwork() {}

NeuralNetwork::NeuralNetwork(std::vector<int> network_Size)
{
	m_network_Size = network_Size;
	for (int layer = 1; layer < m_network_Size.size(); layer++)
	{
		for (int position = 0; position < m_network_Size[layer]; position++)
		{
			m_neuron[layer].push_back(new Neuron(m_network_Size[layer-1]));
		}
	}
}

//Destructor
NeuralNetwork::~NeuralNetwork()
{
	for (int layer = 1; layer < m_network_Size.size(); layer++)
	{
		for (int position = 0; position < m_network_Size[layer]; position++)
		{
			delete m_neuron[layer][position];
		}
	}
}

//Print
void NeuralNetwork::print_Information()
{
}

//Neuron Management
void NeuralNetwork::add_Neuron(int, int)
{
}

void NeuralNetwork::remove_Neuron(int, int)
{
}

//Neural Network calculation
void NeuralNetwork::calculateNetwork(std::vector<double>)
{
}

double NeuralNetwork::calculateCost(void)
{
	return 0.0;
}
