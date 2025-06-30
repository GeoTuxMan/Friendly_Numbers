# Friendly_Numbers
Check if two numbers are friendly
Friendly numbers are numbers that share the same abundancy index, meaning the ratio of the sum of their divisors to the number itself is equal.
E.g.: 30 and 140, 6 and 28
S(30)/30 = (1+2+3+5+6+10+15+30)/30 = 72/30 = 12/5
$(140)/140 = (1+2+4+5+7+10+14+20+28+35+70+140)/140 = 336/140 = 12/5

Compile: g++ -Wall -o frnumber Friendly_Numbers.cpp
Run: ./frnumber
