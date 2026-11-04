// name: FUN_1001eafe3
// address: 1001eafe3

bool FUN_1001eafe3(void)

{
  char cVar1;
  
  if (DAT_1008a2b10 == '\0') {
    cVar1 = FUN_1001cd44e("base10-storage-sizes",1,0);
    DAT_1008a2b10 = (cVar1 == '\0') + '\x01';
  }
  return DAT_1008a2b10 == '\x01';
}

