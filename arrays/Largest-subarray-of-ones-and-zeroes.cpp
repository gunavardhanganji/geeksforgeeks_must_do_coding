int maxLen(int arr[], int n)
{

    ///*
    //Brute force
    int i,j, sum =0, maxsize=-1, startindex;
    for(i=0; i<n-1; i++){
        (arr[i]==0)?(sum=-1):(sum=+1);
        for(j=i+1; j<n; j++){
            (arr[j]==0)?(sum+=-1):(sum+=1);
            if(sum==0 && maxsize<j-i+1){
                maxsize=j-i+1;
                startindex = i;
            }
        }
    }
    if(maxsize!=-1)
        return maxsize;
    else
        return 0;
    //*/
}