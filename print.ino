void prints(int8_t x, uint8_t y, const char *message, bool inv) {
  font3x5.setCursor( x*4+1, y*7 );
  if(inv == 0){
    font3x5.setTextColor(WHITE);
    font3x5.print( message );
  } else {
    arduboy.fillRect( x*4, y*7, strlen(message)*4+1, 7,WHITE);
    font3x5.setTextColor(BLACK);
    font3x5.print( message );
  }
}

void prints(int8_t x, uint8_t y, int d, bool inv){
  font3x5.setCursor( x*4+1, y*7 );
  if(inv == 0){
    font3x5.setTextColor(WHITE);
    font3x5.print( d );
  } else {
    arduboy.fillRect( x*4, y*7, intlen( d )*4+1, 7,WHITE);
    font3x5.setTextColor(BLACK);
    font3x5.print( d );
  }
}

// calculates the length of an integer by number of digits
// ie, 12345 => 5
uint8_t intlen(int num) {
  uint8_t ans = 1;
  while (num > 10) {
    ans++;
    num /= 10;
  }
  return ans;
}
