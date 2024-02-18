/*You are given an integer n. There are n rooms numbered from 0 to n - 1.

You are given a 2D integer array meetings where meetings[i] = [starti, endi] means that a meeting will be held during the half-closed time interval [starti, endi). All the values of starti are unique.

Meetings are allocated to rooms in the following manner:

Each meeting will take place in the unused room with the lowest number.
If there are no available rooms, the meeting will be delayed until a room becomes free. The delayed meeting should have the same duration as the original meeting.
When a room becomes unused, meetings that have an earlier original start time should be given the room.
Return the number of the room that held the most meetings. If there are multiple rooms, return the room with the lowest number.

A half-closed interval [a, b) is the interval between a and b including a and not including b.*/

class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
       sort(meetings.begin(),meetings.end());
        int *room=new int[n]{0};
        long long *timings=new long long[n]{0};
        for(int i=0;i<meetings.size();i++){
            int index=-1;
            int minindex=0;
            //koi khali hai ya jb chahiye usse phle dusri meeting khtm ho gyi hai kya
            for(int j=0;j<n;j++){
                if(timings[j]==0||timings[j]<=meetings[i][0]){
                    index=j;
                    break;
                }
            }
            if(index!=-1){
                room[index]++;
                if(timings[index]==0 ||timings[index]<meetings[i][0]){
                    timings[index]=meetings[i][1];
                    continue;
                }
                timings[index]+=meetings[i][1]-meetings[i][0];
                continue;
            }
            //agr nhi hua toh check kro sbse phle kon khali hoga
            for(int j=0;j<n;j++){
            if(timings[j]<timings[minindex]){
                minindex=j;
            }
            }
            room[minindex]++;
            timings[minindex]+=(meetings[i][1]-meetings[i][0]);
            }
            for(int i=0;i<n;i++){
                cout<<room[i]<<" ";
            }
            cout<<endl;
            int ans=0;
            for(int j=0;j<n;j++){
               if(room[j]>room[ans]){
                   ans=j;
               }
            }
            return ans;
        }

};
