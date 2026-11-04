// name: FUN_1001ce557
// address: 1001ce557

int FUN_1001ce557(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *in_R8;
  
  if (in_R8 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006af9b0(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    *in_R8 = 0;
    iVar3 = FUN_1001ce017();
    if (iVar3 == 0) {
      uVar4 = FUN_100170f3b(0);
      iVar3 = FUN_100170ef7(0);
      sVar2 = _PtrToHand(uVar4,in_R8,(long)iVar3);
      iVar3 = (int)sVar2;
    }
    FUN_10017060f(0);
  }
  return iVar3;
}

