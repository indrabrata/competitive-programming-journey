package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	fmt.Scanf("%s", &s)

	col := strings.Split(s, " = ")[1]
	col = strings.Trim(col, "\"")

	fmt.Println(col)
}
