// name: FUN_10031f8a3
// address: 10031f8a3

char FUN_10031f8a3(uint param_1)

{
  char cVar1;
  
  if ((short)param_1 < 0) {
    cVar1 = '\x10' - ((param_1 & 0x40) == 0);
  }
  else {
    cVar1 = '\x06';
    if ((((((param_1 & 0x20) == 0) && (cVar1 = '\x01', (param_1 & 1) == 0)) &&
         (cVar1 = '\t', (param_1 & 2) == 0)) &&
        ((cVar1 = '\n', (param_1 & 0x40) == 0 && (cVar1 = '\x02', (param_1 & 8) == 0)))) &&
       ((cVar1 = '\x19', (param_1 >> 0x16 & 1) == 0 &&
        ((cVar1 = '\x05', (param_1 & 0x10) == 0 && (cVar1 = '\x1a', (param_1 >> 0x17 & 1) == 0))))))
    {
      cVar1 = '\r';
      if ((param_1 >> 8 & 1) == 0) {
        cVar1 = '\0';
      }
    }
  }
  return cVar1;
}

