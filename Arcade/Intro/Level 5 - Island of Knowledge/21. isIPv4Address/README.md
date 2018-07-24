- Difficulty: Medium
- Type: Codewriting
- Score: 300

# isIPv4Address

An IP address is a numerical label assigned to each device (e.g., computer, printer) participating in a computer network that uses the Internet Protocol for communication. There are two versions of the Internet protocol, and thus two versions of addresses. One of them is the *IPv4 address*.

*IPv4 addresses* are represented in dot-decimal notation, which consists of four decimal numbers, each ranging from `0` to `255`inclusive, separated by dots, e.g., `172.16.254.1`.

Given a string, find out if it satisfies the *IPv4 address* naming rules.

**Example**

- For `inputString = "172.16.254.1"`, the output should be
  `isIPv4Address(inputString) = true`;

- For `inputString = "172.316.254.1"`, the output should be
  `isIPv4Address(inputString) = false`.

  `316` is not in range `[0, 255]`.

- For `inputString = ".254.255.0"`, the output should be
  `isIPv4Address(inputString) = false`.

  There is no first number.

**Input/Output**

- **[execution time limit] 0.5 seconds (cpp)**

- **[input] string inputString**

  A string consisting of digits, full stops and lowercase English letters.

  *Guaranteed constraints:*
  `1 ≤ inputString.length ≤ 30`.

- **[output] boolean**

  `true` if `inputString` satisfies the IPv4 address naming rules, `false` otherwise.

**[C++] Syntax Tips**

```
// Prints help message to the console
// Returns a string
std::string helloWorld(std::string name) {
    std::cout << "This prints to the console when you Run Tests" << std::endl;
    return "Hello, " + name;
}
```