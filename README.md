# Practice Problems: Arrays (C)

A collection of classic array problems solved in plain C. Each file is a small,
self-contained program with a `main` function, so you can compile and run any
of them on its own.

## Problems

| File | Problem | Approach | Time |
|------|---------|----------|------|
| `array_reverse.c` | Reverse an array in place | Swap from both ends | O(n) |
| `array_sort_ascending.c` | Sort in ascending order | Exchange sort | O(n²) |
| `peak_element.c` | Find an element not smaller than its neighbours | Linear scan with edge handling | O(n) |
| `move_negatives_to_front.c` | Negatives first, rest after (stable) | Two passes into a temp array | O(n) |
| `count_occurrences.c` | Count occurrences of a value | Linear scan | O(n) |
| `min_max_element.c` | Minimum and maximum | Single pass | O(n) |
| `subarray_with_given_sum.c` | Contiguous subarray with a target sum | Sliding window (non-negative values) | O(n) |
| `count_pairs_with_sum.c` | Count pairs adding up to a target | Nested loops | O(n²) |
| `find_missing_number.c` | Missing value in `1..N` | Sum formula | O(n) |
| `kth_smallest_element.c` | k-th smallest element | Sort, then index | O(n²) |
| `rotate_array.c` | Rotate right by one | Shift and wrap the last element | O(n) |
| `sort_0s_1s_2s.c` | Sort an array of 0s, 1s and 2s | Counting | O(n) |
| `union_and_intersection.c` | Union and intersection of two sorted arrays | Two pointers | O(n + m) |

## Build and run

You need a C compiler such as `gcc` or `clang`.

Run a single program:

```bash
gcc -Wall -Wextra -std=c11 peak_element.c -o peak_element
./peak_element
```

Or use the Makefile to build everything:

```bash
make          # build all programs into ./build
make run      # build and run every program (the interactive ones read from stdin)
make clean    # remove ./build
```

`count_occurrences.c` and `kth_smallest_element.c` ask for input, so run them
directly if you want to try your own values.

## Author

Alvi Sarwar, CSE student at the University of Asia Pacific.
