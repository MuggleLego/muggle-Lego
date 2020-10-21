//date:2020.10.21
//exercuise-fibonacci-closure

package main

import "fmt"

//closure
func fibonacci() func() int {
	fir := 0
	sec := 1
	return func() int {
		tmp := fir
		fir = sec
		sec = fir + tmp
		return fir
	}
}

func main() {
	f := fibonacci()
	for i := 0; i < 10; i++ {
		fmt.Println(f())
	}
}
