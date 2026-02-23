#include <stdio.h>

int main()
{

  float resistors[] = {200.0, 400, 100, 123};   // Resistor values on Ohms
  int num_resistors = sizeof(resistors) / sizeof(resistors[0]);

  float sum_value = 0;
  float total_resitance;


  for (int i = 0; i < num_resistors; i++)
  {
    sum_value += 1 / resistors[i];
  }

  total_resitance = 1 / sum_value;


  printf("Total resistance of Resitors(%d) is %lf Ohm \n", num_resistors, total_resitance);

  return 0;
}