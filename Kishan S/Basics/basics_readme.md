## Basics

### Input/Output in C++

To take input and output in C++, we need to first include the `iostream` header. Then, you can use cin and cout.

    ```cpp
    #include <iostream>

    int main() {
        std::cout << "Enter your name: ";
        std::string name;
        std::cin >> name;
        std::cout << "Hello, " << name << "!" << std::endl;
        return 0;
    }
    ```

We can use namespaces to avoid using the `std::` prefix every time we need to use a built-in function.

    ```cpp
    #include <iostream>

    namespace my_namespace {
        int add(int a, int b) {
            return a + b;
        }
    }

    int main() {
        int result = my_namespace::add(2, 3);
        std::cout << "2 + 3 = " << result << std::endl;
        return 0;
    }
    ```

### endl

endl is used to add a new line to the output.

    ```cpp
    std::cout << "Hello, " << name << "!" << std::endl;
    ```

### include <bits/stdc++.h> in your code directory before using any other headers.

## Data Types

### Integer Types

- `int`: 32-bit signed integer
- `unsigned int`: 32-bit unsigned integer
- `long int`: 64-bit signed integer
- `unsigned long int`: 64-bit unsigned integer
- `long long int`: 64-bit signed integer
- `unsigned long long int`: 64-bit unsigned integer

### Floating-Point Types

- `float`: 32-bit single-precision floating-point number
- `double`: 64-bit double-precision floating-point number
- `bool`: boolean value (true or false)

### Character Types

- `char`: 8-bit character
- `wchar_t`: 16-bit wide character
- `char16_t`: 16-bit UTF-16 character
- `char32_t`: 32-bit UTF-32 character

### Pointer Types

- `int*`: pointer to an integer
- `double*`: pointer to a double-precision floating-point number
- `char*`: pointer to a character
- `void*`: pointer to a void type

### Array Types

- `int arr[10]`: array of 10 integers
- `double arr[5]`: array of 5 double-precision floating-point numbers
- `char arr[20]`: array of 20 characters
- `void arr[10]`: array of 10 void pointers

### String Types

- `std::string`: string of characters
- `std::wstring`: wide string of characters
- `std::u16string`: UTF-16 string of characters
- `std::u32string`: UTF-32 string of characters
- `std::string_view`: string view of characters
- `std::wstring_view`: wide string view of characters
- `std::u16string_view`: UTF-16 string view of characters
- `std::u32string_view`: UTF-32 string view of characters

### User-Defined Types

- Define a new data type using `struct` or `class`.
- `struct` is used for simple data structures, while `class` is used for more complex data structures.
- `class` is used for more complex data structures.
- `struct` is used for simple data structures.
- `class` is used for more complex data structures.

### Enum Types

- Define an enum type using `enum` keyword.
- Enum type is a user-defined type that represents a set of named constants.

### Function Types

- Define a function type using `typedef` keyword.
- Function type is a user-defined type that represents a function signature.

### Variable-Length Arrays (VLAs)

- Variable-length arrays (VLAs) are arrays that can have a size determined at runtime.
- VLAs are used when the size of an array is unknown at compile time.
- VLAs are declared using the `[]` syntax.

    ```cpp
    int main() {
        int size = 5;
        int arr[size]; // Variable-length array
        return 0;
    }
    ```

### Constant Expressions

- Constant expressions are expressions that can be evaluated at compile time.
- Constant expressions are used to determine the size of an array at compile time.

    ```cpp
    int main() {
        const int size = 5;
        int arr[size]; // Variable-length array
        return 0;
    }
    ```

## Operators

### Arithmetic Operators

- `+`: addition
- `-`: subtraction
- `*`: multiplication
- `/`: division
- `%`: modulus (remainder)
- `+=`: addition assignment
- `-=`: subtraction assignment
- `*=`: multiplication assignment
- `/=`: division assignment
- `%=`: modulus assignment

### Relational Operators

- `==`: equal to
- `!=`: not equal to
- `<`: less than
- `>`: greater than
- `<=`: less than or equal to
- `>=`: greater than or equal to

### Logical Operators

- `&&`: logical AND
- `||`: logical OR
- `!`: logical NOT

### Bitwise Operators

- `&`: bitwise AND
- `|`: bitwise OR
- `^`: bitwise XOR
- `~`: bitwise NOT
- `<<`: left shift
- `>>`: right shift

### Assignment Operators

- `=`: assignment
- `+=`: addition assignment
- `-=`: subtraction assignment
- `*=`: multiplication assignment
- `/=`: division assignment
- `%=`: modulus assignment
- `&=`: bitwise AND assignment
- `|=`: bitwise OR assignment
- `^=`: bitwise XOR assignment
- `<<=`: left shift assignment
- `>>=`: right shift assignment

### Conditional Operator

- `?:`: conditional operator
- `condition ? true_expression : false_expression`

### Type Casting

- `static_cast`: explicit type casting
- `dynamic_cast`: dynamic type casting
- `const_cast`: const type casting
- `reinterpret_cast`: reinterpret type casting
- `const_expr`: constant expression

### Other Operators

- `,`: comma operator
- `->`: member access operator
- `.`: member selection operator
- `sizeof`: size of operator
- `++`: increment operator
- `--`: decrement operator
- `?`: ternary operator
- `:`: colon operator
- `...`: ellipsis operator
- `&`: address-of operator
- `*`: dereference operator
- `~`: bitwise NOT operator
- `!`: logical NOT operator
- `-`: unary minus operator
- `+`: unary plus operator

## Control Structures

### If-Else Statements

- `if`: conditional statement
- `else if`: conditional statement
- `else`: conditional statement

### Switch Statements

- `switch`: switch statement
- `case`: case statement
- `default`: default statement
- `break`: break statement
- `continue`: continue statement

### Loops

- `for`: for loop
- `for_each`: for-each loop
- `while`: while loop
- `do-while`: do-while loop
- `break`: break statement
- `continue`: continue statement

## Functions

### Function Declarations

- Define a function using `void` return type and function name.
- Define a function using `int` return type and function name.
- Define a function using `double` return type and function name.