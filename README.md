
# Prime Number Checker

This program checks whether a given integer is a prime number. A prime number is defined as a number greater than 1 that has no divisors other than 1 and itself.

## Features

- Prompts the user to enter a number.
- Checks if the number is prime or not.
- Handles edge cases for numbers less than 2.

## Getting Started

### Prerequisites

To compile and run this code, you need a C++ compiler installed, such as:

- g++
- clang++

### Downloading the Code

You can download the code using one of the following methods:

#### Method 1: Clone the Repository

If you have Git installed, you can clone the repository using the following command:

```bash
git clone https://github.com/yourusername/prime-number-checker.git
cd prime-number-checker
```

#### Method 2: Download as ZIP

1. Go to the repository on GitHub.
2. Click the green "Code" button.
3. Select "Download ZIP."
4. Extract the ZIP file to your desired location.

### Compiling and Running the Code

1. Open a terminal or command prompt.
2. Navigate to the directory where the code is located.
3. Compile the code using:

   ```bash
   g++ -o prime_checker prime_checker.cpp
   ```

4. Run the executable:

   ```bash
   ./prime_checker
   ```

### Usage

1. When prompted, enter an integer.
2. The program will output whether the number is "prime" or "not prime."

## Example

```plaintext
Enter the number: 5
prime
```

## Code Structure

- **main()**: The entry point of the program, which handles user input and checks for prime status.
- **Loop**: Iterates through possible divisors and counts how many times the number is divisible.

## License

GNU General Public License v3.0
