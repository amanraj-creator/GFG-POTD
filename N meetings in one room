class Solution {
  public:
      int maxMeetings(int n, int start[], int end[]) {
   
    vector<pair<int,int>> meeting;
    for(int i = 0; i < n; i++) {
        meeting.push_back({end[i], start[i]});
    } 
    sort(meeting.begin(), meeting.end());
    int count = 1;
    int end_time = meeting[0].first;
    for(int i = 1; i < n; i++) {
        if(meeting[i].second >end_time) {
           count++; 
        end_time = meeting[i].first;  
        }
    }
    return count; 
    }
};
