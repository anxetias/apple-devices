// name: FUN_100167abd
// address: 100167abd

undefined1 FUN_100167abd(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  int iVar2;
  ulong in_RAX;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong local_18;
  
  if (param_3 == (ulong *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100674ff4(uVar3);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    local_18 = in_RAX;
    uVar3 = FUN_100166c1b();
    iVar2 = FUN_100167167(uVar3,&local_18,8,0);
    if (iVar2 == 8) {
      *param_3 = local_18 >> 0x38 | (local_18 & 0xff000000000000) >> 0x28 |
                 (local_18 & 0xff0000000000) >> 0x18 | (local_18 & 0xff00000000) >> 8 |
                 (local_18 & 0xff000000) << 8 | (local_18 & 0xff0000) << 0x18 |
                 (local_18 & 0xff00) << 0x28 | local_18 << 0x38;
      uVar4 = 1;
    }
    else {
      *param_3 = 0;
      uVar4 = 0;
    }
  }
  return uVar4;
}

