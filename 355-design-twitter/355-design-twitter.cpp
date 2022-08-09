class Twitter {
public:
    vector<pair<int, int>> tweets;
    unordered_map<int, set<int>> following;
    
    Twitter() { }
    
    void postTweet(int userId, int tweetId) {
        tweets.push_back({userId, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        
        following[userId].insert(userId);
        
        set<int>& usersFollowing = following[userId];
        vector<int> res;
        
        int count = 0;
        for(int i = tweets.size()-1; i >= 0; i--){
            if(count == 10) break;

			int tweeter = tweets[i].first;
            int tweetId = tweets[i].second;
            
            if(usersFollowing.count(tweeter)){
                res.push_back(tweetId);
                count++;
            }
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);

    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */