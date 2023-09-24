# Part 1: Writing Novel Code, Introduction to PyBind

## Scenario

Thanks to your diligent work, on the last step, you have not been fired immediately. The company transfers you to train
under a QR, who immediately sets you to work on building a pricing utility using C++ that he can directly import using
Python. The Python script and pricing formula will be provided to help you with development.

Pricing formula is as follows:
Theoretical Value = (Previous Price * (0.9 + Interest Rate)) * Oleo Constant.You should take all 3 variables as input
floats into your function.

Note: You will need Python Development Headers installed!

## Instructions

- [ ] Read the given code, and attempt to understand it. Ensure Poetry is installed. 
- [ ] Write unit tests FIRST!
- [ ] You are given a working CMakeLists and Taskfile - you need to make the unit tests work and ensure the Python module is emitted correctly.
- [ ] Be sure to account for various edge cases - to name a few, zero interest, negative previous price, etc!
- [ ] Ensure the provided Python file can import your module without any issues. This will require you to move the generated *.iso.

## Questions

Please include the following when you are writing your PR:   
General things:

1. What is the purpose of this PR?
2. What changes did you make? Why?
3. What bugs did you find while testing?

This PR Specific:

1. What challenges did you face while writing the module from scratch?
2. How did you ensure your unit tests are comprehensive?
3. Did you have enough guidance to complete the task?
