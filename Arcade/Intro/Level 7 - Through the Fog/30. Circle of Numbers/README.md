- Difficulty: Easy
- Type: Codewriting
- Score: 300

# Circle of Numbers

Consider integer numbers from `0` to `n - 1` written down along the circle in such a way that the distance between any two neighboring numbers is equal (note that `0` and `n - 1` are neighboring, too).

Given `n` and `firstNumber`, find the number which is written in the radially opposite position to `firstNumber`.

**Example**

For `n = 10` and `firstNumber = 2`, the output should be
`circleOfNumbers(n, firstNumber) = 7`.

![img](example.png)

**Input/Output**

- **[execution time limit] 0.5 seconds (cpp)**

- **[input] integer n**

  A positive **even** integer.

  *Guaranteed constraints:*
  `4 ≤ n ≤ 20`.

- **[input] integer firstNumber**

  *Guaranteed constraints:*
  `0 ≤ firstNumber ≤ n - 1`.

- **[output] integer**

**[C++] Syntax Tips**

```
// Prints help message to the console
// Returns a string
std::string helloWorld(std::string name) {
    std::cout << "This prints to the console when you Run Tests" << std::endl;
    return "Hello, " + name;
}
```