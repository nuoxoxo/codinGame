package main
  
import (
    "fmt"
    "strings"
)

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

func main() {
    // W: width of the building.
    // H: height of the building.
    var W, H int
    fmt.Scan(&W, &H)
    
    // N: maximum number of turns before game over.
    var N int
    fmt.Scan(&N)
    
    var X, Y int
    fmt.Scan(& X, & Y)
    
    var L, R, U, D int
    L = 0
    U = 0
    R = W - 1
    D = H - 1

    for {
        // bombDir: the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        var bombDir string
        fmt.Scan(&bombDir)
        
        if strings.Contains(bombDir, "L") {
            R = X - 1
        } else if strings.Contains(bombDir, "R") {
            L = X + 1
        }
        if strings.Contains(bombDir, "D") {
            U = Y + 1
        } else if strings.Contains(bombDir, "U") {
            D = Y - 1
        }
        X = (R - L) / 2 + L
        Y = (D - U) / 2 + U
        // X = math.Floor(float64(R) - float64(L)) / 2 + L
        // Y = math.Floor(float64(D) - float64(U)) / 2 + U
        fmt.Println(X, Y)
        
        // fmt.Fprintln(os.Stderr, "Debug messages...")
        
        // the location of the next window Batman should jump to.
        // fmt.Println("0 0")
    }
}
