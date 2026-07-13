class RecentCounter {

private:
    std::queue<int> q;

public:
    RecentCounter() {}
    
    int ping(int t) {
        // Enqueue the current request time
        q.push(t);
        
        // Pop out of date requests from the front
        while (q.front() < t - 3000) {
            q.pop();
        }
        
        // The remaining size is our answer
        return q.size();
    }
};
