#include<iostream>
int main(){
    int a=753,d,o,n,m;
    long long c=0x7368656c646f6e;
    char*b=(char*)&c-((a & 0xF)*(0xad&0xf>>8<<((5^5)&(~(1<<3)|(7&7)))))+2;
    char x[] ={(*(--b)-a%67),(*(b-1)+a%14),(*(b+2)-a%37),(*(++b)++-a%61),(*((++++b)--)+a%19),(*(b)-a%44)};
    void*labels[]={&&bug2,&&end,&&bug3,&&bug1};
    goto*labels[0b0011];
    bug3:
    std::cout<<x[o]<<x[n]<<x[d];
    goto*labels[((('A'-'B'+3)*('C'^'D')%'E'!='F'-'G'))];
    bug1:
    m=o=((*(b+2)|~(0xFF89))^(sizeof(x+c)<<3))%6;
    n=((m[x])&((char)(c+4)+m*5)|0xFF)%6;
    goto*labels[(0xF&0b1010^0xA)];
    bug2:
    d=(m+n>6)?
    (m==5?((m--)[x]^(*(--b)+a%n))% 6:((m++)[x]|((char)c+14%n)%6))
    :(((char)c+m*n)&(*(b++)+o%n))%6;
    goto*labels[(0b10 &0x2)];
    end:
    return 0;
}
