#include <stdio.h>
float calculateBMI(float weight, float height) {
  return weight / (height * height);
}
int main() {
  float weight, height, bmi;

  printf("Enter your weight in kilograms: ");
  scanf("%f", &weight);

  printf("Enter your height in meters: ");
  scanf("%f", &height);

  bmi = calculateBMI(weight, height);
  printf("Your BMI is: %.2f\n", bmi);

  if (bmi < 18.5) {
    printf("You are underweight.\n");
  } else if (bmi >= 18.5 && bmi < 25) {
    printf("You are normal weight.\n");
  } else if (bmi >= 25 && bmi < 30) {
    printf("You are overweight.\n");
  } else {
    printf("You are obese.\n");
  }

  return 0;
}

