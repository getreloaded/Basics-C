def main():
    line = input("enter the line you want to slow down: ")
    slowdown(line)
    
def slowdown(text):
    text = print(f"{text.replace(' ', '...')}")

main()