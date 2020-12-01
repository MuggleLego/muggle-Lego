func twoSum(nums []int, target int) []int {
    v := make(map[int]int)
	for i , j := range nums
		m, ok := v[target-j]
		if ok  { //the difference in the map
			return []int{m, i} 
		}
		v[j] = i
	}
	return []int{-1,-1}
}
