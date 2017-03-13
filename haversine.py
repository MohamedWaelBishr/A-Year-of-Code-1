from math import radians, cos, sin, asin, sqrt

def haversine(lon1, lat1, lon2, lat2):
    """
    Calculate the great circle distance between two points 
    on the earth (specified in decimal degrees)
    """
    # convert decimal degrees to radians 
    lon1, lat1, lon2, lat2 = map(radians, [lon1, lat1, lon2, lat2])

    # haversine formula 
    dlon = lon2 - lon1 
    dlat = lat2 - lat1 
    a = sin(dlat/2)**2 + cos(lat1) * cos(lat2) * sin(dlon/2)**2
    c = 2 * asin(sqrt(a)) 
    r = 6371 # Radius of earth in kilometers. Use 3956 for miles
    return c * r


print "\nEnter the first co-ordinates..\n"

lat1 = float(raw_input("latitude: "))
lon1 = float(raw_input("longitude: "))

print "\nEnter the second co-ordinates..\n"

lat2 = float(raw_input("latitude: "))
lon2 = float(raw_input("longitude: "))

print "\nCalculating Distance..\n"

distance = haversine(lon1, lat1, lon2, lat2)

print "\nDistance = " , distance , "\n"


