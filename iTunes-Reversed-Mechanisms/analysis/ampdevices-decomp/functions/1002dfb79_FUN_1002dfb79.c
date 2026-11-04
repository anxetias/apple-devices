// name: FUN_1002dfb79
// address: 1002dfb79

bool FUN_1002dfb79(void)

{
  char cVar1;
  
  if (DAT_1008bbf98 == '\0') {
    cVar1 = FUN_1001cd44e("compilation-album-sorting",0,0);
    DAT_1008bbf98 = (cVar1 == '\0') + '\x01';
  }
  return DAT_1008bbf98 == '\x01';
}

