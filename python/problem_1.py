#If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, #6 and 9. The sum of these multiples is 23.
#
#Find the sum of all the multiples of 3 or 5 below 1000.


#the next two lines of code are a clever but maybe overly complicated way to solve it

#import functools
#print(functools.reduce(lambda x,y: x+y, filter(lambda n: n%3==0 or n%5==0, range(1000))))

threes_and_fives = 0

for i in range(1, 1000):
    if i % 3 == 0 or i % 5 == 0:
        threes_and_fives += i
        
print(threes_and_fives)
