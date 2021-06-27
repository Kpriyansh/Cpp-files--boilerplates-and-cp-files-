#include <bits/stdc++.h>

using namespace std;
#define int                                        long long
#define pb                                         push
#define pii                                        pair <int, int>
#define vi                                         vector <int>
#define ff                                         first
#define ss                                         second
#define sz(v)                                      (int)v.size()
#define vpii                                       vector <pair <int, int>>
#define vvi                                        vector <vector <int> >
#define all(x)                                     (x).begin(), (x).end()
#define rall(x)                                    (x).rbegin(), (x).rend()
#define endl                                       '\n'
#define MAX                                        1e18
#define MIN                                        INT_MIN
#define mod                                        1000000007
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long                                  ll;
// class TrieNode {
// public:
//   TrieNode*children[26];

//   int freq = 0;
// };
// void insert(string s, TrieNode*root) {
//   for (int i = 0; i < s.size(); i++) {
//     if (!root->children[s[i] - 'a']) {
//       root->children[s[i] - 'a'] = new TrieNode();
//     }
//     root->children[s[i] - 'a']->freq++;
//     root = root->children[s[i] - 'a'];
//   }

// }
// int search(string s, TrieNode*root) {
//   int cnt = 0;
//   for (int i = 0; i < s.size(); i++) {
//     if (!root->children[s[i] - 'a'])return 0;
//     cnt = root->children[s[i] - 'a']->freq;
//     root = root->children[s[i] - 'a'];
//   }
//   return cnt;

// }
// class Node
// {
// public:
//   Node*children[26];
//   bool isend = false;
// };
// Node*getNode() {
//   Node*root = new Node;
//   root->isend = false;
//   for (int i = 0; i < 26; i++) {
//     root->children[i] = NULL;
//   }
//   return root;
// }
// void insert(string key, Node*root) {
//   for (int i = 0; i < key.size(); i++) {
//     if (!root->children[key[i] - 'a']) {
//       root->children[key[i] - 'a'] = getNode();
//     }
//     root = root->children[key[i] - 'a'];
//   }
//   root->isend = true;
// }
// bool search(string key, Node*root) {
//   for (int i = 0; i < key.size(); i++) {
//     if (!root->children[key[i] - 'a'])return false;
//     root = root->children[key[i] - 'a'];
//   }
//   if (root != NULL && root->isend)return true;

// }

// class TrieNode {
// public:
//   TrieNode*left;
//   TrieNode*right;
// };
// void insert(int n, TrieNode*root) {
//   TrieNode* cur = root;
//   for (int i = 31; i >= 0; i--) {
//     int x = (n >> i) & 1;
//     if (x) {
//       if (!cur->right) {
//         cur->right = new TrieNode();
//       }
//       cur = cur->right;
//     }
//     else {
//       if (!cur->left)cur->left = new TrieNode();
//       cur = cur->left;
//     }
//   }
// }

// int getMaxXorPair(vector<int>&a, TrieNode* root) {
//   int mx_xor = 0;
//   for (int i = 0; i < a.size(); i++) {
//     int val = a[i], cur_xor = 0;
//     TrieNode*cur = root;
//     for (int j = 31; j >= 0; j--) {
//       int b = (val >> j) & 1;
//       if (b) {
//         if (cur->left) {
//           cur_xor += (int)pow(2, j);
//           cur = cur->left;
//         }
//         else {
//           cur = cur->right;
//         }
//       }
//       else {
//         if (cur->right) {
//           cur_xor += (int)pow(2, j);
//         }
//         else {
//           cur = cur->left;
//         }
//       }
//     }
//     mx_xor = max(mx_xor, cur_xor);
//   }
//   return mx_xor;
// }
// int step(int n) {
//   int cnt = 0;
//   for (int i = 1; i <= n; i *= 10) {
//     cnt += n / i;
//   }
//   return cnt;
// }


string flipCoins(int n, string s) {
  // Your code goes here
  int cur = 0;
  if (n == 0 && s[0] == '0')return "No";
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == '0')cur++;
    else {
      if (cur % 2 == 1) {
        if (s[i + 1] == '0')swap(s[i], s[i + 1]);
        else {
          return "No";
        }
      }
      cur = 0;
    }
  }
  if (s[n - 1] == '0')cur++;
  if (cur % 2 == 1)return "No";
  return "Yes";
}
void solve() {
  string s; cin >> s;
  int n = s.size();
  cout << flipCoins(n, s) << endl;

}

int32_t main()
{
  IOS
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif

  //seive();
  int t = 1;
  cin >> t;
  for (int tt = 1; tt <= t; tt++) {
    // cout<<"Case #"<<tt<<": ";
    solve();
  }

}