class Solution{
public:
     int maximumElement(vector<int>& arr){
       ios_base::sync_with_stdio(false);
       cout.tie(NULL);
       cin.tie(NULL);
       sort(arr.begin(),arr.end());
       arr[0]=1;
       for(int i=1;i<arr.size();i++){
         if(abs(arr[i]-arr[i-1])<=1){
           continue;
         }
         else{
           arr[i]=arr[i-1]+1;
         }
       }
       return arr.back();
     }
};
