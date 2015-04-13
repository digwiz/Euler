#Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide #evenly into n).
#If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a #and b are called amicable numbers.
#
#For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; #therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = #220.
#
#Evaluate the sum of all the amicable numbers under 10000.


def sum_divisors(n):
    total = 0
    for i in range (1, n):
        if n % i == 0:
            total += i
        #print total
    return total
    
def amicable_pairs_xrange(low,high):
    L = [sum_divisors(i) for i in range(low,high + 1)]
    pairs = []
    for i in range(high - low + 1):
        ind = L[i]
        if i + low < ind and low <= ind and ind <= high and L[ind - low] == i + low:
            pairs.append([i+low,ind])
    return pairs
 
def sum_pairs(pairs):
    return sum([sum(pair) for pair in pairs])
    
def main():
    
    answer = sum_pairs(amicable_pairs_xrange(1,10000))
    print (answer)
    
if __name__ == "__main__":
    main()
