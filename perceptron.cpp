#include "perceptron.h"

perceptron::perceptron(){
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator (seed);
	std::uniform_real_distribution<double> distribution (-1.0,1.0);
	for (size_t i = 0; i < 2; i++) {
		/* code */
		this->weights.push_back(distribution(generator));
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

void perceptron::set_target(int t) {
	/* code */
	this->target=t;
}

double perceptron::product_sum(){

	double product_sum=0;

	for (size_t i = 0; i < this->weights.size(); i++) {
		/* code */
		product_sum+=this->weights[i]*this->inputs[i];
	}

	return product_sum;
}

void perceptron::activation_function(){
	if(product_sum()>0){
		this->target = 1;
	}
	else{
		this->target = 0;
	}
}

void perceptron::percepton_rule(){
	this->activation_function();
	for (size_t i = 0; i < 2; i++) {
		/* code */
		this->weights[i]=this->weights[i]+(
			this->learning_rate*(
				this->output-this->target*this->inputs[i]
			)
		);
	}
}

void perceptron::to_string(){
	std::cout << "weights" << '\n';
	for (size_t i = 0; i < this->weights.size(); i++) {
		/* code */
		std::cout << this->weights[i] << '\n';
	}

	std::cout << "inputs" << '\n';
	for (size_t i = 0; i < this->inputs.size(); i++) {
		/* code */
		std::cout << this->inputs[i] << '\n';
	}

	std::cout << "learning rate" << '\n';
	std::cout << this->learning_rate << '\n';

	std::cout << "output" << '\n';
	std::cout << this->output << '\n';

	std::cout << "target" << '\n';
	std::cout << this->target << '\n';
}
