 # Each word in the string is reversed using this function.
def reverse_word(s, start, end):

    while start < end:
        s[start], s[end] = s[end], s[start]

        start = start + 1
        end -= 1
 
 
s = "Browns are going to the superbowl"
 
# To utilize a string as a char array, convert it to a list.
s = list(s)

start = 0

while True:
     
     # Because the last word is on the list, we use a try catch block. Because it cannot find a space in the list, the index() function throws a ValueError.
    try:

      # Find the next spaceLocate the next available space.
        end = s.index(' ', start)
 

        # To reverse each word, use the reverse word function.
        reverse_word(s, start, end - 1)
 

        # Variable start should be updated.
        start = end + 1
 
    except ValueError:
 
        # Reverse the last word
        reverse_word(s, start, len(s) - 1)

        break
 

 # Reverse the order of the list.
s.reverse()
 

# Using the string.join() function, convert the list back to a string.
s = "".join(s)

 
print(s)