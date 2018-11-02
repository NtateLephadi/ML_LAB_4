#include "perceptron.h"

perceptron::perceptron(){
	for (size_t i = 0; i < 2; i++) {
		/* code */
		this->weights[i]= rand() % 1 - 1;
	}
}

perceptron::~perceptron(){}

void perceptron::set_weights(std::vector<double> v){
	this->weights = v;
}

void perceptron::set_inputs(std::vector<double> v){
        this->inputs = v;
}

void perceptron::set_learning_rate(double d){
        this->learning_rate = d;
}

void perceptron::set_output(int i){
	this->output = i;
}
void perceptron::to_string(){
	std::cout << "weights" << '\n';
	for (size_t i = 0; i < 2; i++) {
		/* code */
		std::cout << this->weights[i] << '\n';
	}

	std::cout << "inputs" << '\n';
	for (size_t i = 0; i < 2; i++) {
		/* code */
		std::cout << this->inputs[i] << '\n';
	}

	std::cout << "learning rate" << '\n';
	std::cout << this->learning_rate << '\n';

	std::cout << "output" << '\n';
	std::cout << this->output << '\n';
}
