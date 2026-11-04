// name: FUN_1001c4d49
// address: 1001c4d49

int FUN_1001c4d49(int *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined1 param_5
                 )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d656d62)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7e0a(uVar3);
    }
  }
  else {
    iVar2 = FUN_1001c4c19(param_1);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006a7cb2(iVar2,uVar3);
      return iVar2;
    }
    if (*(long *)(param_1 + 0xc) == 0) {
      lVar4 = FUN_1001c4e6e(param_1,param_2,param_3);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x20) = param_5;
        *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + param_4;
        return 0;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a7d94(uVar3);
      }
      FUN_1001782e9(0,0);
      return -0x6c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7d1e(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

