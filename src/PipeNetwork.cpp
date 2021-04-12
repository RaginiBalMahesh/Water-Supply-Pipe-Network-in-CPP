#include "PipeNetwork.h"
#include "Node.h"
#include "Tube.h"
#include<iostream>
#include<fstream>
#include <string>
#include<vector>
#include<sstream>
using namespace std;


//PipeNetwork::PipeNetwork(double permeability)
//{
//}

void PipeNetwork::ReadFile()
{
	
	string filename = "InputFile_PipeData.txt";
	double x, y, Q;
	std::ifstream infile(filename);
	while (infile >> x >> y >> Q)
	{
		//Node node1 = new Node(x,y,Q)
	}
	
}

int main()
{
	std::vector<std::vector<std::double_t>> node_vector;
	std::vector<std::vector<std::double_t>> tube_vector;
	int num_nodes = 0;
	int num_tubes = 0;
	string filename = "InputFile_PipeData.txt";
	std::ifstream infile(filename);
	double x, y, Q,n1,n2,diameter;
	std::string line;
	std::getline(infile, line);
	std::cout << line;
	stringstream streamer_nodes(line);
	streamer_nodes >> num_nodes; 
	std::cin.get();
	std::getline(infile, line);
	std::cout << line;
	stringstream streamer_tubes(line);
	streamer_tubes >> num_tubes;
	std::cin.get();
	
	
	for (int i = 0; i < num_nodes; i++)
	{
		std::vector<std::double_t> node_params;
		infile >> x >> y >> Q;
		node_params.push_back(x);
		node_params.push_back(y);
		node_params.push_back(Q);
		node_vector.push_back(node_params);
		std::cout << " " << x << " " << y << " " << Q;
		std::cin.get();
	}

	for (int i = 0; i < num_tubes; i++)
	{
		std::vector<std::double_t> tube_params;
		infile >> n1 >> n2 >> diameter;
		tube_params.push_back(n1);
		tube_params.push_back(n2);
		tube_params.push_back(diameter);
		tube_vector.push_back(tube_params);
		std::cout << " " << n1 << " " << n2 << " " << diameter;
		std::cin.get();
	}

	for (std::vector<std::vector<std::double_t>>::const_iterator i = node_vector.begin(); i != node_vector.end(); i++)
	{
		for (std::vector<double_t>::const_iterator j = (*i).begin(); j != (*i).end(); j++)
			std::cout << " " << (*j) << " ";
		std::cin.get();
	}


	
		
}
