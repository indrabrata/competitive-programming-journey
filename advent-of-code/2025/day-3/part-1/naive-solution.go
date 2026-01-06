package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
)

func main() {
	file, err := os.Open("input.txt")
	if err != nil {
		log.Fatalf("failed to open file %v", err)
		return
	}
	defer file.Close()

	scanner := bufio.NewScanner(file)
	total := uint64(0)

	for scanner.Scan() {
		temp := uint64(0)
		text := scanner.Text()
		for i := 0; i < len(text); i++ {
			for j := i + 1; j < len(text); j++ {
				num, err := strconv.ParseUint(fmt.Sprintf("%c%c", text[i], text[j]), 10, 64)
				if err != nil {
					log.Fatalf("failed parse number into uint64 : %v", err)
					return
				}

				if num > temp {
					temp = num
				}
			}
		}

		total += temp
	}

	fmt.Printf("total : %d", total)
}
