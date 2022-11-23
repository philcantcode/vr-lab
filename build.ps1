$ErrorActionPreference = "Stop"

# This script is used for pushing the containers to azure remotely
# It automatically builds the api-server and runs it as the entry point

# Locally build the api and web server and then push to azure
docker context use default

docker compose -f docker-compose.yaml down 
docker build -t lab/latest ./lab

docker compose -f docker-compose.yaml up -d
docker exec -it vr-lab-lab-1 /bin/bash