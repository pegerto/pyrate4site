from pyrate4site import rate4site

res = rate4site("test.msa")
print(res)
print(type(res))


# With output tree
rate4site("test.msa", "test.tree")

