package main

import (
	"fmt"
	"strings"
)

func main() {
	var str string
	fmt.Scanln(&str)

	ans := ""

	for i := 0; i < len(str); i++ {
		if str[i] > 'Z' {
			ans += string(str[i])
		} else {
			ans += "_" + strings.ToLower(string(str[i]))
		}
	}

	fmt.Println(ans)
}
