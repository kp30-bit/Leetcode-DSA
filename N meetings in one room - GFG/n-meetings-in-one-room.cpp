// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> meetings;
        for(int i=0;i<n;i++){
            meetings.push_back({end[i],start[i]});
        }
        sort(meetings.begin(),meetings.end());
        
        //as always n>=1
        //We will always doing our first meetings
        
        
        int totalMeetings = 1;
        
        //It is just to compare the end time of the last meeting that we did.
        
        //Always see first = endtime & second = starttime.
        
        int lastEnd = meetings[0].first;
        
        for(int i=1;i<n;i++){
            //The condition asked in question that  Also note start time of one 
            //chosen meeting can't be equal to the end time of the other chosen meeting.
            if(meetings[i].second>lastEnd){
                totalMeetings++;
                
                //We will only update our end time of our last meeting when we are doing.. 
                //This meeting
                lastEnd = meetings[i].first;
            }
        }
        
        return totalMeetings;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends