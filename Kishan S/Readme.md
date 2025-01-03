#Kishan Sonagara's CPP Notes

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

