// name: FUN_1001e20df
// address: 1001e20df

uint FUN_1001e20df(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  uint local_14;
  
  if (param_1 == (byte *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bbdad(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    bVar1 = *param_1;
    if ((ulong)bVar1 != 0) {
      uVar5 = 0;
      do {
        bVar6 = 0x20;
        if (uVar5 < bVar1) {
          bVar2 = param_1[uVar5 + 1];
          bVar6 = bVar2 - 0x20;
          if (0x19 < (byte)(bVar2 + 0x9f)) {
            bVar6 = bVar2;
          }
        }
        *(byte *)((long)&local_14 + uVar5) = bVar6;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 4);
      local_14 = (uint)((ulong)in_RAX >> 0x20);
      return local_14 >> 0x18 | (local_14 & 0xff0000) >> 8 | (local_14 & 0xff00) << 8 |
             local_14 << 0x18;
    }
  }
  return 0;
}

