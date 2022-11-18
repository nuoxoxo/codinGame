package main

import "fmt"
import "os"
import "bufio"

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

func main() {
    scanner := bufio.NewScanner(os.Stdin)
    scanner.Buffer(make([]byte, 1000000), 1000000)

    var L int
    scanner.Scan()
    fmt.Sscan(scanner.Text(),&L)
    
    var H int
    scanner.Scan()
    fmt.Sscan(scanner.Text(),&H)
    
    scanner.Scan()
    T := scanner.Text()
    _ = T // to avoid unused error

    var arr [] string

    for i := 0; i < H; i++ {
        scanner.Scan()
        ROW := scanner.Text()
        _ = ROW // to avoid unused error
        arr = append(arr, ROW)
    }
    // fmt.Print(arr)

    //  Main solve

    A, a := int('A'), int('a')
    Z, z := int('Z'), int('z')
    i := 0
    for i < H {
        for _, c := range T {
            oc := int(c)
            pos := 26
            if a <= oc && oc <= z {
                pos = oc - a
            } else if A <= oc && oc <= Z {
                pos = oc - A
            }
            offset := 0
            for offset < L {
                fmt.Print(string(arr[i][L * pos + offset]))
                offset++
            }
        }
        fmt.Println()
        i++
    }
    
    // fmt.Fprintln(os.Stderr, "Debug messages...")
    // fmt.Println("answer")// Write answer to stdout
}
