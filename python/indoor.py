def main():
    text = input("Type the text you want to convert to lowercase:")
    text = lowercase(text)
    print(text)
    
def lowercase(sentence):
    sentence = sentence.lower()
    return sentence

main()