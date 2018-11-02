#include "perceptron.h"

perceptron::perceptron(){
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator (seed);
	std::uniform_real_distribution<double> distribution (-1.0,1.0);
	std::vector<double> v;
	for (size_t i = 0; i < 4; i++) {
		/* code */
		for (size_t j = 0; j < 2; j++) {
			/* code */
			v.push_back(distribution(generator));
		}
		this->weights.push_back(v);
		v.clear();
	}
}

perceptron::~perceptron(){}

void perceptron::set_weights(std::vector<std::vector<double>> v){
	this->weights = v;
}

void perceptron::set_inputs(std::vector<std::vector<double>> v){
  this->inputs = v;
}

void perceptron::set_learning_rate(double d){
  this->learning_rate = d;
}

void perceptron::set_output(std::vector<int> i){
	this->output = i;
}

void perceptron::set_target(std::vector<int> t) {
	/* code */
	this->target=t;
}

std::vector<double> perceptron::product_sum(){
	std::vector<double> v;
	double product_sum;
	for (size_t j = 0; j < this->weights.size(); j++) {
		/* code */
		product_sum=0;
		for (size_t i = 0; i < this->weights[i].size(); i++) {
			/* code */
			product_sum+=this->weights[j][i]*this->inputs[j][i];
		}
		v.push_back(product_sum);
	}
	return v;
}

void perceptron::activation_function(){
	this->output.clear();
	for (size_t i = 0; i < this->product_sum().size(); i++) {
		/* code */
		if(this->product_sum()[i]>0){
			this->output.push_back(1);
		}
		else{
			this->output.push_back(0);
		}
	}
}

void perceptron::percepton_rule(){
	this->activation_function();
	for (size_t j = 0; j < this->target.size(); j++) {
		/* code */
		for (size_t i = 0; i < 2; i++) {
			/* code */
			this->weights[j][i]=this->weights[j][i]+(
				this->learning_rate*(
					this->target[j]-this->output[j]*this->inputs[j][i]
				)
			);
		}
	}
}

bool perceptron::find_error(){
	bool error = false;
	for (size_t i = 0; i < this->target.size(); i++) {
		/* code */
		if (this->target[i]-this->output[i]!=0) {
			/* code */
			error = true;
		}
	}
	return error;
}

void perceptron::to_string(){
	std::cout << "weights" << '\n';
	for (size_t i = 0; i < this->weights.size(); i++) {
		/* code */
		for (size_t j = 0; j < this->weights[i].size(); j++) {
			/* code */
			std::cout << this->weights[i][j] << '\n';
		}
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
	for (size_t i = 0; i < this->output.size(); i++) {
		/* code */
		std::cout << this->output[i] << '\n';
	}

	std::cout << "target" << '\n';
	for (size_t i = 0; i < this->target.size(); i++) {
		/* code */
		std::cout << this->target[i] << '\n';
	}

	std::cout << "error" << '\n';
	// for (size_t i = 0; i < this->target.size(); i++) {
	// 	/* code */
	// 	std::cout << this->target[i]-this->output[i] << '\n';
	// }
}
