import json

def main():
    for i in range(100000):
        with open("test.json", 'r') as file:
          data = json.load(file)
        wealth_str = data['user']['wealth']
        wealth = float(wealth_str)
    print("OK")

if __name__ == '__main__':
    main()
