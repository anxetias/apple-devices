// name: FUN_100267f12
// address: 100267f12

byte FUN_100267f12(char *param_1)

{
  byte bVar1;
  
  if (param_1[1] == '\0') {
    if (*param_1 == '\x02') {
      bVar1 = (param_1[5] == 'd') + 1;
    }
    else if (*param_1 == '\x01') {
      bVar1 = param_1[5] == 'd' ^ 3;
    }
    else {
      bVar1 = 0;
    }
  }
  else {
    bVar1 = 2;
    if (param_1[1] != '\x01') {
      bVar1 = 3;
      if (*param_1 != '\x01') {
        bVar1 = *param_1 == '\x02';
      }
    }
  }
  return bVar1;
}

