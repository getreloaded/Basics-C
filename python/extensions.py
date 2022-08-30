ext = input("File name: ")

ext = ext.rsplit(maxsplit = 1, sep = ".")

# ext_type = ext[1]

match ext[1]:
    case "jpg" | "jpeg":
        print("image/jpeg")
    case _:
        print("application/octet-stream")
        
    