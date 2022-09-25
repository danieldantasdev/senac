# Python program to find MD5 hash value of a file
import hashlib

filename = "./img/ship.jpeg"
with open(filename,"rb") as f:
    bytes = f.read() # read file as bytes
    readable_hash = hashlib.md5(bytes).hexdigest();
    print(readable_hash)


filename = "./img/plane.jpeg"
with open(filename,"rb") as f:
    bytes = f.read() # read file as bytes
    readable_hash = hashlib.md5(bytes).hexdigest();
    print(readable_hash)