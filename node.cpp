#include <iostream>
#include "node.h"

void Node::setLat(double lat_arg) {
  lat = lat_arg;
};

void Node::setLon(double lon_arg) {
  lon = lon_arg;
};

double Node::getLat() {
  return lat;
};

double Node::getLon() {
  return lon;
};
