/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool cmp(Interval i, Interval j){
        return i.start < j.start;
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.size() == 0 || intervals.size() == 1)
            return intervals;
        vector<Interval> ans;
        sort(intervals.begin(), intervals.end(), cmp);
        ans.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            Interval tmp = ans[ans.size() - 1];
            while(tmp.end >= intervals[i].end && i < intervals.size())
                i++;
            if(i == intervals.size())
                break;
            if(tmp.end >= intervals[i].start && tmp.end < intervals[i].end)
            {
                Interval t = Interval(tmp.start, intervals[i].end);
                ans.pop_back();
                ans.push_back(t);
            }
            else if(tmp.end < intervals[i].start)
            {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};