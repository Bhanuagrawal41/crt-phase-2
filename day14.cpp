class Solution {
public:
      vector<vector<int>> ans;

      void solve(vector<int> &candidates, int target, vector<int> temp, int i){
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }

        if(i == candidates.size()){
            return;
        }

        if(candidates[i]<= target){
            temp.push_back(candidates[i]);
            solve(candidates, target-candidates[i], temp,i);
            temp.pop_back();
        }

        solve(candidates, target, temp, i+1);
      }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;

        solve(candidates, target, temp, 0);
        return ans;
        
    }
};
