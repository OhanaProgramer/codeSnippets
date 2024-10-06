"""
File Name: keyboard_input.py
Description: Continuously checks for keyboard input and prints it to the terminal.
Author: Jacque Wilson
Date Created: 2024-06-15
Python Version: 3.11
List of Operations:
1. Imports the keyboard module.
2. Defines a function to print key events.
3. Uses a while True loop to check for keyboard input.
"""

import py.keyboard as keyboard

def print_key_event(event):
    """
    Prints the key event to the terminal.
    
    Args:
        event (keyboard.KeyboardEvent): The keyboard event.
    """
    print(f"Key: {event.name}")

print("Press ESC to exit...")

# Start a while True loop to check for keyboard input
while True:
    # Listen for key press events and call the print_key_event function
    event = keyboard.read_event(suppress=True)
    if event.event_type == keyboard.KEY_DOWN:
        print_key_event(event)
        if event.name == "esc":
            break

"""
Example Output:
Key: a
Key: b
Key: c
Key: esc
"""
