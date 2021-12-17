// Using the bitwise operators
#include <iostream>
//#include <format>

int main()
{

//  10.1 => 1 0 1 0    1 byte = 8 bits. _ _ _ _ _ _ _ _ => 2^6 + 2^5 + ... + 1
//         4 bytes  = 32 bits
// Hexadecimal : 16 --> 0 - 9 a b c d e f
// red   = FF0000 = 111111110000000000000000
// white = FFFFFF = 111111111111111111111111
//    &   =         111111110000000000000000
//    |   =         111111111111111111111111                                                              
//



  const unsigned int red { 0xFF0000u };  // Color red: RGB (125,255,0)
  const unsigned int white{ 0xFFFFFFu }; // Color white - RGB all maximum

  std::cout << "Try out bitwise complement, AND and OR operators:\n";
  std::cout << "Initial value:       red = "<< std::hex << red  << std::endl;
  std::cout << "Complement:         ~red = "<< ~red << std::endl;

  std::cout << "Initial value:     white = "<< white  << std::endl;
  std::cout << "Complement:       ~white = "<< ~white << std::endl;

  std::cout << "Bitwise AND: red & white = "<< (red & white) << std::endl;
  std::cout << "Bitwise  OR: red | white = "<< (red | white) << std::endl;

  std::cout << "\nNow try successive exclusive OR operations:\n";
  unsigned int mask{ red ^ white };
  std::cout << "mask = red ^ white = " << std::hex << mask << std::endl;
  std::cout << "        mask ^ red = " << (mask ^ red) << std::endl;
  std::cout << "       mask ^ white = " << (mask ^ white) << std::endl;

  // unsigned int flags{ 0xFF };            // Flags variable
  // unsigned int bit1mask{ 0x1 };          // Selects bit 1
  // unsigned int bit6mask{ 0b100000 };     // Selects bit 6
  // unsigned int bit20mask{ 1u << 19 };    // Selects bit 20

  // std::cout << "Use masks to select or set a particular flag bit:\n";
  // std::cout << std::format("Select bit 1 from flags  : {:08X}\n", flags & bit1mask);
  // std::cout << std::format("Select bit 6 from flags  : {:08X}\n", flags & bit6mask);
  // std::cout << std::format("Switch off bit 6 in flags: {:08X}\n", flags &= ~bit6mask);
  // std::cout << std::format("Switch on bit 20 in flags: {:08X}\n", flags |= bit20mask);
}
