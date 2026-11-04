// name: FUN_1005d1376
// address: 1005d1376

uint FUN_1005d1376(char param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_stack_00000008;
  int iStack0000000000000010;
  long in_stack_00000018;
  long in_stack_00000020;
  int iStack0000000000000028;
  uint uStack000000000000002c;
  long in_stack_00000030;
  
  if ((_iStack0000000000000010 & 0x100000000) == 0) {
    return uStack000000000000002c & 1;
  }
  if ((_iStack0000000000000028 & 0x100000000) != 0) {
    if ((_iStack0000000000000010 & 0x400000000) != 0) {
      uStack000000000000002c = uStack000000000000002c & 4;
LAB_1005d13f6:
      return (uint)(uStack000000000000002c == 0);
    }
    if ((_iStack0000000000000028 & 0x400000000) == 0) {
      if ((_iStack0000000000000010 & 0x1000000000) != 0) {
        uStack000000000000002c = uStack000000000000002c & 0x10;
        goto LAB_1005d13f6;
      }
      if ((_iStack0000000000000028 & 0x1000000000) == 0) {
        if ((_iStack0000000000000010 & 0x800000000) != 0) {
          return ((uStack000000000000002c >> 3 & 1) != 0) - 1;
        }
        if ((_iStack0000000000000028 & 0x800000000) != 0) {
          return 1;
        }
        if (in_stack_00000030 < in_stack_00000018) {
          return 1;
        }
        if (in_stack_00000030 <= in_stack_00000018) {
          lVar5 = (long)iStack0000000000000010;
          lVar6 = (long)iStack0000000000000028;
          if (iStack0000000000000010 != iStack0000000000000028) {
            if (iStack0000000000000028 < iStack0000000000000010) {
              in_stack_00000020 = (in_stack_00000020 * lVar5) / lVar6;
            }
            else {
              in_stack_00000008 = (in_stack_00000008 * lVar6) / lVar5;
              lVar5 = lVar6;
            }
            if (param_1 == '\0') {
              lVar5 = 0;
            }
            else {
              iVar2 = (int)((ulong)(lVar5 * 0x10624dd3) >> 0x20);
              lVar5 = (long)(((iVar2 >> 6) - (iVar2 >> 0x1f)) * 0x32);
            }
            lVar4 = in_stack_00000008 - in_stack_00000020;
            bVar1 = lVar4 != 0 && in_stack_00000020 <= in_stack_00000008;
            lVar6 = -lVar4;
            if (-lVar4 < 0) {
              lVar6 = lVar4;
            }
            uVar3 = (bVar1 - 1) + (uint)bVar1;
            if (lVar6 <= lVar5) {
              uVar3 = 0;
            }
            return uVar3;
          }
          if (in_stack_00000020 <= in_stack_00000008) {
            return (uint)(in_stack_00000020 < in_stack_00000008);
          }
          return 0xffffffff;
        }
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}

