// Given arrival and departure times of all the trains on a station, c
// alculate the minimum number of platforms required to serve all the trains without making any train waiting.


#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define DEB(x) cout << #x << "=" << x << endl
#define DEB2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PB push_back
#define F first
#define S second
#define ALL(x) x.begin(), x.end()
typedef pair<int, int>  PII;
typedef pair<LL, LL>    PLL;
const int MOD = 1000000007;
#define PI 3.1415926535897932384626


static int minimumPlatformsCounter(vector<int> arr , vector<int> dep){

    vector<pair<int, int>> timeLine;  // {time, arr/dep}  arr=1, dep=0
    int totalTrains= arr.size();

    for(int index= 0; index< totalTrains ;index++){
        int currentTrainArrTime= arr[index];
        int currenttrainDepTime= dep[index];
        timeLine.push_back({currentTrainArrTime,  1});
        timeLine.push_back({currenttrainDepTime, 2});
    }

    sort(timeLine.begin(), timeLine.end());

    int totalPlatformsReq= 0;
    int currentNoOfTainsInStation=0;
    for(auto time: timeLine){
        if(time.second == 1) 
            currentNoOfTainsInStation++;
        else
            currentNoOfTainsInStation--;
        
        totalPlatformsReq= max(totalPlatformsReq, currentNoOfTainsInStation);

    }

    return totalPlatformsReq;
}


int main(){

    // int[] arr1 = {900, 940, 950, 1100, 1500, 1800};
    //     int[] dep1 = {910, 1200, 1120, 1130, 1900, 2000}

//     int[] arr1 = {900, 940, 950, 1100, 1500, 1800};
// int[] dep1 = {1900, 1500, 1900, 1130, 1900, 1900};

    vector<int> arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep = {1900, 1500, 1900, 1130, 1900, 1900};

    cout<<"max trains required = "<<minimumPlatformsCounter(arr, dep)<<endl;;
    
    
}



