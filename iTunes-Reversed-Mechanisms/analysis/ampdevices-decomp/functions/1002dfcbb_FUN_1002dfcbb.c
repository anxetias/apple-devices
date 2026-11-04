// name: FUN_1002dfcbb
// address: 1002dfcbb

char FUN_1002dfcbb(uint param_1,char param_2)

{
  char cVar1;
  
  cVar1 = '\b';
  if (((((param_1 & 4) == 0) && (cVar1 = '\t', (param_1 >> 0x15 & 1) == 0)) &&
      (cVar1 = '\a', (param_1 & 8) == 0)) && (cVar1 = '\x05', (param_1 >> 0x16 & 1) == 0)) {
    if ((param_1 >> 0x17 & 1) == 0) {
      cVar1 = '\n';
      if ((((((param_1 & 0x10) == 0) && (cVar1 = '\x04', (param_1 & 0x40) == 0)) &&
           ((cVar1 = '\x03', (param_1 & 2) == 0 &&
            ((cVar1 = '\x01', (param_1 & 1) == 0 && (cVar1 = '\x02', (param_1 & 0x20) == 0)))))) &&
          (cVar1 = '\v', (param_1 >> 0x11 & 1) == 0)) &&
         ((cVar1 = '\f', (param_1 >> 0x12 & 1) == 0 && (cVar1 = '\r', param_1 == 0)))) {
        cVar1 = '\x01';
      }
    }
    else {
      cVar1 = (-1 < param_2) + '\x05';
    }
  }
  return cVar1;
}

