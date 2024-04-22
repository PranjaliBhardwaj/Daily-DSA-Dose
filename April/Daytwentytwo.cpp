class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_map<string,int>mp;
        for(auto x:deadends){
            mp[x]=-1;
        }
        if(mp["0000"]==-1) return -1;
        if(target=="0000") return 0;
        queue<string>q;
        q.push("0000");
        int ans=0;
        while(q.size()){
            int n=q.size();
            for(int i=0;i<n;i++){
                string s=q.front();
                q.pop();
                string temp=s;
                for(int j=0;j<4;j++){
                    char ch=temp[j];
                    if(ch=='0'){
                        temp[j]='9';
                        if(mp.find(temp)==mp.end()){
                            if(temp==target)return ans+1;
                            q.push(temp);
                            mp[temp]=1;
                        }
                        temp[j]='1';
                        if(mp.find(temp)==mp.end()){
                            if(temp==target)return ans+1;
                            q.push(temp);
                            mp[temp]=1;
                        }
                    }
                    else if(ch=='9'){
                        temp[j]='0';
                        if(mp.find(temp)==mp.end()){
                            if(temp==target)return ans+1;
                            q.push(temp);
                            mp[temp]=1;
                        }
                        temp[j]='8';
                        if(mp.find(temp)==mp.end()){
                            if(temp==target)return ans+1;
                            q.push(temp);
                            mp[temp]=1;
                        }
                    }
                    else{
                        char newch=ch+1;
                        temp[j]=newch;
                        if(mp.find(temp)==mp.end()){
                            if(temp==target)return ans+1;
                            q.push(temp);
                            mp[temp]=1;
                        }
                        newch=ch-1;
                        temp[j]=newch;
                        if(mp.find(temp)==mp.end()){
                            if(temp==target)return ans+1;
                            q.push(temp);
                            mp[temp]=1;
                        }
                    }
                    temp=s;
                }
            }
            ans++;
        }
        return -1;
    }
};
