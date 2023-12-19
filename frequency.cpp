#include <iostream>

#include <string>

using namespace std;

int frequency(string s){
    int *k;
         k= new int(26);
         k[0]=0;
        for(int i=0;i<s.length();i++){
            k[s[i]- 97]++;
        }
        int max=0;
        for(int i=0;i<26;i++){
            if(k[i]>max){
                max=k[i];
            }
        }
        free(k);
        return max;
}

int main(){
    string s="aabsaa";
    int j=s.length()-1;
    int i=0,k=0;
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            
            k+=1;
            break;
        }
    }
    cout<<k;

}