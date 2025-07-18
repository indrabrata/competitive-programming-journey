package main

import "fmt"

func main() {
	var n int
	fmt.Scanln(&n)
	ans := 0
	for i := 0; i < n; i++ {
		var x string
		fmt.Scanln(&x)
		if x[:2] == "++" || x[1:] == "++" {
			ans++
		} else {
			ans--
		}
	}

	fmt.Println(ans)
}
