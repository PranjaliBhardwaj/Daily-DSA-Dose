/*There are n cities connected by some number of flights. You are given an array flights where flights[i] = [fromi, toi, pricei] indicates that there is a flight from city fromi to city toi with cost pricei.

You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. If there is no such route, return -1.*/

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it: flights)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }

        queue<pair<int, pair<int,int>>> q;
        //{stop,{src, cost}}
        q.push({0, {src,0}});

        vector<int> dist(n, 1e9);
        dist[src]=0;

        while(!q.empty())
        {
            auto it =  q.front();
            q.pop();
            int stops = it.first;
            int node = it.second.first;
            int cost = it.second.second;

            if(stops>k) break;

            for(auto it : adj[node])
            {
                int adjNode = it.first;
                int edW = it.second;

                if(cost + edW < dist[adjNode] && stops <= k)
                {
                    dist[adjNode] = cost + edW;
                    q.push({stops+1 ,{adjNode, cost+edW}});
                }
            }
  
        }

        if(dist[dst]== 1e9) return -1;
        return dist[dst];
    }
};
