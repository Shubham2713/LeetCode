class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        int len=tasks.size();
        vector<int > arr(26,0);
        int max_task=0;
        for(auto x:tasks)
        {
            arr[x-'A']++;
            max_task=max(max_task,arr[x-'A']);
        }
        int max_task_freq=0;
        for(auto x:arr)
            if(max_task==x)
                max_task_freq++;
        
        int start;
        if(n>=max_task_freq)
            start=n*(max_task-1)+max_task+max_task_freq-1;
        else
            return len;
        
        return start>len?start:len;
        
    }
};
