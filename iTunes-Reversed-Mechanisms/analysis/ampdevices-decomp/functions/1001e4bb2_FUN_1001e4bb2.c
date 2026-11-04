// name: FUN_1001e4bb2
// address: 1001e4bb2

undefined8 FUN_1001e4bb2(char *param_1,undefined2 *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 local_1c [2];
  
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006be140(uVar3);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != (char *)0x0) {
      if (*param_1 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          lVar1 = uVar4 + 1;
          uVar4 = uVar4 + 1;
        } while (param_1[lVar1] != '\0');
      }
      uVar5 = uVar4 & 0xffffffff;
      if (0xfe < (uint)uVar4) {
        uVar5 = 0xff;
      }
      uVar3 = FUN_1001e70e7(param_1,uVar5,param_2 + 1,0xff,local_1c);
      *param_2 = local_1c[0];
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006be0ca(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

