#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define DEB(x) cout << #x << "=" << x << endl
#define DEB2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PB push_back
#define F first
#define S second
#define ALL(x) x.begin(), x.end()
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
const int MOD = 1000000007;
#define PI 3.1415926535897932384626

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    LL n, m;
    cin >> n >> m;
    priority_queue<pair<LL, LL>> vote_party;
    priority_queue<pair<LL, LL>, vector<pair<LL, LL>>, greater<pair<LL, LL>>> coin_party;
    map<LL, LL> party_votes;
    map<LL, multiset<LL>> party_coins;
    for(LL i = 0; i < n; i++){
        LL party1, vote1;
        cin >> party1 >> vote1;
        party_votes[party1]++;
        coin_party.push({vote1, party1});
        party_coins[party1].insert(vote1);
    }

    for(auto u: party_votes){
        vote_party.push({u.second, u.first});
    }

    LL res = 0;
    while(!vote_party.empty() && vote_party.top().second != 1){
        auto currentParty = vote_party.top();
        LL party1 = currentParty.second;
        LL vote1 = currentParty.first;

        bool check = true;

        if(party1 == 1) break;

        // validation
        if(party_votes[party1] != vote1){
            vote_party.pop();
            continue;
        }

        auto party1Coins = party_coins[party1];
        if(party_votes[1] == party_votes[party1] || party1Coins.empty()){
            // second approach
            check = false;
        }
        LL party1CoinReq = *party1Coins.begin();

        auto otherCoin = coin_party.top();
        LL party2Coin = otherCoin.first;
        LL party2 = otherCoin.second;

        // validation
        bool valid = true;
        if(party_coins[party2].find(party2Coin) == party_coins[party2].end()) valid = false;
        if(!valid || party2 == 1){
            coin_party.pop();
            continue;
        }

        LL party2CoinReq = party2Coin;
        if(party_votes[party1] > party_votes[party2]) {
            // coin_party.pop();
            // auto otherCoinAux = coin_party.top();
            // LL party2CoinAux = otherCoinAux.first;
            // LL party2Aux = otherCoinAux.second;
            // party2CoinReq += party2CoinAux;
            // coin_party.push({party2Coin, party2});
            party2CoinReq*= 3;
        }
        if(!check || party2CoinReq < party1CoinReq){
            coin_party.pop();
            res += party2Coin;

            auto it = party_coins[party2].find(party2Coin);
            if(it != party_coins[party2].end())
                party_coins[party2].erase(it);

            // votes
            party_votes[party2]--;
            party_votes[1]++;
            vote_party.push({party_votes[party2], party2});
            vote_party.push({party_votes[1], 1});
        } else{
            vote_party.pop();
            res += party1CoinReq;

            auto it = party_coins[party1].find(party1CoinReq);
            if(it != party_coins[party1].end())
                party_coins[party1].erase(it);

            // votes
            party_votes[party1]--;
            party_votes[1]++;
            vote_party.push({party_votes[party1], party1});
            vote_party.push({party_votes[1], 1});
        }
    }

    cout << res << endl;
}
