import requests
from bs4 import BeautifulSoup
import pandas as pd

# Read the URLs from the spreadsheet into a list
df = pd.read_excel('15000_urls.xlsx')
url_list = df['URL'].tolist()

# Initialize a list to store the og:image contents
og_images = []

# Loop through each URL and extract the og:image content
for url in url_list:
    response = requests.get(url)
    soup = BeautifulSoup(response.content, 'html.parser')
    meta_tags = soup.find_all('meta', {'property': 'og:image'})
    if meta_tags:
        og_image = meta_tags[0]['content']
    else:
        og_image = 'N/A'
    og_images.append(og_image)

# Create a new column in the dataframe for the og:image contents
df['og:image'] = og_images

# Write the updated dataframe to a new Excel file
df.to_excel('filename_updated.xlsx', index=False)
