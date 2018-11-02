#include "perceptron.h"

int main(int argc, char const *argv[]) {
  /* code */
  perceptron p;
  p.set_inputs({0,0});
  p.set_output(0);
  p.set_learning_rate(0.1);
  //p.set_weights({-1,1});
  p.to_string();
  return 0;
}
