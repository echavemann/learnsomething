from linker import linkUtil 
import time
import random


def speedRun():
    start = time.time()
    n = 0
    while (time.time() - start) > 5:
        link()
        n = n+1
    return n

if __name__ == "__main__":
    print(f"Total operations completed: {speedRun()}")
