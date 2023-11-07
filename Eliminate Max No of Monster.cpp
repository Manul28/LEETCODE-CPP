class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       int n=dist.size();
    //    int n1=speed.size();
       vector<int> arrivalTime(n);
       for(int i=0;i<n;i++) arrivalTime[i]=(dist[i]-1)/speed[i];

       sort(arrivalTime.begin(),arrivalTime.end());
       for(int i=0;i<n;i++){
           if(i>arrivalTime[i]){
               return i;
           }
       }
       return n;
    }
};
