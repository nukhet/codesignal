- Difficulty: Medium
- Type: Codewriting
- Score: 300

# stringsRearrangement

Given an array of equal-length strings, check if it is possible to rearrange the strings in such a way that after the rearrangement the strings at consecutive positions would differ by exactly one character.

**Example**

- For `inputArray = ["aba", "bbb", "bab"]`, the output should be
  `stringsRearrangement(inputArray) = false`.

  All rearrangements don't satisfy the description condition.

- For `inputArray = ["ab", "bb", "aa"]`, the output should be
  `stringsRearrangement(inputArray) = true`.

  Strings can be rearranged in the following way: `"aa", "ab", "bb"`.
  **Input/Output**

- **[execution time limit] 0.5 seconds (cpp)**

- **[input] array.string inputArray**

  A non-empty array of strings of lowercase letters.

  *Guaranteed constraints:*
  `2 ≤ inputArray.length ≤ 10`,
  `1 ≤ inputArray[i].length ≤ 15`.

- **[output] boolean**

**[C++] Syntax Tips**

```
// Prints help message to the console
// Returns a string
std::string helloWorld(std::string name) {
    std::cout << "This prints to the console when you Run Tests" << std::endl;
    return "Hello, " + name;
}
```