/**
 * Don't let the machines win. You are humanity's last hope...
 **/

 const width = parseInt(readline()); // the number of cells on the X axis
 const height = parseInt(readline()); // the number of cells on the Y axis
 
 G = []
 
 for (let i = 0; i < height; i++) {
     const line = readline(); // width characters, each either 0 or .
     G.push(line)
 }
 
 function checker(G, h, w, H, W) {
     P = [w, h]
     R = D = [-1, -1]
     k = w
     while (++k < W) {
         if (G[h][k] == '0') {
             R = [k, h]
             break
         }
     }
     k = h
     while (++k < H) {
         if (G[k][w] == '0') {
             D = [w, k]
             break
         }
     }
     k = -1
     console.log(P.concat(R, D).join(' '))
 }
 
 i = -1
 while (++i < height) {
     let j = -1
     while (++j < width) {
         if (G[i][j] == '0') {
             checker(G, i, j, height, width)
         }
     }
 }
 
 // Write an action using console.log()
 // To debug: console.error('Debug messages...');
 
 
 // Three coordinates: a node, its right neighbor, its bottom neighbor
 // console.log('0 0 1 0 0 1');
 
