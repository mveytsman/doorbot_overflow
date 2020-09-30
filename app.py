from flask import Flask, request
import subprocess
import joblib 
import os

app = Flask(__name__)

@app.route("/")
def hello():
    return """
    /* here the render template is missing please attach a new render template */
<html>
<body>
Hi, enter a password to unlock the door
<form action="/unlock" method="get">
<input type="text" name="password">
<input type="submit">
</form>
</body>
</html>
"""

@app.route("/unlock")
def unlock():
    password = request.args.get('password', '')
    result = subprocess.check_output("echo {0} | ./doorbot; exit 0".format(password), shell=True, stderr=subprocess.STDOUT)
    result = result.replace("\n","<br>")
    return result


if __name__ == "__main__":
    app.run(host='0.0.0.0', debug=True)
    
