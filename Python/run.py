def findMinRec(arr, i, sumCalculated1, sumCalculated2, sumCalculated3, sumTotal):
 
    if (i == 0):
        return abs(sumCalculated1 - sumCalculated2) + abs(sumCalculated2 - sumCalculated3) + abs(sumCalculated1 - sumCalculated3)

    return min(findMinRec(arr, i - 1, sumCalculated1+arr[i - 1], sumCalculated2, sumCalculated3, sumTotal),
               findMinRec(arr, i - 1, sumCalculated1, sumCalculated2+arr[i - 1], sumCalculated3, sumTotal),
               findMinRec(arr, i - 1, sumCalculated1, sumCalculated2, sumCalculated3+arr[i - 1], sumTotal))
 
def findMin(arr,  n):
 
    sumTotal = 0
    for i in range(n):
        sumTotal += arr[i]
 
    return findMinRec(arr, n,
                      0, 0, 0, sumTotal)
 
t = int(input())

while t > 0:
    n = input()
    inp = input()
    arr = [ int(x) for x in inp.split(" ")]
    print(findMin(arr, len(arr)))