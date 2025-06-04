package main

import "fmt"

func main() {
	var n int
	fmt.Scanf("%d", &n)

	for n != 1 {
		fmt.Println(n)
		if n%2 == 0 {
			n /= 2
		} else {
			n *= 3
			n += 1
		}
	}

	fmt.Println(n)
}
