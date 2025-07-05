class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }else if(n==1){
            return 1 ;
        }
        int firstterm =0;
        int secterm =1;
        for(int i=1;i<=n;i++){

            int thirdterm=firstterm+secterm;
            firstterm=secterm;
            secterm=thirdterm;
        }
        return firstterm;
    }
};