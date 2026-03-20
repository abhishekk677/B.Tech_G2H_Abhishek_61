# Function to convert Celsius to Fahrenheit
def celsius_to_fahrenheit(celsius):
  """
  Converts a temperature from Celsius to Fahrenheit using the formula F = (C * 9/5) + 32.
  """
  fahrenheit = (celsius * 9/5) + 32
  return fahrenheit

# Main part of the program to accept user input and display the result
try:
  # Prompt the user to enter the temperature in Celsius
  celsius_input = input("Enter temperature in Celsius: ")
  
  # Convert the input string to a floating-point number to handle decimal values
  celsius_temp = float(celsius_input)
  
  # Call the conversion function
  fahrenheit_temp = celsius_to_fahrenheit(celsius_temp)
  
  # Display the result, formatted to two decimal places
  print(f"{celsius_temp:.2f} degrees Celsius is equal to {fahrenheit_temp:.2f} degrees Fahrenheit.")

except ValueError:
  # Handle cases where the user enters a non-numeric value
  print("Invalid input. Please enter a numerical value for the temperature.")
