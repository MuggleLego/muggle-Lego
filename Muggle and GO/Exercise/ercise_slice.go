//date:2020.10.21
package main

import "golang.org/x/tour/pic"

func Pic(dx, dy int) [][]uint8 {
	ret:=make([][]uint8,dy)
	for i,_ := range ret{
		ret[i]=make([]uint8,dx)
	}
	for i:=0;i<dy;i++ {
		for j:=0;j<dx;j++{
			ret[i][j]=uint8(i+j)
		}
	}
	return ret
}

func main() {
	pic.Show(Pic)
}
