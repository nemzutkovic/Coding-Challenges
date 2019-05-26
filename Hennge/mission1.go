// RESOURCES USED
// - https://gobyexample.com/
// - https://tour.golang.org
// - https://stackoverflow.com/questions/3751429/reading-an-integer-from-standard-input

package main

import "fmt"

func main() {
	cases, nums, i, total := 0, 0, 0, 0
	fmt.Scan(&cases)
	numOfInts(&cases, &nums, &i, &total)
}

func numOfInts(cases, nums, i, total *int){
	if *cases <= 0 {
		return
	}
	fmt.Scan(&*nums) // Tricky syntax
	if *nums > 0 {
		doWork(nums, i, total)
	} else if *nums == 0 {
		fmt.Println(0)	
	}
	*cases -= 1
	numOfInts(cases, nums, i, total)
}

func doWork(nums, i, total *int){
	if *nums != 0{
		fmt.Scan(&*i) //Tricky syntax
		if *i > 0{
			*total = *total + (*i) * (*i)
		}
	} else {
		fmt.Println(*total)
		*total = 0
		return
	}
	*nums -= 1
	doWork(nums, i, total)
}