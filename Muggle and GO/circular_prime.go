//Date:2020.2.6
//function:find the number of circular prime below one million

package main

import(
	"fmt"
	"math"
)

//return a table of prime below one million
func prime() []int {
	prime := make([]int,1000001)
	for i:=2;i<1000001;i++ {
		prime[i]=1
	}
	for j:=2;j<1000001;j++ {
		if prime[j]==1 {
			for k:=2;k*j<1000001;k++ {
				prime[k*j]=0
			}
		}
	}
	return prime
}

func rotation(a int,prime []int) int {
	c:=a
	count:=0
	for c>0 {
		c/=10
		count++
	}
	digit:=count-1
	for count>1 {
		tmp:=a%10
		a/=10
		a+=tmp*int(math.Pow(10,float64(digit))) //permutation
		if prime[a]==0 {
			return 0 //not a circular prime
		}
		count--
	}
	return 1
}

func test() int{
	prime:=prime()
	count:=0
	for i:=2;i<1000001;i++ {
		if prime[i]==1 { //i is prime
			if rotation(i,prime)==1 { //permutation of i are primes
				count++
			}
		}
	}
	return count
}

func main(){
	tmp:=test()
	fmt.Println(tmp)
}
