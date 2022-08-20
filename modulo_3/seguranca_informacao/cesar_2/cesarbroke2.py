import json
from difflib import get_close_matches
data = json.load(open("./dictionary.json"))
message = 'xli uymgo fvsar jsb nyqtw sziv xli pedc hsk' #encrypted message
LETTERS = 'abcdefghijklmnopqrstuvwxyz'
for key in range(1, len(LETTERS)):
    translated = ''
    for symbol in message:
        if symbol in LETTERS:
            num = LETTERS.find(symbol)
            num = num - key
            if num < 0:
                num = num + len(LETTERS)
            translated = translated + LETTERS[num]
        else:
            translated = translated + symbol
    words = translated.split()
    i=1
    for word in words:        
      if word in data:
        i=i+1 
    if i==len(words): 
       print('Hacking key #%s: %s' % (key, translated))   