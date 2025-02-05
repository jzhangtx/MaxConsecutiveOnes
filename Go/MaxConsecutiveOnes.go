package main

import "fmt"

func GetMaxConsecutiveOnes(A []int) int {
	maxCount := 0
	count := 0
	for i := range A {
		if A[i] == 1 {
			count++
		} else {
			maxCount = max(maxCount, count)
			count = 0
		}
	}

	return max(maxCount, count)
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		var count int
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		vec := make([]int, count)
		fmt.Print("Enter the array: ")
		for i := 0; i < count; i++ {
			fmt.Scan(&vec[i])
		}

		fmt.Printf("The max consecutive ones is %d\n", GetMaxConsecutiveOnes(vec))
	}
}
