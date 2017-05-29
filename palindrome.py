word = str(raw_input(""))
is_palindrome = word.find(word[::-1])
if is_palindrome == 0:
    print True
else:
    print False
