/**
 *  @judge LeetCode
 *  @id 1396
 *  @name Design Underground System
 *  @contest Weekly Contest 182
 * 
 *  @tag implemetation, simulation
 */
class UndergroundSystem
{
public:
    //checkin
    map<int, int> iid;
    map<int, string> station;
    //count average
    //map<pair<string,string>,int>in,out;
    map<pair<string, string>, pair<int, int>> all;

    UndergroundSystem()
    {
    }

    void checkIn(int id, string stationName, int t)
    {
        iid[id] = t;
        station[id] = stationName;
    }

    void checkOut(int id, string stationName, int t)
    {
        int in1 = iid[id];
        string in2 = station[id];
        all[{in2, stationName}].first++;
        all[{in2, stationName}].second += t - in1;
        iid.erase(id);
        station.erase(id);
    }

    double getAverageTime(string startStation, string endStation)
    {
        return double(all[{startStation, endStation}].second) / double(all[{startStation, endStation}].first);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */