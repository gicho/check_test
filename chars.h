#pragma once

namespace shell {

enum class SpecialChars : char {
  kIac = -1,          
  kEOT = 0x04,        
  kCr = 0x0D,         
  kEsc = 0x1B,        
  kBackspace = 0x08,  
  kCursor = '#'
};

}  // namespace shell
