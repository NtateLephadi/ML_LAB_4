#include "perceptron.h"

perceptron::perceptron(){}

perceptron::~perceptron(){}

void perceptron::set_new_weight(double new_weight){
	this->new_weight = new_weight;
}

void perceptron::set_old_weight(double old_weight){
        this->old_weight = old_weight;
}

void perceptron::threshold(double threshold){
        this->threshold = threshold;
}

void perceptron::to_string(){
	std::cout << new_weight << std::endl;
	std::cout << old_weight << std::endl;
	std::cout << threshold << std::endl;
}




