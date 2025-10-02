# This function asks the user to type some numbers and turns them into a list
def make_array():
    # Split input by spaces and convert each piece to an integer
    lst = list(map(int, input("\nEnter the list of integers: ").split()))
    return lst
    
# Bubble sort function: sorts a list in ascending order
def bubble_sort_array(arr):
    size = len(arr)
    # Go through the list multiple times
    for i in range(size):
        swapped = False  # We'll use this to see if we did any swaps in this round
        # Compare each pair of neighbors
        for j in range(0, size - i - 1):
            if arr[j] > arr[j+1]:  # If left is bigger than right, swap them
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        # If we didn't swap anything, the list is already sorted, no need to keep going
        if not swapped:
            break
    return arr
    
# Main function to run the sorting program once
def main():
    array = make_array()
    print(f"\nYour List: {array}\n")
    sorted_arr = bubble_sort_array(array)
    print(f"Sorted List: {sorted_arr}\n")
    
# Keep running the program until the user says they want to stop
while True:
    try:
        print("-"*10, "Welcome to Bubble Sort Array Program", "-"*10)
        main()
        # Ask if the user wants to continue
        choice = input("Wish to Continue? YES[1], NO[0]: ")
        if choice.strip() == "0":
            print("\nAlright, exiting. Thanks for using the Bubble Sort Program!\n")
            break
    except ValueError:
        # Handle the case where the user types something that isn't a number
        print("\nOops! Only integers are allowed. Try again.\n")
