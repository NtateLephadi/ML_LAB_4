#include <vector>
#include <iostream>
#include <stdlib.h>

#ifndef PERCEPTRON_H
#define PERCEPTRON_H
class perceptron{
private:
	std::vector<double> weights, input;
	double learning_rate;
	int output;
public:
	perceptron();
	~perceptron();
	void to_string();
	void set_weights(std::vector<double>);
	void set_inputs(std::vector<double>);
	void set_learning_rate(double);
	void set_output(int);
};
#endif
