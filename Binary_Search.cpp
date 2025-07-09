#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int val; cin >> val;
    bool found = false;
    int low = 0, high = n-1;
    int mid = (low + high) / 2;
    while(low <= high){
        if( val == v[mid]){
            found = true;
            break;
        } else if(val > v[mid]){
            low = mid+1;
            mid = (low + high) / 2;
        } else{
            high = mid - 1;
            mid = (low + high) / 2;
        }
    }
    cout << found << endl;

    

    
    
    
}
