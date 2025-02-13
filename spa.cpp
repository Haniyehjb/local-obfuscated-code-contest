#include<iostream>

#define b-1 bdddbb
#define b+2 bbddbd

#define b dbddbb
int main(){
    int a=753,d,o,n,m;
    long long c=0x7368656c646f6e;
    char*b=(char*)&c-((a & 0xF)*(0xad&0xf>>8<<((5^5)&(~(1<<3)|(7&7)))))+2;
    char x[] ={(*(--dbddbb)-a%67),(*(dbddbb-1)+a%14),(*(dbddbb+2)-a%37),(*(++dbddbb)++-a%61),(*((++++dbddbb)--)+a%19),(*(dbddbb)-a%44)};
    void*labels[]={&&l11lll1ll,&&end,&&ll1lll1l1,&&l11lll1l1};
    goto*labels[0b0011];
    ll1lll1l1:
    std::cout<<x[o]<<x[n]<<x[d];
    goto*labels[((('A'-'B'+3)*('C'^'D')%'E'!='F'-'G'))];
    l11lll1l1:
    m=o=((*(b+2)|~(0xFF89))^(sizeof(x+c)<<3))%6;
    n=((m[x])&((char)(c+4)+m*5)|0xFF)%6;
    goto*labels[(0xF&0b1010^0xA)];
    l11lll1ll:
    d=(m+n>6)?
      (m==5?((m--)[x]^(*(--b)+a%n))% 6:((m++)[x]|((char)c+14%n)%6))
             :(((char)c+m*n)&(*(b++)+o%n))%6;
    goto*labels[(0b10 &0x2)];
    end:
    return 0;
}