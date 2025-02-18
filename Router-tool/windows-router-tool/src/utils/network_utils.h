#ifndef NETWORK_UTILS_H
#define NETWORK_UTILS_H

#include <string>
#include <vector>

// Function to scan for available networks
std::vector<std::string> scanNetworks();

// Function to connect to a specific router using its BSSID
bool connectToRouter(const std::string& bssid);

#endif // NETWORK_UTILS_H