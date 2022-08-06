# https://www.hackerrank.com/challenges/reverse-shuffle-merge/problem?isFullScreen=false

#!/bin/python3
 
import math
import os
import random
import re
import sys
from collections import Counter
#
# Complete the 'reverseShuffleMerge' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#
 
def reverseShuffleMerge(s):
    s=s[::-1]
    unused={}
    used={}
    required={}
    stack=[]
 
    unused=Counter(s)
    for ch in unused:
        used[ch]=0
        required[ch]=unused[ch]//2
    print(used)
    print(unused)
    print(required)
    for i in s:
        if required[i]>0:
            if len(stack)==0:
                stack.append(i)
                used[i]+=1
                unused[i]-=1
                required[i]-=1
            else:
                while (len(stack)>0 and ord(stack[-1])>ord(i)):
                    if unused[stack[-1]]>required[stack[-1]]:
                        ch=stack.pop()
                        used[ch]-=1
                        required[ch]+=1
                    else:
                        stack.append(i)
                        used[i]+=1
                        unused[i]-=1
                        required[i]-=1
                        break
                else:
                    stack.append(i)
                    used[i]+=1
                    unused[i]-=1
                    required[i]-=1
        else:
            unused[i]-=1
    return ("".join(stack))
 
 
 
 
    # Write your code here
 
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
 
    s = input()
 
    result = reverseShuffleMerge(s)
 
    fptr.write(result + '\n')
 
    fptr.close()
