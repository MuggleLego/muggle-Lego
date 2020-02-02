func twoSum(nums []int, target int) []int {
    v := make(map[int]int)
	for i , j := range nums {
		dif := target - j
		m, ok := v[dif]
		if ok != false { //the difference in the map
			return []int{m, i} 
		}
		v[j] = i
	}
	return []int{-1,-1}
}
