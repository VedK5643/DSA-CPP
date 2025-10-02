#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    char c='A';
    int b=1;
    cout<<"Enter number of rows to print";
    cin>>n;
    // for(i=1;i<=n;i++){
    
    //     for(j=1;j<=n;j++){
    //         cout<<c<<"\t";
    //         c++;
    //         }
    //     cout<<endl;
    // }

    // for(i=0;i<n;i++){
    //     for(j=0;j<i+1;j++){
    //         cout<<"*"<<"\t";
    //     }
    //     cout<<endl;
    // }

    // for(i=0;i<n;i++){
    //     for(j=0;j<i+1;j++){
    //         cout<<i+1<<"\t";
    //     }
    //     cout<<endl;
    // }+

    // for(i=0;i<n;i++){
    //     for(j=0;j<i+1;j+){
    //         cout<<c<<"\t";
    //     }
    //     c++;
    //     cout<<endl;
    // }

    // for(i=0;i<n;i++){
    //     for(j=1;j<=i+1;j++){
    //         cout<<j<<"\t";
    //     }
    //     cout<<endl;
    // }

    // for(i=0;i<n;i++){
    //     for(j=i+1;j>0;j--){
    //         cout<<j<<"\t";
    //     }
    //     cout<<endl;
    // }

    // for(i=0;i<n;i++){
    //     for(j=0;j<i+1;j++){
    //         cout<<c<<"\t";
    //         c++;
    //     }
    //     cout<<endl;
    // }

    // for(i=0;i<n;i++){
    //     c='A'+i;
    //     for(j=0;j<i+1;j++){
    //         cout<<c<<"\t";
    //         c--;
    //     }
    //     cout<<endl;
    //}

    // for(i=0;i<n;i++){
    //     for(j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //         for(j=0;j<n-i;j++){
    //             cout<<(i+1);
    //         }
    //         cout<<endl;
    //     }

    // for(i=0;i<n;i++){
    //     for(j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(j=1;j<=i+1;j++){
    //         cout<<j;
    //         }
    //     for(j=i;j>=1;j--){
    //         cout<<j;
    //         }
            
    //     cout<<endl;
    // }
        
    // for(i=0;i<n;i++){
    //     for(j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    // cout<<"*";
    // if(i!=0){
    //     for(j=0;j<(2*i-1);j++){
    //         cout<<" ";
    //     }
    // cout<<"*";
    // }
    // cout<<endl;
    // }
    // for(i=0;i<(n-1);i++){
    //     for(j=0;j<i+1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=n-2){
    //         for(j=0;j<(2*(n-2-i)-1);j++){
    //             cout<<" ";
    //         }
    //     cout<<"*";
    //     }
    //     cout<<endl;
    
    // }


    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        for(j=0;j<(2*(n-i-1));j++){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        for(j=0;j<2*i;j++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}