from dataclasses import replace


def main():
    text = input("input your text: ")
    new_text = faces(text)
    print(new_text)


def faces(line):
    line = line.replace(':)', ' 🙂 ').replace(":(", "🙁")
    return line
    
main()
