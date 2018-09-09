#include <bits/stdc++.h>
using namespace std;

#define mid ((l+r)>>1)

#define MSG(x) printf("Breakpoint %d\n", x)
#define HALT printf("Program halted.\n"), exit(-1)
#define DEP(x) setjmp(x)
#define JMP(x, r) longjmp(x, r)

#define INF 0x7fffffff
#define LINF 1<<63-1
#define NINF -0x80000000
#define LNINF -(1<<63)

#define FORP(x, y, z) for(register int x = y; x <= z; x ++)
#define FOR1(x, y) for(register int x = 1; x <= y; x ++)
#define FORB(x, z) for(register int x = z; x >= 1; x --)

#define MIIT map<int, int>::iterator
#define MCIT map<int, char>::iterator]
#define MICT map<char, int>::iterator
#define MIST map<int, string>::iterator
#define MSIT map<string, int>::iterator
#define MSST map<string, string>::iterator

#define Author "LiBoyu"
#define Recent_Update "2018.9.9"
