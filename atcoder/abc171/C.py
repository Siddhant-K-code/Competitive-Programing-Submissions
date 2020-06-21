import math
ALPHABET = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
result = []

def alphabet_decimal(v):
    quotient = math.floor(v / len(ALPHABET))
    surplus = v % len(ALPHABET)
    quotient -= 1 if surplus == 0 else 0
    surplus = len(ALPHABET) if surplus == 0 else surplus
    result.append(surplus)
    if len(ALPHABET) < quotient:
        alphabet_decimal(quotient)
    elif len(ALPHABET) < v:
        result.append(quotient)
    return "".join([ALPHABET[i - 1] for i in reversed(result)])

n = int(input())
#s = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
print(alphabet_decimal(n))