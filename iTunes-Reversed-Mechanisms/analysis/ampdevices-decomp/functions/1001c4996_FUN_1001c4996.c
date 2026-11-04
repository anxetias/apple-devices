// name: FUN_1001c4996
// address: 1001c4996

undefined8 FUN_1001c4996(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  char cVar1;
  undefined8 in_RAX;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined2 local_24 [2];
  
  local_24[0] = (undefined2)((ulong)in_RAX >> 0x20);
  lVar2 = FUN_1001c4798(param_1,"IOUSBDevice",param_2);
  if (lVar2 == 0) {
    return 0xe00002f0;
  }
  lVar3 = FUN_1001705e9(lVar2);
  lVar4 = FUN_100171f56();
  if (lVar3 == lVar4) {
    cVar1 = FUN_100172017(lVar2,3,local_24);
    if (cVar1 != '\0') {
      *param_3 = local_24[0];
      uVar5 = 0;
      goto LAB_1001c4a44;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7a58(uVar5);
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a79e2(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_1001c4a44:
  FUN_10017060f(lVar2);
  return uVar5;
}

