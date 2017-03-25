#ifndef WORLD_HPP
#define WORLD_HPP

#include <string>
#include <map>
#include <wonder/Room.hpp>

namespace wonder {
  class Room;
  class World {
  public:
    World();
    std::map<std::string, Room> roomMap;
    std::string currentRoom;
    std::string lastUserInput;
  };

} /* namespace wonder */

#endif /* WORLD_HPP */