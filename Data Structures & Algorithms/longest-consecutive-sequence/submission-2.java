class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> numsSet = new HashSet<>();
        for(int num : nums){
            numsSet.add(num);
        }
        int longest = 0;

        for(int num : nums){
            if(!numsSet.contains(num - 1)){
                int length = 0;
                while(numsSet.contains(num + length)){
                    length++;
                }
                longest = Math.max(length,longest);
            }
        }
        return longest;
    }
    /*
            for (int num : nums) {
            if (!mp.containsKey(num)) {
                mp.put(num, mp.getOrDefault(num - 1, 0) + mp.getOrDefault(num + 1, 0) + 1);
                mp.put(num - mp.getOrDefault(num - 1, 0), mp.get(num));
                mp.put(num + mp.getOrDefault(num + 1, 0), mp.get(num));
                res = Math.max(res, mp.get(num));
            }
        }
    */
}
