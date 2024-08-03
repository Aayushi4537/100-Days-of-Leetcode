class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int buyingrate= INT_MAX;
         int maxprofit=0;
        int profit=0;
    
        for(int i=0;i<prices.size();i++){
           if(prices[i]<buyingrate){
               buyingrate=prices[i];
              
            }
            profit= prices[i]- buyingrate;
            if(profit>maxprofit) maxprofit=profit;
            
        }
       
        return maxprofit;
        
        
        
    }
};