#include <stdio.h>
int main() { 
    int testcase;
    scanf("%d",&testcase); //forgot to put
    for(int i=0;i<testcase;i++){
        int n; //number of rounds
        scanf("%d",&n);
        char arr[n];
        for(int i=0;i<n;i++){
            scanf(" %c",&arr[i]); //testcase er age space %c dite hobe
        }
        int countT=0,countP=0; //must be inside the loop of testcase
        for(int i=0;i<n;i++){
            if(arr[i]=='T'){
                countT++;
        }
            else if(arr[i]=='P'){
                countP++;
        }
        } 
    
            if(countT>countP){
                printf("Tiger\n");
            }
            else if(countT<countP){
                printf("Pathaan\n");
            }
            else if(countT==countP){
                printf("Draw\n");
            }
    }
    return 0;
}
