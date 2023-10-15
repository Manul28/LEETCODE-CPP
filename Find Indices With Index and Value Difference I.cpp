class Solution {
    public int[] findIndices(int[] nums, int indexDifference, int valueDifference) {
        int [] answer=new int[2];
        answer[0]=-1;
        answer[1]=-1;
        for(int i=0;i<nums.length-indexDifference;i++){
            for(int j=i+indexDifference;j<nums.length;j++){
                if(Math.abs(nums[i]-nums[j])>=valueDifference){
                    answer[0]=i;
                    answer[1]=j;
                    return answer;
                }
            }
        }
        return answer;
    }
}
