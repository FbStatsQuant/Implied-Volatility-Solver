# Implied Volatility Solver – C++

This project implements a **C++ command-line utility** for computing the **implied volatility** of European call and put options using the **Black-Scholes model**. It uses a robust **bisection method** to numerically invert the pricing equation and recover volatility from observed market prices.

---

## 📌 Features

- Supports **call** and **put** options
- Uses closed-form Black-Scholes formula
- Bisection method for robust numerical root-finding
- Tolerance and iteration limit configurable
- Graceful failure on convergence issues
- Simple terminal interface (CLI)

---

## 🧮 Method

Given:
- Market price
- Spot price (S)
- Strike price (K)
- Risk-free rate (r)
- Time to maturity (T)

It finds $\sigma$ such that:

$\text{BSPrice}(S, K, r, T, \sigma) = \text{MarketPrice}$

---

## 📁 Files

| File                 | Description                          |
|----------------------|--------------------------------------|
| `main.cpp`           | Terminal interface                   |
| `BlackScholes.h/cpp` | Closed-form pricing implementation   |
| `ImpliedVolatility.h/cpp` | Bisection solver logic          |
| `iv_solver.exe`      | Optional precompiled Windows binary  |

---

## 🧪 Example Usage

```bash
$ ./iv_solver

Enter option type (call/put): call
Spot price (S): 100
Strike price (K): 100
Risk-free rate (r): 0.05
Time to maturity (T in years): 1
Market option price: 10.45
