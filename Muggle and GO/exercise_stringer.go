//Date:2020.10.21
package main

import "fmt"

type IPAddr [4]byte

func (h IPAddr) String() string {
	return fmt.Sprintf("%v.%v.%v.%v", h[0], h[1], h[2], h[3])
}
func main() {
	hosts := map[string]IPAddr{
		"loopback":  {127, 0, 0, 1},
		"googleDNS": {8, 8, 8, 9},
	}
	for name, ip := range hosts {
		fmt.Printf("%v: %v\n", name, ip)
	}
}
