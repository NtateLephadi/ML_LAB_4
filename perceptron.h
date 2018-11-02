#include <vector>
#include <iostream>

#ifndef PERCEPTRON_H
#define PERCEPTRON_H
class perceptron{
private:
	std::vector<double> weights;
	std::vector<int> input;
	double learning_rate;
	int output
public:
	perceptron();
	~perceptron();
	void to_string();
	void set_weights(std::vector<double>);
	void set_inputs(std::vector<int>);
	void set_learning_rate(double);
};
#endif
