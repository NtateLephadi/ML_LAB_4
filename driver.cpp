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
    {1, 1, 1, 0}
  );

  p.set_learning_rate(0.5);
  p.to_string();

  for (size_t i = 0; i < 10; i++) {
    /* code */
    p.percepton_rule();
    p.to_string();
  }

  return 0;
}
