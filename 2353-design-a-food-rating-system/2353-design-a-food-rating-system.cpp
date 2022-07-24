struct compare
{
    bool operator()(const pair<int, string> &x, const pair<int, string> &y) const
    {
        if (x.first == y.first)
        {
            return x.second > y.second;
        }
        return x.first < y.first;
    }
};


class FoodRatings
{
public:
    map<string, int> Mapstr;
    map<string, string> Mapstrstr;
    map<string, set<pair<int, string>, compare>> MapSet;
    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {
        for (int i = 0; i < foods.size(); i++)
        {
            Mapstr[foods[i]] = ratings[i];
            MapSet[cuisines[i]].insert({ratings[i], foods[i]});
            Mapstrstr[foods[i]] = cuisines[i];
        }
    }

    void changeRating(string food, int newRating)
    {
        MapSet[Mapstrstr[food]].erase({Mapstr[food], food});
        MapSet[Mapstrstr[food]].insert({newRating, food});
        Mapstr[food] = newRating;
    }

    string highestRated(string cuisine)
    {
        return (*--MapSet[cuisine].end()).second;
    }
};