# Adds a welcome message to the string
# returned by fun(). Takes fun() as
# parameter and returns welcome().
def decorate_message_test(fun):
 
    # Nested function
    def addWelcome(user_name):
        return "Welcome, " + fun(user_name)
 
    # Decorator returns a function
    return addWelcome
 
@decorate_message_test
def user(user_name):
    return user_name;
 
# Driver code
 
# This call is equivalent to call to
# decorate_message() with function
# site("GeeksforGeeks") as parameter
print user("Rashad")
