lst = [('A101', 'Naman', 27), ('A104', 'Sourav', 47), ('A111', 'Dhruv', 19)]
nlst = [ ]
for ele in lst:
    nlst = nlst + [ele[1]]
print(nlst)
