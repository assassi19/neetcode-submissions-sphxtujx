class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n = numbers.length;
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int i=0; i<n; i++){
            int search = target - numbers[i];
            if(mp.containsKey(numbers[i])){
                return new int[]{mp.get(numbers[i]) + 1, i+1};
            }
            mp.put(search, i);
        }
        return new int[]{-1, -1};
    }
}