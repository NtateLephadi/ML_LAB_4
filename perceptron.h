#include <vector>
#include <iostream>

#ifndef PERCEPTRON_H
#define PERCEPTRON_H
class perceptron{
private:
	double new_weight, old_weight, threshold;
public:
	perceptron();
	~perceptron();
	void to_string();
	void set_new_weight();
	void set_old_weight();
};
#endif
