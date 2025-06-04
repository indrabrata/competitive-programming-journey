package main

import (
	"fmt"
	"math"
)

func main() {
	var n int
	fmt.Scanln(&n)

	memo := make([]int64, math.MaxInt)

	for i := 0; i < n; i++ {
		var x int
		fmt.Scanln(&x)

		if x == 0 {
			fmt.Println(1)
		} else {
			fmt.Println(factorial(x, memo))
		}
	}
}

func factorial(n int, memo []int64) int64 {
	if n == 0 {
		return 1
	}

	if memo[n] != 0 {
		return memo[n]
	}

	memo[n] = int64(n) * factorial(n-1, memo)
	return memo[n]
}
