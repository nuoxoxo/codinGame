package main

import "fmt"
import "os"
import "bufio"

import "strings"

/**
 * Don't let the machines win. You are humanity's last hope...
 **/

func    checker(g [] string, h int, w int, height int, width int) {
    P := [] int {w, h}
    R := [] int {-1, -1}
    D := [] int {-1, -1}
    for i := w + 1; i < width; i++ {
        if g[h][i] == '0' {
            R = [] int {i, h}
            break
        }
    }
    for i := h + 1; i < height; i++ {
        if g[i][w] == '0' {
            D = [] int {w, i}
            break
        }
    }
    res := [] int {}
    res = append(P, R...)
    res = append(res, D...)
    fmt.Println(strings.Trim(strings.Replace(fmt.Sprint(res), " ", " ", -1), "[]"))

}

func main() {
    scanner := bufio.NewScanner(os.Stdin)
    scanner.Buffer(make([]byte, 1000000), 1000000)

    // width: the number of cells on the X axis
    var width int
    scanner.Scan()
    fmt.Sscan(scanner.Text(),&width)
    
    // height: the number of cells on the Y axis
    var height int
    scanner.Scan()
    fmt.Sscan(scanner.Text(),&height)

    G := [] string {}
    
    for i := 0; i < height; i++ {
        scanner.Scan()
        line := scanner.Text()
        _ = line // to avoid unused error // width characters, each either 0 or .
        G = append(G, line)
    }
    for i := 0; i < height; i++ {
        for j := 0; j < width; j++ {
            if G[i][j] == '0' {
                checker(G, i, j, height, width)
            }
        }
    }
    
    // fmt.Fprintln(os.Stderr, "Debug messages...")
    
    // Three coordinates: a node, its right neighbor, its bottom neighbor
    // fmt.Println("0 0 1 0 0 1")
}
