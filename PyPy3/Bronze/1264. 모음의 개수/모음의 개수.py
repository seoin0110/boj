sentense = input().lower()
while sentense != '#':
    print(sentense.count('a')+sentense.count('e')+sentense.count('o')+sentense.count('i')+sentense.count('u'))
    sentense = input().lower()