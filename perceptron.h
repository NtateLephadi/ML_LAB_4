#include <vector>
#include <iostream>
#include <stdlib.h>
#include <random>
#include <chrono>

#ifndef PERCEPTRON_H
#define PERCEPTRON_H
class perceptron{
private:
	std::vector<double> weights, inputs;
	double learning_rate;
	int output, target;
public:
	perceptron();
	~perceptron();
	void to_string();
	void set_weights(std::vector<double>);
	void set_inputs(std::vector<double>);
	void set_learning_rate(double);
	void set_output(int);
	void set_target(int);
	double product_sum();
	void activation_function();
	void percepton_rule();
};
#endif
