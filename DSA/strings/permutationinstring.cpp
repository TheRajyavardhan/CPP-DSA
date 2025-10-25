#include <iostream>
#include <string>
using namespace std;

bool isEqual(int freq1[], int freq2[]){
    for(int i=0; i<26; i++){
        if(freq1[i]!=freq2[i]) return false;
    }
    return true;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";

    int freq[26]={0};
    for(int i=0 ; i<s1.length(); i++){
        freq[s1[i]-'a']++;
    }

    int windowSize = s1.length();
    

    for(int i=0; i<s2.length(); i++){
        int winFreq[26]={0};
        int winIdx=0 , Idx=i;
        while(Idx<s2.length() && winIdx<windowSize){
            winFreq[s2[Idx]-'a']++;
            Idx++,winIdx++;
        }
        if(isEqual(freq,winFreq)){
            cout << "Found" << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}