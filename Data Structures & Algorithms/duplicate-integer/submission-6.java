class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> st = new HashSet<>();
        for(int it : nums){
            st.add(it);
        }
        return st.size() < nums.length;
    }
}