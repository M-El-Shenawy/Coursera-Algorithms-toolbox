'''
Author: Mohamed Elshenawy
Date: 21/5/2017
'''

def get_change(m):
    n = int(0)
    while(m > 0):
        if(m >= 10):
            m -= 10
            n += 1
        elif(m < 10 and m > 4):
            m -= 5
            n += 1
        else:
            m -= 1
            n += 1
    return n


if __name__ == '__main__':
    m = int(input())
    print(get_change(m))
