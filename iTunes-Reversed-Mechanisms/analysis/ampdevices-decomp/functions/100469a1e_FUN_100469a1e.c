// name: FUN_100469a1e
// address: 100469a1e

undefined8 FUN_100469a1e(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffd96e;
  if ((param_1 == 0x5574696c) && (uVar3 = 0, param_2 == 0x446c7941)) {
    FUN_100178be7();
    cVar1 = FUN_1001c19b0();
    if (cVar1 != '\0') {
      iVar2 = FUN_100178bf5(0,0);
      uVar3 = 0;
      if (iVar2 != 0) {
        FUN_100207cee(2);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

