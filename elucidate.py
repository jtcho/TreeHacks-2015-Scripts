
#Elucidate
#Find the GCD of each tuple in alg1.txt and compute the LCM of these GCDs.
#Author Note: The *only* time I use Python is for these Hackathon
#puzzles. I swear.

from ast import literal_eval
from fractions import gcd

result = []
gcds = []

f = open('alg1.txt', 'r')

#Build array of tuples.
for line in f:
    result.extend(literal_eval(line.strip()))

"""
Function: my_gcd
Calculates GCD of a tuple.
"""
def my_gcd(tu):
    gc = tu[0]
    for i in range(1, len(tu)):
        gc = gcd(gc, tu[i])
    return gc

"""
Function: lcm
Calculates the LCM of a pair of numbers.
"""
def lcm(a, b):
    return a * b // gcd(a, b)

"""
Function: lcm_many
Calculates the LCM of a list of numbers.
"""
def lcm_many(*args):
    return reduce(lcm, args)

#Calculate GCDs of all the tuples.
for tu in result:
    gcds.append(my_gcd(tu))

#Unpack argument lists.
print lcm_many(*gcds)

