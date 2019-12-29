//Date:2019.12.26
//function:Given an array nums of integers, return how many of them contain an even number of digits.

int findNumbers(int* nums, int numsSize){
        int res=0;
        for(int i=0;i<numsSize;i++){
                int tmp=0;
                while(nums[i]){
                        tmp++;
                        nums[i]/=10;
                }
                if(!(tmp&1))
                        res++;
        }
        return res;
}
