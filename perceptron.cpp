#include "perceptron.h"

perceptron::perceptron(){
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator (seed);
	std::uniform_real_distribution<double> distribution (-1.0,1.0);
	for (size_t j = 0; j < 2; j++) {
		/* code */
		this->weights.push_back(distribution(generator));
	}
}

perceptron::~perceptron(){}

void perceptron::set_weights(std::vector<double> v){
	this->weights = v;
}

void perceptron::set_inputs(std::vector<std::vector<int>> v){
  this->inputs = v;
}

void perceptron::set_learning_rate(double d){
  this->learning_rate = d;
}

void perceptron::set_output(int i){
	this->output = i;
}

void perceptron::set_target(int i) {
	/* code */
	this->target=i;
}

double perceptron::product_sum(){
	double product_sum;
	for (size_t j = 0; j < this->weights.size(); j++) {
		/* code */
		product_sum+=this->weights[j]*this->inputs[j];
	}
	return product_sum;
}

void perceptron::activation_function(){
	/* code */
	if(this->product_sum()>0){
		this->output = 1;
	}
	else{
		this->output = 0;
	}
}

void perceptron::percepton_rule(){
	this->activation_function();
	for (size_t i = 0; i < this->weights.size(); i++) {
		/* code */
		this->weights[i]=this->weights[i]+(
			this->learning_rate*(
				(
				this->target-this->output
				)*this->inputs[i]
			)
		);
	}
}

bool perceptron::find_error(){
	bool error = false;
	if (this->target!=this->output) {
		/* code */
		error = true;
	}
	return error;
}

void perceptron::to_string(){
	std::cout << "weights" << '\n';
	for (size_t j = 0; j < this->weights.size(); j++) {
		/* code */
		std::cout << this->weights[j] << '\n';
	}

	std::cout << "inputs" << '\n';
	for (size_t i = 0; i < this->inputs.size(); i++) {
		/* code */
		for (size_t j = 0; j < this->inputs[i].size(); j++) {
			/* code */
			std::cout << this->inputs[i][j] << '\n';
		}
	}

	std::cout << "learning rate" << '\n';
	std::cout << this->learning_rate << '\n';

	std::cout << "output" << '\n';
	/* code */
	std::cout << this->output << '\n';

	std::cout << "target" << '\n';
	/* code */
	std::cout << this->target << '\n';
}
