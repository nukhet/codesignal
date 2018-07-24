- Difficulty: Medium
- Type: Codewriting
- Score: 300

# palindromeRearranging

Given a string, find out if its characters can be rearranged to form a [palindrome](https://en.wikipedia.org/wiki/Palindrome).

**Example**

For `inputString = "aabb"`, the output should be
`palindromeRearranging(inputString) = true`.

We can rearrange `"aabb"` to make `"abba"`, which is a palindrome.

**Input/Output**

- **[execution time limit] 0.5 seconds (cpp)**

- **[input] string inputString**

  A string consisting of lowercase English letters.

  *Guaranteed constraints:*
  `1 ≤ inputString.length ≤ 50`.

- **[output] boolean**

  `true` if the characters of the `inputString` can be rearranged to form a palindrome, `false` otherwise.

**[C++] Syntax Tips**

```
// Prints help message to the console
// Returns a string
std::string helloWorld(std::string name) {
    std::cout << "This prints to the console when you Run Tests" << std::endl;
    return "Hello, " + name;
}
```