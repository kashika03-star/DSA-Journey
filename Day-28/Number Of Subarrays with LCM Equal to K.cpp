class Solution {
public:

    int gcd(int a, int b){
        while(b){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int lcm(int a, int b){
        return (a / gcd(a,b)) * b;
    }

    int subarrayLCM(vector<int>& nums, int k) {

        int n = nums.size();
        int ans = 0;

        for(int i=0;i<n;i++){

            int currLCM = 1;

            for(int j=i;j<n;j++){

                currLCM = lcm(currLCM, nums[j]);

                if(currLCM == k)
                    ans++;

                if(currLCM > k || k % currLCM != 0)
                    break;
            }
        }

        return ans;
    }
};
