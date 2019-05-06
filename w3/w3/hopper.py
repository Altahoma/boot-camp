ll = [2**i for i in range(33)]
for i in range(33, 40):
    val = sum(ll[i-33:])
    ll.append(val)

print(ll[-1])
