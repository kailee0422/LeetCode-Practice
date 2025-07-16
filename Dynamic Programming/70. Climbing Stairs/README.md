# Solution

To solve the problem of climbing `n` stairs, I observe that there are only two possible ways to reach the `n`-th stair:

1. From the `(n - 1)`-th stair by taking `1` step.
2. From the `(n - 2)`-th stair by taking `2` steps.

Therefore, the total number of ways to reach the `n`-th stair is the sum of the ways to reach the `(n - 1)`-th stair and the `(n - 2)`-th stair.

This leads to the following recurrence relation:

- T(n) = T(n - 1) + T(n - 2), for n ≥ 2
- Base cases: T(0) = 1, T(1) = 1

This recurrence is the same as the Fibonacci sequence.
