def main():
    greeting = input(":) ")
    check(greeting)
    
def check(greeting):
    greeting = greeting.lower().lstrip().split(maxsplit=1)
    greeting_first_word = greeting[0]
    if greeting_first_word == "hello":
        print("0 $")
    elif greeting_first_word[0] == "h":
        print("20 $")
    else:
        print("100 $")        
        
main()
    