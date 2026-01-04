package Medium;

class Solution {
    public int sumFourDivisors(int[] nums){
        int total = 0;

        for (int x : nums){
            int cnt = 0;
            int sum = 0;

            for (int d = 1; d <= x; d++){
                if(x % d == 0){
                    cnt++;
                    sum += d;
                }
            }

            if (cnt == 4) total += sum;
        }

        return total;
    }
}