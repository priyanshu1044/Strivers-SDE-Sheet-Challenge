int findMinimumCoins(int amount) 
{
    vector<int> notes = {1,2,5,10,20,50,100,500,1000};
    int TotalCoins = 0;
    int i=8;
    while(amount && i>=0){
     if(amount<notes[i]){
       i--;
       continue; 
     }
     TotalCoins++;
     amount-=notes[i];
    }
    return TotalCoins;
}