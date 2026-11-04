// name: FUN_1001a26f5
// address: 1001a26f5

undefined1 FUN_1001a26f5(long param_1,undefined8 param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint local_30;
  uint local_2c;
  
  if (param_3 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10069c582(uVar3);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_1001a27c9(param_1,param_2,&local_30,&local_2c);
    if (cVar2 == '\0') {
      *param_3 = 0;
      uVar4 = 0;
    }
    else {
      if (param_4 <= local_2c) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_10069c50c(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      uVar1 = param_4 - 1;
      if (local_2c < param_4 - 1) {
        uVar1 = local_2c;
      }
      _memcpy(param_3,(void *)(param_1 + (ulong)local_30),(ulong)uVar1);
      param_3[uVar1] = 0;
      uVar4 = 1;
    }
  }
  return uVar4;
}

