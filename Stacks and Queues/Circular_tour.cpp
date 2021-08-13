class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start;
       for(int i=0;i<n;i++){
           if(p[i].petrol>=p[i].distance){
               start = i;
               break;
           }
       }
       int curr = 0;//excess petrol
       int i;
       for(i=start;i<n;){
           curr += p[i].petrol-p[i].distance;
           if(curr<0){
               i++;
               for(;i<n;i++){
                   if(p[i].petrol>=p[i].distance){
                       start = i;
                       
                       curr = 0;
                       break;
                   }
               }
           }
           else{
               i++;
           }
       }
       if(curr<0){
           return -1;
       }
       for(int j=0;j<start;j++){
           curr+= p[j].petrol-p[j].distance;
           
            if(curr<0)
                return -1;
                
       }
        return start;
    }
};