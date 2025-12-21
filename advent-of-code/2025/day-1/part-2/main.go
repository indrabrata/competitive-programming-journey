package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

// TODO : need fixed ASAP!

func main() {
	file, err := os.Open("input.txt")
	if err != nil {
		fmt.Printf("error file not exists : %v", err)
		return
	}
	defer file.Close()

	rotations := make([]string, 0)
	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		str := scanner.Text()
		rotations = append(rotations, str)
	}

	counter := int64(0)
	dial := int64(50)
	for _, rotation := range rotations {
		nav := rotation[0]
		val, err := strconv.ParseInt(rotation[1:], 10, 64)
		if err != nil {
			fmt.Printf("invalid number format : %v", err)
			return
		}

		rotate := val / 100
		remain := val % 100

		switch nav {
		case 'L':
			if dial-val < 0 {
				if dial-remain < 0 {
					counter += rotate + 1
					// fmt.Println("cross zero from ", (dial), " - ", val, "  ", (rotate + 1), " times ")
				} else {
					counter += rotate
					// fmt.Println("cross zero from ", (dial), " - ", val, "  ", (rotate), " times ")
				}
			}
			dial -= val
		case 'R':
			if dial+val > 100 {
				if dial+remain > 100 {
					counter += rotate + 1
					// fmt.Println("cross zero from ", (dial), " + ", val, "  ", (rotate + 1), " times ")
				} else {
					counter += rotate
					// fmt.Println("cross zero from ", (dial), " + ", val, "  ", (rotate), " times ")
				}
			}
			dial += val
		default:
			fmt.Printf("invalid nav : %c", nav)
		}

		if dial < 0 {
			dial = ((dial % 100) + 100) % 100
		} else if dial > 99 {
			dial = (dial % 100) % 100
		}

		// fmt.Println("dial : ", dial)

		if dial == 0 {
			counter++
		}
	}

	fmt.Println("password : ", counter)
}
