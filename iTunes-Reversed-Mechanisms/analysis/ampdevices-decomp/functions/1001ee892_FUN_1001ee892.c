// name: FUN_1001ee892
// address: 1001ee892

int FUN_1001ee892(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  DAT_1008a2b48 = 0;
  iVar2 = FUN_1001e9c3e(&DAT_1008c5428);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1001c0fbe(FUN_1001ee8fe,0,0,0,0);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c56fa(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

