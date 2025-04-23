## Fast I/O C++

A `C++` templete for faster I/O times.

```c++
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define FOR(i,a,b) for(int i=a;(i<b?i<b: i>b); i<b?++i:--i)
#define MOD 1e9+7
#define EPS 1e-5

void solve(){
    // Write code here
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int tc = 1;
    // cin >> tc;
    for( int t=1; t <= tc; t++ ){
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
```

## Fast Input-Output Java

A `JAVA` template for faster I/O times.

### How to use it?

Copy this template into your local system and write your code using this template to write CP-friendly codes.

```java
import java.io.*;
import java.util.*;

public class JavaTemplete {
  static BufferedReader br;
  static PrintWriter out;
  static StringTokenizer st;

  static void solve() throws IOException {
    // Write code here

  }

  public static void main(String[] args) throws IOException {
    br = new BufferedReader(new InputStreamReader(System.in));
    out = new PrintWriter(new OutputStreamWriter(System.out));
    // if (System.getProperty("ONLINE_JUDGE") == null) {
    //   br = new BufferedReader(new FileReader("input.txt"));
    //   out = new PrintWriter( new BufferedWriter(new FileWriter("output.txt")));
    // }
    int testCase = 1;
    // testCase = readInt();
    while (testCase-- > 0) {
      solve();
    }
    out.close();
  }

  static String next() throws IOException {
    while (st == null || !st.hasMoreTokens())
      st = new StringTokenizer(br.readLine().trim());
    return st.nextToken();
  }

  static long readLong() throws IOException {
    return Long.parseLong(next());
  }

  static int readInt() throws IOException {
    return Integer.parseInt(next());
  }

  static double readDouble() throws IOException {
    return Double.parseDouble(next());
  }

  static char readCharacter() throws IOException {
    return next().charAt(0);
  }

  static String readLine() throws IOException {
    return br.readLine().trim();
  }
}
```

## Fast I/O for Python

Competetive porgromming `Python` Templete

```python
import sys
# import io, os,
# import math, functools, collections
# import bisect, heapq, numpy
# alphabets = "abcdefghijklmnopqrstuvwxyz"


input   = lambda: sys.stdin.readline().strip()
inum    = lambda: int(input())
imap    = lambda: map(int,input().split())
ilist   = lambda: list(map(int, input().split()))

# sys.stdout.write(str(ans) + "\n")

for _ in range( inum() ):
    #code here

```

## C++14 sublime-build for Linux
```

{
"cmd" : ["g++ -std=c++14 $file_name -o $file_base_name && timeout 4s ./$file_base_name<input.txt>output.txt"], 
"selector" : "source.c",
"shell": true,
"working_dir" : "$file_path"
}

```

## Java sublime-build for Linux

```

{
  "cmd": ["javac \"$file_name\" && java \"$file_base_name\" <input.txt> output.txt"],
  "shell": true,
  "file_regex": "^(...*?):([0-9]*):?([0-9]*)",
  "selector": "source.java"
}

```
