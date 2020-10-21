//date:2020.10.21

package main

import (
	"golang.org/x/tour/wc"
	"strings"
)

func WordCount(s string) map[string]int {
	word := strings.Fields(s)
	m := make(map[string]int)
	for _,value := range word{
		v,_ := m[value]
		m[value]=v+1
	}
	return m
}
