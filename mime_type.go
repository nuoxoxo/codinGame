package main

import "fmt"
import "os"
import "bufio"
import "strings" // added

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Buffer(make([]byte, 1000000), 1000000)

	// N: Number of elements which make up the association table.
	var N int
	scanner.Scan()
	fmt.Sscan(scanner.Text(),&N)

	// Q: Number Q of file names to be analyzed.
	var Q int
	scanner.Scan()
	fmt.Sscan(scanner.Text(),&Q)

	/// using map in Go
	mp := make(map [string] string)

	for i := 0; i < N; i++ {
		// EXT: file extension
		// MT: MIME type.
		var EXT, MT string
		scanner.Scan()
		fmt.Sscan(scanner.Text(),&EXT, &MT)

		ext := strings.ToLower(EXT)
		mp[ext] = MT
	}

	for i := 0; i < Q; i++ {
		scanner.Scan()
		FNAME := scanner.Text()
		_ = FNAME // to avoid unused error // One file name per line.

		res := "UNKNOWN"
		fname := FNAME
		j := len(fname) - 1
		for j > -1 {
			if fname[j] == '.' {
				break
			}
			j--
		}

		if j != -1 {
			fname = strings.ToLower(fname[j + 1:])
			if mime, ok := mp[fname]; ok {
				res = mime
			}
		}
		fmt.Println(res)
	}

	// fmt.Fprintln(os.Stderr, "Debug messages...")

	// For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
	/// fmt.Println("UNKNOWN")
}

