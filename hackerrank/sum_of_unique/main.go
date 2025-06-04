package main

import "fmt"

func main() {
	var n int
	fmt.Scanln(&n)

	_ = make([]int64, 100000)
	for i := 0; i < n; i++ {
		var x int
		fmt.Scanln(&x)

	}
}
