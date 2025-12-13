#include <iostream>
using namespace std;
int main(){
	int n, m, k; // n = column // n = rows
	cin>>n>>m>>k;
	int table[n][m];
	int num = 1;
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
        table[i][j] = num++;
        if (num > k) {
            num = 1;
        }
	    }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    int c, s = 0;
    cin>>c;
    for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if (table[i][j] == c){
        	s++;
        }
    }
}
    cout<<s;
}