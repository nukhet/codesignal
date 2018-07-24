- Difficulty: Easy
- Type: Codewriting
- Score: 300

# addBorder
- Given a rectangular matrix of characters, add a border of asterisks(`*`) to it.

  **Example**

  For

  ```
  picture = ["abc",
             "ded"]
  ```

  the output should be

  ```
  addBorder(picture) = ["*****",
                        "*abc*",
                        "*ded*",
                        "*****"]
  ```

  **Input/Output**

  - **[execution time limit] 0.5 seconds (cpp)**

  - **[input] array.string picture**

    A non-empty array of non-empty equal-length strings.

    *Guaranteed constraints:*
    `1 ≤ picture.length ≤ 100`,
    `1 ≤ picture[i].length ≤ 100`.

  - **[output] array.string**

    The same matrix of characters, framed with a border of asterisks of width `1`.

  **[C++] Syntax Tips**

  ```
  // Prints help message to the console
  // Returns a string
  std::string helloWorld(std::string name) {
      std::cout << "This prints to the console when you Run Tests" << std::endl;
      return "Hello, " + name;
  }
  ```

   
