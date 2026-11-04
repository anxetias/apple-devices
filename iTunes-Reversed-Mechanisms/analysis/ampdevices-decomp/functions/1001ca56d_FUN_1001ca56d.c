// name: FUN_1001ca56d
// address: 1001ca56d

int FUN_1001ca56d(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long local_20;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006acef6(uVar4);
    }
  }
  else {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      iVar3 = FUN_10015d28d(param_1,0x6e616d65,&local_20);
      if (iVar3 == -0x80) {
        return -0x80;
      }
      if (iVar3 == 0) {
        if (local_20 == 0) {
          return 0;
        }
        uVar1 = **(uint **)(local_20 + 0x20);
        *param_2 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                   - 0xc;
        return 0;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 == '\0') {
        return iVar3;
      }
      FUN_1006ace14(iVar3,uVar4);
      return iVar3;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006ace80(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

