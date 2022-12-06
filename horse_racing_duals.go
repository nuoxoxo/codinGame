package main

import "fmt"

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

func main() {
	var N int

	var arr []int
	diff := 2147483647

	fmt.Scan(&N)

	for i := 0; i < N; i++ {
		var pi int
		fmt.Scan(&pi)
		arr = append(arr, pi)
	}
	if N == 1 {
		fmt.Println(arr[0])
	} else {
		sort.Ints(arr)
		for i := 0; i < N - 1; i++ {
			temp := arr[i] - arr[i + 1]
			if temp < 0 {
				temp = -temp
			}
			if diff > temp {
				diff = temp
			}
		}
		fmt.Println(diff)
	}

	// fmt.Fprintln(os.Stderr, "Debug messages...")
	/// fmt.Println("answer")// Write answer to stdout
}
