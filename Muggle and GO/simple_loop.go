package main

import "fmt"

func main(){
        test1()
        test2()
}

//one loop and string concatenation
func test1(){
        var str string
        var tmp string
        for i:=0;i<5;i++ {
                tmp+="A"
                str+=tmp+"\n"
        }
        fmt.Println(str)
}

//two loops
func test2(){
        for i:=0;i<5;i++ {
                for j:=0;j<=i;j++ {
                        fmt.Printf("C")
                }
                fmt.Println()
        }
}
