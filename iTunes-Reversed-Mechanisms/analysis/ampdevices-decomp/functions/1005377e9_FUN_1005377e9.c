// name: FUN_1005377e9
// address: 1005377e9

bool FUN_1005377e9(void)

{
  char cVar1;
  
  if (DAT_1008c784c == '\0') {
    cVar1 = FUN_1001cd44e("read-only-library",0,0);
    DAT_1008c784c = (cVar1 == '\0') + '\x01';
  }
  return DAT_1008c784c == '\x01';
}

