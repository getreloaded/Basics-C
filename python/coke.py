def main():
    coke_price = 50
    amount_due(coke_price)

def amount_due(price):
    cents = 0
    
    #is there enough money to buy a can?
    while cents < price:
        print("Amount due:", price - cents)
        coin = int(input("Insert coin: "))
        
        # check whether the denominaiton is allowed, if yes, add it to the amount paid.
        while (valid_denomination(coin)):
            cents = cents + coin
            break
    print("Change owed:", cents - price)
    
def valid_denomination(coin):
    if coin in [5,10,25]:
        return coin
    else:
        return 0
    
main()