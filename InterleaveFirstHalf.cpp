class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        int n=q.size();
        queue<int> q1,q2;
        if(n==2)
        return;
        while(!q.empty())
        {
            q1.push(q.front());
            q.pop();
        }
        for(int i=0;i<n/2;i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        while(!q1.empty())
        {
            q.push(q2.front());
            q2.pop();
            q.push(q1.front());
            q1.pop();
        }
        return;
    }
};
