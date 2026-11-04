// name: FUN_10015f5bf
// address: 10015f5bf

undefined4 FUN_10015f5bf(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066e399(uVar3);
    }
  }
  else {
    if (param_3 != 0) {
      iVar2 = FUN_10015f645();
      if (iVar2 != 0) {
        return 0;
      }
      local_14 = (undefined4)((ulong)in_RAX >> 0x20);
      return local_14;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066e323(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

