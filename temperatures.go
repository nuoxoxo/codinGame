package main

import "fmt"
import "os"
import "bufio"
import "strings"
import "strconv"

import "math"

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Buffer(make([]byte, 1000000), 1000000)

	var inputs [] string

	// n: the number of temperatures to analyse
	var n int
	scanner.Scan()
	fmt.Sscan(scanner.Text(),&n)

	scanner.Scan()
	inputs = strings.Split(scanner.Text()," ")

	flag := 0
	mx := int64(math.MaxUint >> 1)
	if n == 0 {
		mx = 0
	}

	for i := 0; i < n; i++ {
		// t: a temperature expressed as an integer ranging from -273 to 5526
		// t,_ := strconv.ParseInt(inputs[i],10,32)
		t,_ := strconv.ParseFloat(inputs[i],64)
		_ = t
		if math.Abs(t) <= math.Abs(float64(mx)) {
			if math.Abs(t) == math.Abs(float64(mx)) && t < 0 && mx > 0 {
				flag = 1
			}
			mx = int64(t)
		}
	}

	// fmt.Fprintln(os.Stderr, "Debug messages...")
	if flag == 1 {
		fmt.Println(math.Abs(float64(mx)))
	} else {
		fmt.Println(mx)
	}
	// Write answer to stdout
}
