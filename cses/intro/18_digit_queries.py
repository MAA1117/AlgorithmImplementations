def find_digit(k):
    current_length = 1
    digits_processed = 0
    while True:
        numbers_in_segment = 9 * (10 ** (current_length - 1))
        segment_length = numbers_in_segment * current_length
        if k <= digits_processed + segment_length:
            k -= digits_processed
            number_index = (k - 1) // current_length
            digit_index = (k - 1) % current_length
            number = (10 ** (current_length - 1)) + number_index
            return str(number)[digit_index]
        digits_processed += segment_length
        current_length += 1

def main():
    q = int(input())
    queries = [int(input()) for _ in range(q)]
    results = [find_digit(k) for k in queries]
    for result in results:
        print(result)

main()
