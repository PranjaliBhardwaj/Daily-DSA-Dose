class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for(int i=0;i<a.size();i++)if(a[i]<=0)a[i]=INT_MAX;
        for(int i=0;i<a.size();i++){
            int num=abs(a[i]), idx=num-1;
            if(idx>=0 && idx<a.size() && a[idx]>0)a[idx]*=-1;
        }
        for(int i=0;i<a.size();i++)if(a[i]>=0)return i+1;
        return a.size()+1;
    }
};
