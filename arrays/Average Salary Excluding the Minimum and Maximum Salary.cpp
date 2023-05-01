class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin() ,  salary.end());
        int n = salary.size() , sum=0;
        double ans;
        for(int i=0 ; i<n ; i++){
            sum += salary[i];
        }
        // cout<<sum;
        sum -= salary[0] ;
        sum -= salary[n-1];
        
        ans = double(sum) ;
        ans /= n-2;
        cout<<ans;
        return ans;
    }
};
