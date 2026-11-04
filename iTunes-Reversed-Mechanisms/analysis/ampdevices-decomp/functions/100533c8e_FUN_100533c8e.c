// name: FUN_100533c8e
// address: 100533c8e

undefined8 FUN_100533c8e(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1008c2125 == '\0') {
    DAT_1008c2125 = '\x01';
    cVar1 = FUN_1001cd44e("limit-path-length",0,0);
    if (cVar1 != '\0') {
      DAT_1008c2124 = '\x01';
    }
  }
  uVar2 = 0x28;
  if (DAT_1008c2124 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

