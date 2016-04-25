#include <iostream>
#include "readwriteosm.h"
#include "node.h"

int main() {
  std::cout << "hi" << std::endl;
  std::string address = "/Users/zia/Documents/Test/Rubbish/josm_selectednodes/itu_test_end.osm";
  ReadWriteOSM readwriteosm_obj;
  readwriteosm_obj.getMsg();
  // Node node;
  // node.setLat(21.01);
  // node.setLon(41.01);
  // std::cout << double(node.getLat()) << std::endl;
  // std::cout << node.getLon() << std::endl;
  return 0;
};
