package main

import "fmt"

func main() {
	// Example usage of addTwoNumbers
	l1 := &ListNode{Val: 2, Next: &ListNode{Val: 4, Next: &ListNode{Val: 3}}}
	l2 := &ListNode{Val: 5, Next: &ListNode{Val: 6, Next: &ListNode{Val: 4}}}
	result := addTwoNumbers(l1, l2)

	// Print the result
	for result != nil {
		fmt.Println(result.Val)
		result = result.Next
	}
}

type ListNode struct {
	Val  int
	Next *ListNode
}

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	var head *ListNode
	var current *ListNode
	counter := 0

	for l1 != nil || l2 != nil {
		var val int

		if l1 == nil {
			val = l2.Val + counter
		} else if l2 == nil {
			val = l1.Val + counter
		} else {
			val = l1.Val + l2.Val + counter
		}

		counter = 0

		if head == nil {
			head = &ListNode{Val: val % 10}
			current = head
			counter = val / 10
		} else {
			current.Next = &ListNode{Val: val % 10}
			current = current.Next
			counter += val / 10
		}

		if l1 != nil {
			l1 = l1.Next
		}

		if l2 != nil {
			l2 = l2.Next
		}
	}

	if counter > 0 {
		current.Next = &ListNode{Val: counter}
	}

	return head
}
