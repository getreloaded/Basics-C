def main():
    mass = int(input("enter the mass of the object in kilograms: "))
    energy = int(genrel(mass))
    print(f"The energy in the object in joules is: {energy} J")
    
def genrel(mass):
    energy = mass * 300000000
    return energy

main()