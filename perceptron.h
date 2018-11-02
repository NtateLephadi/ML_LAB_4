#include <vector>
#include <iostream>
#include <stdlib.h>
#include <random>
#include <chrono>

#ifndef PERCEPTRON_H
#define PERCEPTRON_H
class perceptron{
private:
	std::vector<std::vector<double>> weights, inputs;
	double learning_rate;
	std::vector<int> output, target;
public:
	perceptron();
	~perceptron();
	void to_string();
	void set_weights(std::vector<std::vector<double>>);
	void set_inputs(std::vector<std::vector<double>>);
	void set_learning_rate(double);
	void set_output(std::vector<int>);
	void set_target(std::vector<int>);
	std::vector<double> product_sum();
	void activation_function();
	void percepton_rule();
	bool find_error();
};
#endif
