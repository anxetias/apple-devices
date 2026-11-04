// name: FUN_10019cb0d
// address: 10019cb0d

int FUN_10019cb0d(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_10016443b();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_1001e9c3e(&DAT_100890710);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = 0;
          DAT_100890758 = FUN_1001ed73c(0,0);
          FUN_1001c0fbe(FUN_10019cbb9,0,0,0,0);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_100699e58(iVar2,uVar3);
          }
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100699ec4(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

