#include<iostream>

using namespace std;




int main(){


    int n=6,T[n],i;

    for(i=0; i<n; i++){
        cout<<"Dwse timh tis "<<i+1<<") metoxis:"<<endl;
        cin>>T[i];
    }

    int j,k,sum=0,result=0,l,r;//result= me ena noumero gia to elaxisto
    //ara 8a mporousame na baloume kai gia poio swsta result=T[0];
    for(i=0;i<n;i++){//upologizei ka8e fora to a8risma gia tous neous upopinakes
        for(j=i;j<n;j++){
            sum=0;
            for(k=i;k<=j;k++){
                sum+=T[k];
            }
            if(sum>result){//>= ama 8eloume mikrotero diastima me idio result
                result=sum;
                l=i;//left tou megistou
                r=j;//right tou megistou
            }
        }
    }
    cout<<"Result:"<<result<<" Left:"<<l<<" Right:"<<r;
}
