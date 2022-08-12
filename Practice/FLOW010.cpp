t = raw_input()
t=int(t)

while t > 0:
	c=raw_input()
	c=c.lower()
	if(c=='b'):
		print "BattleShip"
	elif(c=='c'):
		print "Cruiser"
	elif(c=='d'):
		print "Destroyer"
	else:
		print "Frigate"
	t=t-1	
