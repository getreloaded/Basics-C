def main():
    camel_case_string = input("camelCase: ")
    snake_case_string = convert_case(camel_case_string)
    print("sanke_case:", snake_case_string)
    
def convert_case(string):
    string_new = ""
    for c in string:
        if(c.isupper()):
            c = "_" + c.lower()
        string_new = string_new + c 
    return string_new
            
main()