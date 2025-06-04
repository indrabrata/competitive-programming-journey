package main

import "fmt"

func main() {
	var a int
	fmt.Scanln(&a)

	mapA := make(map[int64]int64)
	for i := 0; i < a; i++ {
		var b int64
		fmt.Scan(&b)
		mapA[b]++
	}

	fmt.Println(len(mapA))
}
