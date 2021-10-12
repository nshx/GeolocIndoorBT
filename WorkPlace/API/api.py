# coding: utf-8
"""Universal encoding."""

from flask import jsonify, request
from geo_const import BEACONS

app = flask.Flask(__name__)
app.config["DEBUG"] = True

# GET PUT POST DELETE

@app.route('/', methods=['GET'])
def home():
    """HomePage."""
    return (
        "<h1>Module SE931 – MiniProjet Géolocalisation Radio SEE5</h1>"
        "<p>This site is a prototype API for geolocalisation.</p>"
    )

@app.route('/api/v1/beacons/all', methods=['GET'])
def api_all():
    """Return the whole data."""
    return jsonify(BEACONS)

@app.route('/api/v1/beacons', methods=['GET'])
def api_id():
    """Search for a specific ID and return the associated dict."""
    # Check if an ID was provided as part of the URL.
    # If ID is provided, assign it to a variable.
    # If no ID is provided, display an error in the browser.
    if 'id' in request.args:
        id = int(request.args['id'])
    else:
        return "Error: No id field provided. Please specify an id."

    # Create an empty list for our results
    results = []

    # Loop through the data and match results that fit the requested ID.
    # IDs are unique, but other fields might return many results
    for beacon in BEACONS:
        if beacon['id'] == id:
            results.append(beacon)

    # Use the jsonify function from Flask to convert our list of
    # Python dictionaries to the JSON format.
    return jsonify(results)

app.run()
