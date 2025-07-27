class Solution {
  public:
    int missingNum(vector<int>& arr) {
        
        int xor1=0,xor2=0;
        for(int i=0;i<arr.size();i++){
            xor1^=arr[i];
            xor2^=(i+1);
        }
        xor2^=(arr.size()+1);
        return xor2^xor1;
        
        // int n=arr.size();
        // long long fsum=(n+1)*(n+2)/2;
        // long long sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=arr[i];
        // }
        // return (int)(fsum-sum);
        
        // vector<int> hm(n+2,0);
        // for(int i=0;i<n;i++){
        //     hm[arr[i]]=1;
        // }
        // for(int i=1;i<hm.size();i++){
        //     if(hm[i]==0){
        //         return i;
        //     }
        // }
        
    }
};