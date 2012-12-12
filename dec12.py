a=[1,2,[3,4,5],6,7,[8,[9,10],11],12]
b=[]
def listoflist(r,dat=(list)):
	def list(r):
		for value in r:
			if isinstance(value, dat):
				list(value)
			else:    
				b.append(value)
	list(r)
	return b
print listoflist(a)
 

