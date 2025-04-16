# Polynomial Differentiation and Integration Calculator

This C program allows users to compute the **derivative** or **integral** of a polynomial or composite mathematical expression involving logarithmic, exponential, and trigonometric functions.

---

## Features

- Differentiate polynomial expressions:
  - Simple monomials (`c*x^n`)
  - Power of polynomials
  - Logarithmic functions (`ln`)
  - Exponential functions (`e^x`)
  - Trigonometric functions (`sin`, `cos`, `tan`, `cosec`, `sec`, `cot`)

- Integrate basic polynomial expressions:
  - Calculates indefinite integrals for terms in the form `c*x^n`

---

## Differentiation Types

When you select **Differentiation (Press 1)**, you are prompted to input terms. Each term can be of the following types:

### 1. Simple Monomial
f(x) = c * x^n f'(x) = c * n * x^(n - 1)


### 2. Composite Polynomial (Function with inner polynomial raised to a power)
f(x) = c * (p(x))^n f'(x) = c * n * (p(x))^(n-1) * p'(x)


### 3. Logarithmic Function

#### a) Single Variable Log
f(x) = ln(c * x^n) f'(x) = (n * c * x^(n-1)) / (c * x^n)
#### b) Log with Power Polynomial
f(x) = ln(p(x)) f'(x) = p'(x) / p(x)


### 4. Exponential Function

#### a) Simple Form
f(x) = c * e^(k * x) f'(x) = c * k * e^(k * x)
#### b) Complex Power Polynomial
f(x) = c * e^(p(x)) f'(x) = c * e^(p(x)) * p'(x)


### 5. Trigonometric Functions

| Function       | f(x)                             | f'(x)                                          |
|----------------|----------------------------------|-----------------------------------------------|
| Sine           | c * sin(kx^n)                    | c * k * n * x^(n-1) * cos(kx^n)               |
| Cosine         | c * cos(kx^n)                    | -c * k * n * x^(n-1) * sin(kx^n)              |
| Tangent        | c * tan(kx^n)                    | c * k * n * x^(n-1) * sec²(kx^n)              |
| Cosecant       | c * cosec(kx^n)                  | -c * k * n * x^(n-1) * cosec(kx^n) * cot(kx^n)|
| Secant         | c * sec(kx^n)                    | c * k * n * x^(n-1) * sec(kx^n) * tan(kx^n)   |
| Cotangent      | c * cot(kx^n)                    | -c * k * n * x^(n-1) * cosec²(kx^n)           |

---

## Integration

When you select **Integration (Press 2)**, the program expects basic polynomial terms.

Each term is integrated as:
∫ c * x^n dx = (c / (n + 1)) * x^(n + 1) + C


Note: The program does not handle integration for logs, exponentials, or trigonometric functions.

---

## How to Run

1. Compile the code: gcc -o calc calc.c -lm

2. Run the executable: ./calc


3. Follow the on-screen prompts to choose differentiation or integration.

---

## Notes

- Uses `math.h` for standard math operations.
- Ensure you provide valid inputs for degrees, constants, and expression types.
- This program is built for educational and learning purposes.

---

## Example Output

### Differentiation (Simple)
Press 1 for Differentiation Press 2 for Integration: 1 Enter number of terms: 1 Enter type of term 1: Press 1 for simple value ... Enter degree: 3 Enter constant: 2 Derivative: 6.00x^2


### Integration
Press 1 for Differentiation Press 2 for Integration: 2 Enter number of terms: 2 Enter coefficient: 4, power: 2 Enter coefficient: -2, power: 1 Integrated Equation: 1.33(x)^3 + -1.00(x)^2 + c


---

## License

This project is free to use and modify for learning purposes.
