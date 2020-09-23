#!/usr/bin/env python

principal = 1000
rate = 0.05
numyears = 5
year = 1
# principal = 1000; rate = 0.05; numyears = 5; semiconlon can write same line

# python loop cognize its contents by indentation
# python don't regulate size of indentation just by remaining consistency
# In general, 4 size indentation recommand
while year <= numyears:
	principal = principal * (1 + rate) # At first, integer value stored but now real value stored.
	print year, principal
# print "%3d %0.2%" % (year, principal)
# print format(year, "3d"), format(principal,"0.2f")
# print "{0:3d}" {1:0.2f"}.format(year,principal)
	year += 1


