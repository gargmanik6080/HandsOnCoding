'''import requests
from bs4 import BeautifulSoup


# Making a GET request
r = requests.get('https://www.geeksforgeeks.org/python-programming-language/')

# check status code for response received
# success code - 200
print(r)

# Parsing the HTML
soup = BeautifulSoup(r.content, 'html.parser')
s = soup.find('div', class_='entry-content')
content = s.find_all('p')
 
print(content)
# print(s)'''

import urllib.request

# URL of the web page to fetch
url = 'https://www.example.com'

try:
	# Open the URL and read its content
	response = urllib.request.urlopen(url)
	
	# Read the content of the response
	data = response.read()
	
	# Decode the data (if it's in bytes) to a string
	html_content = data.decode('utf-8')
	
	# Print the HTML content of the web page
	print(html_content)

except Exception as e:
	print("Error fetching URL:", e)
