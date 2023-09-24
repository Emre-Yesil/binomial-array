#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int ust[100];
    int alt[100];
    int satir, sutun,satirSay,k;
    cout<<"kacinci basamaga kadar binom acilimi yazilmasini istiyorsunuz"<<endl;
    cin>>satirSay;
    ust[0]= 1;
    for(satir=0; satir<=satirSay; satir++) {
        for(sutun=0;sutun<=satir;sutun++){
            if(satir == sutun||sutun == 0){
                alt[sutun] = 1;
            }
            else{
                alt[sutun]= ust[sutun] + ust[sutun-1];
            }
        }
        for(k=0; k<= satir; k++){
            ust[k]=alt[k];
            cout<<ust[k]<<" ";
            alt[k]=0;

        }
        cout<<" "<<endl;
    }
    return 0;
    
}