#include <bits/stdc++.h>
using namespace std;

void solve()
{
    
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

    //int _t;cin>>_t;while(_t--)  
    int T,i;
    cin>>T;
    int** box = new int*[T]; 
	int *subbox = new int[T]; 
for(int i=0;i<T;i++) 
{ 
	cin>>subbox[i];  
	box[i] = new int[subbox[i]]; 
	for(int j=0;j<subbox[i];j++) 
		cin>>box[i][j];  
} 

    int visited = -1;    
for(int i=0;i<T;i++) 
{
    //Array fr will store frequencies of element    
    int* fr= new int[subbox[i]];    
        
    for(int j = 0; j < subbox[i]; j++){    
        int count = 1;    
        for(int k = j+1; k < subbox[i]; k++){    
            if(box[i][j] == box[i][k]){    
                count++;    
                //To avoid counting same element again    
                fr[k] = visited;    
            }    
        }    
        if(fr[j] != visited)    
            fr[j] = count;    

}
    for(int j = 0; j < subbox[i]; j++){    

        if(fr[j] != visited){   
            if(fr[j]%2!=0)
            {
                cout<<box[i][j]<< endl;
            } 
   
               
        }    
    }
}    

    return 0;

}
