package main

import "fmt"

func main() {
	var n int
	fmt.Scanln(&n)
	mapWays := make(map[int]int)

	mapWays[1] = 1
	mapWays[2] = 2
	mapWays[3] = 4
	mapWays[4] = 8
	mapWays[5] = 16
	mapWays[6] = 32

	for i := 7; i <= n; i++ {
		mapWays[i] = (mapWays[i-1] + mapWays[i-2] + mapWays[i-3] + mapWays[i-4] + mapWays[i-5] + mapWays[i-6]) % 1000000007
	}

	fmt.Println(mapWays[n])
}
