import sys  #sys module load 
 
if len(sys.argv) != 2 :    #check the number of argv 
	print "Please supply a filename"
	raise SystemExit(1)

f = open(sys.argv[1])     
line = f.readlines()   # read all lines with list
f.close()


#change all inputs(string) to float

fvalues = [float(line) for line in lines] #list comprehension
#fvalues = [float(line) for in open(sys.argv[1]))] 7:14 line can compress just one line.


#print max,min val

print "The minimum value is ", min(fvalues)
print "The maximum value is ", max(fvalues)



