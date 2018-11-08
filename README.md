# Ros Docker container

**Install tutorial requires Ubuntu**

The catkin workspace is packaged along with a docker config to avoid dependency issues across systems.

## Running Locally
Commands
```bash
# Install Docker-CE 
https://docs.docker.com/install/linux/docker-ce/ubuntu/

# Install Docker-Compose 
https://docs.docker.com/compose/install/#install-compose

# Verify installation is active 
systemctl show --property ActiveState docker

# Pull package 
git clone https://github.com/csunfsae/jetsonTx2.git

# Change directory to jetsonTx2-master
cd jetsonTx2-master

# Build Docker environment (YOU ONLY NEED TO DO THIS ONCE)
sh createImage.sh

# Run Docker environment (RUN THIS EVERYTIME YOU NEED TO WORK)
sh runContainer.sh

```
**Now we can capable of editing files locally & running catkin workspace commands via terminal/docker**
