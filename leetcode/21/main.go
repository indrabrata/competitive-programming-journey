package main

import (
	"fmt"
)

func main() {
	c := &ListNode{
		Val: 4,
	}

	b := &ListNode{
		Val:  2,
		Next: c,
	}

	a := &ListNode{
		Val:  1,
		Next: b,
	}

	g := &ListNode{
		Val: 4,
	}

	f := &ListNode{
		Val:  3,
		Next: g,
	}

	e := &ListNode{
		Val:  1,
		Next: f,
	}

	res := mergeTwoLists(a, e)
	for res != nil {
		fmt.Print(res.Val, " ")
		res = res.Next
	}
}

type ListNode struct {
	Val  int
	Next *ListNode
}

// Naive
func mergeTwoLists(list1 *ListNode, list2 *ListNode) *ListNode {
	nums := make([]int, 0)

	for list1 != nil && list2 != nil {
		if list1.Val < list2.Val {
			nums = append(nums, list1.Val)
			list1 = list1.Next
		} else {
			nums = append(nums, list2.Val)
			list2 = list2.Next
		}
	}

	for list1 != nil {
		nums = append(nums, list1.Val)
		list1 = list1.Next
	}

	for list2 != nil {
		nums = append(nums, list2.Val)
		list2 = list2.Next
	}

	var head, temp *ListNode
	for _, e := range nums {
		newNode := &ListNode{Val: e, Next: nil}
		if head == nil {
			head = newNode
			temp = head
		} else {
			temp.Next = newNode
			temp = temp.Next
		}
	}

	return head
}
