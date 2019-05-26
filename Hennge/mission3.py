import requests
import json

def main(){
  hennge = {
   "github_url": "https://gist.github.com/nemzutkovic/8d24ebe8f81546cc811c8fc91bdcbb6d",
   "contact_email": "nem@zutkovic.com"
  }

  endpoint    = "https://hdechallenge-solve.appspot.com/challenge/003/endpoint"
  userid      = "nem@zutkovic.com"
  token       = "nem@zutkovic.comHDECHALLENGE003"
  headers     = {'Content-Type': 'application/json'}

  password = generatePassword()
  resp = requests.post(endpoint, data=json.dumps(hennge), auth=(userid, password))
}

def generatePassword(){
  
}

#main()