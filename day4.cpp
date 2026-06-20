// # leet code  1011 in this we have to a ship and we have to fill the ship by putting the weight to 
// the ship by using binary search



class Solution {
public:
    bool ispossible(vector<int>& weights, int mid, int days){
        int mdays = 1;
        int shipweights = 0;

      for(int i = 0; i < weights.size(); ){
        if(weights[i] > mid){
            return false;
        }
        if(shipweights + weights[i] <= mid){
            shipweights =  shipweights + weights[i];
            i++;

        }else{
            mdays++;
            shipweights = 0;
        }

        if(mdays > days){
            return false;
        }

      }
      return true;


    }

     
    int shipWithinDays(vector<int>& weights, int days) {

        int total = 0;
        int ans = 0;
        for(int i = 0; i<weights.size(); i++){
            total +=  weights[i];
        }
        int start = 1;
        int end = total;
        
        
        while(start <= end){
            int mid = (start + end ) / 2;
             
           

            if(ispossible(weights, mid, days)){
                 ans = mid;
                end = mid-1;
               

            } else{
                start = mid + 1;
            }
             
        }


        return ans;
    
       
        
    }
};





// leet coe = 1552. Magnetic Force Between Two Balls  
// we placing the magnetic ball at maximum distance between the balls


class Solution {
public:

        bool ispossbile(vector<int>& position,int m,  int mid) {
            int ball = 1;
            int pos = position[0];
            for(int i = 0; i<position.size(); i++){
                if((position[i]-pos) >= mid){
                    ball++;
                    pos = position[i];
                }

                if(ball == m){
                    return true;
                }
                

            }
            return false;

        }
      
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int start = 1;
        int end = position[n-1] - position[0];
        int ans;

        while(start <= end){
            int mid = (start + end)/2;
            if(ispossbile(position, m, mid)){
                  ans = mid;
                  start = mid + 1;
            }else{
                end = mid - 1;
            }


        }
        return ans;
    }
};
