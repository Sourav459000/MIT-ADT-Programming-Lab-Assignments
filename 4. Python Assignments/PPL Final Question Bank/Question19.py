import os
import time

file = 'sampledata'
print(file)

created = os.path.getctime(file)
modified = os.path.getmtime(file)
accessed = os.path.getatime(file)

print('Date created: ' + time.ctime(created))
print('Date modified: ' + time.ctime(modified))
print('Date accessed: ' + time.ctime(accessed))
