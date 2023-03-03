class Solution {
public:
    int divide(int A, int B) {
        long long int res=0,sign=0,n=A,m=B;
        if( n<0 || m<0) 
            sign=-1;
        
        if( n<0 && m<0) 
            sign =1;
        n=abs(n);   
        m=abs(m);

        for(int i=31;i>=0;i--){
            if( (m<<i) <= n){
                n-=(m<<i);
                res+=(1LL<<i);
            }
        }
        if(sign<0) 
            res=-res;
        if(res>INT_MAX) 
            return INT_MAX;
        else 
            return res;
    }
};