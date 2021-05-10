# CommunicationNetworksProtocols
C++ based simulation of the following communication protocols
1. Stop and Wait ARQ
2. Go Back N ARQ
3. Selective Repeat ARQ
4. CSMA/CA

## Build Instructions
1. `cd ~/`
2. `git clone https://github.com/Shanki5/CommunicationNetworksProtocols.git`
3. `cd ~/CommunicationNetworksProtocols/C++/build`
4. `cmake make -DCMAKE_BUILD_TYPE=Debug .. && make -j 4`

## Run Example

1. `./csmaCA`
2. `./goBackN`
