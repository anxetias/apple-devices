// name: FUN_1001e10a2
// address: 1001e10a2

long FUN_1001e10a2(long param_1,ulong param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  
  param_2 = param_2 & 0xffffffff;
  lVar3 = 1;
  lVar2 = 0;
  do {
    if ((int)param_2 < 1) {
      return lVar2;
    }
    uVar1 = *(ushort *)(param_1 + -2 + param_2 * 2);
    uVar5 = uVar1 - 0x20;
    if (0x19 < (ushort)(uVar1 - 0x61)) {
      uVar5 = uVar1;
    }
    if ((ushort)(uVar5 - 0x30) < 10) {
      uVar4 = uVar5 - 0x30;
LAB_1001e10eb:
      lVar2 = lVar2 + (ulong)uVar4 * lVar3;
      lVar3 = lVar3 << 4;
    }
    else if ((ushort)(uVar5 - 0x41) < 6) {
      uVar4 = uVar5 - 0x37;
      goto LAB_1001e10eb;
    }
    param_2 = param_2 - 1;
    if (lVar3 == 0) {
      return lVar2;
    }
  } while( true );
}

