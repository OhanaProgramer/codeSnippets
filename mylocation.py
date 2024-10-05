import requests

# Get public IP address
ip_response = requests.get('https://api.ipify.org?format=json')
ip_data = ip_response.json()
ip_address = ip_data['ip']

# Get location based on IP address
location_response = requests.get(f'https://ipapi.co/{ip_address}/json/')
location_data = location_response.json()

# Extract relevant location information
country = location_data.get('country_name', 'Unknown')
region = location_data.get('region', 'Unknown')
city = location_data.get('city', 'Unknown')

# Print the location information
print(f"IP Address: {ip_address}")
print(f"Location: {city}, {region}, {country}")

# Verify if the location is in the US
if country == 'United States':
    print("You are in the United States.")
else:
    print("You are not in the United States.")
