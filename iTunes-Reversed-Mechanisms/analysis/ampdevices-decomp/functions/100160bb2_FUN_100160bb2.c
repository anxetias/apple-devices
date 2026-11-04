// name: FUN_100160bb2
// address: 100160bb2

int FUN_100160bb2(undefined8 param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong local_38;
  
  if (param_2 != 0) {
    do {
      local_38 = 0x1000;
      if (param_2 < 0x1000) {
        local_38 = param_2;
      }
      iVar2 = FUN_100160894(param_1,&local_38,&DAT_10070c390);
      if (iVar2 != 0) {
        if (iVar2 == -0x80) {
          return -0x80;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_10066f1eb(iVar2,uVar3);
        return iVar2;
      }
      param_2 = param_2 - local_38;
    } while (param_2 != 0);
  }
  return 0;
}

