#include "perceptron.h"

int main(int argc, char const *argv[]) {
  /* code */
  perceptron p;
  p.set_inputs(
    {
      {0, 0},
      {0, 1},
      {1, 0},
      {1, 1}
    }
  );
  p.set_target(
    {1, 0, 0, 0}
  );

  p.set_learning_rate(0.6);
  p.to_string();

  do {

    /* code */
    p.percepton_rule();
    p.to_string();

  } while(p.find_error());

  return 0;
}
