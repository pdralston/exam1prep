/** CS11 Spring 2019 Exam Prep
 *
 *  Created in order to help students prepare
 *  for the midterm they are to take on 3/7/2019
 *
 *  @author Perry David Ralston Jr.
 *  @date 3/5/2019
*/

#include <iostream>

int main(){
  /**
  * This problem prints out stars rows of "*"
  * The number of "*" printed on each row depends
  * on the max number of rows to be printed and the 
  * current row that you are printing.
  */
  std::cout << "Program 1 Answer: \n";
  int stars = 7;
  while (stars > 0) {
    for (int i = stars; i > 0; i--){
      std::cout << "*";
    }
    std::cout << std::endl;
    stars--;
  }
  std::cout << std::endl;
  
  /**
  * This problem prints out 7 rows
  * of text using two different strings
  * where the first string is more prominent
  * the farther down the rows you go.
  */
  std::cout << "Program 2 Answer: \n";
  std::string nums = "1234567", asters = "*******";
  for (unsigned i = 0; i < nums.length(); i++) {
    std::cout << nums.substr(0, i + 1) + asters.substr(i + 1) << std::endl;
  }
  std::cout << std::endl
  
  /**
  * This problem takes integer input and adds up
  * all of the preceeding integers, then prints 
  * all of the integers from 1 to input inclusive
  * and the sum of the numbers printed
  */
            << "Program 3 Answer: \n";
  int input = 0, sum = 0;
  std::cout << "Please enter the number of ints to display and sum: ";
  std::cin >> input;
  for (int i = 1; i <= input; i++) {
    sum += i;
    if (i == 1) {
      std::cout << i;
    } else {
      std::cout << " + " << i;
    }
  }
  std::cout << " = " << sum << std::endl << std::endl
  
  /**
  * Using a loop, the input factorial is calculated
  * and printed to the console
  */
            << "Program 4 Answer: \n"
            << "Please enter a number to find the factorial of: ";
  std::cin >> input;
  int factorial = 1;
  if (input == 0 || input == 1){
    std::cout << input << "!" << " = 1\n\n";
  } else {
    for (int i = 2; i <= input; i++){
      factorial *= i;
    }
    std::cout << input << "!" << " = " << factorial << std::endl << std::endl;
  }
  
  /**
  * Given and integer input, this problem
  * adds the digits of the number and prints
  * the result.
  */
  std::cout << "Program 5 Answer: \n"
            << "Please enter a multi-digit number: ";
  std::cin >> input;
  int divisor = 1;
  sum = 0;
  while (input / divisor != 0){
    divisor *= 10;
  }//divisor is 1 magnitude greater than desired length
  while(divisor != 1){
    divisor /= 10;
    sum += input / divisor % 10;
  }
  std::cout << "The sum of the digits of " << input << " = " << sum << std::endl;
  
  return 0;
}
