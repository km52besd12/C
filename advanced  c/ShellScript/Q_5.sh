#5. How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."
#
#!/bin/bash
SAFFRON='\033[38;2;255;153;51m' #SAFFRON COLOR
WHITE='\033[38;2;255;255;255m'  #WHITE COLOR
GREEN='\033[38;2;18;136;7m' #GREEN COLOR
NC='\033[0m' #NO COLOR[BY DEFAULT BLACK COLOR]
echo -e "${SAFFRON}\033[1;5mIndia ${WHITE}is My ${GREEN}Country${NC}"

