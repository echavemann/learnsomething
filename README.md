# Part 1: Writing Novel Code, Introduction to PyBind

## Scenario

Thanks to your diligent work, on the last step, you have not been fired immediately. The company transfers you to train
under a QR, who immediately sets you to work on building a pricing utility using C++ that he can directly import using
Python. The Python script and pricing formula will be provided to help you with development.

Pricing formula is as follows:
Theoretical Value = (Previous Price * (0.9 + Interest Rate)) * Oleo Constant.You should take all 3 variables as input
floats into your function.

## Instructions

- [ ] Read the given code, and attempt to understand it.
- [ ] You will need to write your own `CMakeLists.txt`, though a `Taskfile.yml` has been provided so you can use the
  same commands that you did in Step 0. Research and create this.
- [ ] Implement the pricing file - `PricingUtil.cpp` and `PricingUtil.h`.
- [ ] Ensure that running the pre-baked tests results in all tests passed.
- [ ] Modify your `CMakeLists.txt` to emit a Pybind module.
- [ ] Ensure the provided Python file can import your module without any issues.

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