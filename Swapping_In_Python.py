print("\t\t <- To Swap Two Numbers -> \n\t\t ************************* ")
a = int(input("Enter 1 number : "))
b = int(input("Enter 2 number : "))
print("Befor Swapping : \n\t a = ", a, "\tb = ", b)
print("\tAddress of variable a = ", id(a), "\n\tAddress of variable b = ", id(b))

'''
# Method-1 : By Using Third [Temprary] Variable
t = a
a = b
b = t
print("After Swapping : \n\t a = ", a, "\tb = ", b)

'''

'''

# Method-2 : Without Using Third Variable
a, b = b, a 
print("After Swapping : \n\t a = ", a, "\tb = ", b)

'''

# Method-3 : Without Using any Function
a = a + b
b = a - b
a = a - b
print("After Swapping : \n\t a = ", a, "\tb = ", b)
print("\tAddress of variable a = ", id(a), "\n\tAddress of variable b = ", id(b))