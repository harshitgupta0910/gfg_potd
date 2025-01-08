class Solution:
    def countTriangles(self, arr):
        arr.sort()
        n = len(arr)
        count = 0

        for i in range(n - 2):
            for j in range(i + 1, n - 1):
                k = j + 1
                while k < n and arr[i] + arr[j] > arr[k]:
                    k += 1
                count += k - j - 1

        return count
