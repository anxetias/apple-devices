// name: FUN_10017049e
// address: 10017049e

bool FUN_10017049e(void)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = (int *)_CFDataGetBytePtr();
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 == 0x73696c61;
  }
  return bVar2;
}

