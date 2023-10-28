class Solution{
public:
      int countpermutation(int n){
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        const int mod=1e9+7;
        long long a=1,e=1,i=1,o=1,u=1;

        for(int j=1;j<n;j++){
          long long a_next=e;
          long long e_next=(a+e)%mod;
          long long i_next=(a+e+o+u)%mod;
          long long o_next=(i+u)%mod;
          long long u_next=(a);

          a=a_next,u=u_next,i=i_next,o=o_next,u=u_next;
        }
        return (a+e+i+o+u)%mod;
      }
};
