 #include<stdio.h>
 int main(){
 
 
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){

        int a;
        scanf("%d",&a);
        int ar[a];
        for(int j=0; j<a; j++){
            scanf("%d",&ar[j]);
        }

        int s;
        scanf("%d",&s);

        int pos=-1;

        for(int j=0; j<a; j++){
            
             if(ar[j]==s){
                pos=j+1;
                break;
             }
            
         }

         

         if(pos!=-1){
            printf("Case %d: %d\n",i,pos);
         }
         else{
            printf("Case %d: Not Found\n",i);
         }
          
 
         
        
       



    }
 
     return 0;
 }