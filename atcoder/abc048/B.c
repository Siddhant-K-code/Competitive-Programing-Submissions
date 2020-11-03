    #include<stdio.h>
    int main(){
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a>0){
    printf("%lld",b/c-(a-1)/c);
    }
    else if(b>0){
    printf("%lld",b/c+1);
    }
    else{
    printf("1");
    }
    }