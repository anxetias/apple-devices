// name: FUN_100179c47
// address: 100179c47

ulong FUN_100179c47(long param_1)

{
  char cVar1;
  ulong in_RAX;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_18;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100683df0(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    local_18 = in_RAX;
    FUN_1001c631b(param_1 + 8,&local_18,8);
    uVar3 = local_18 >> 0x38 | (local_18 & 0xff000000000000) >> 0x28 |
            (local_18 & 0xff0000000000) >> 0x18 | (local_18 & 0xff00000000) >> 8 |
            (local_18 & 0xff000000) << 8 | (local_18 & 0xff0000) << 0x18 |
            (local_18 & 0xff00) << 0x28 | local_18 << 0x38;
  }
  return uVar3;
}

