package main

import "fmt"

func main() {
	var n int64
	fmt.Scanln(&n)

	if n%2 == 0 && (n/2)%2 == 0 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
