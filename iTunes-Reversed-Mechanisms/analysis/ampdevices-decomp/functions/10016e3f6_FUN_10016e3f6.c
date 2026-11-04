// name: FUN_10016e3f6
// address: 10016e3f6

byte * FUN_10016e3f6(undefined2 *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_3 + param_2;
  if ((int)uVar4 < 0x16 && -1 < param_3) {
    if (param_3 != 0) {
      uVar5 = param_2 + 1;
      if ((int)(param_2 + 1) < (int)uVar4) {
        uVar5 = uVar4;
      }
      _memset((void *)((long)(int)param_2 + (long)param_1),0x30,(ulong)(~param_2 + uVar5) + 1);
    }
    *(undefined2 *)((long)param_1 + (long)(int)uVar4) = 0x302e;
    return (byte *)((undefined2 *)((long)param_1 + (long)(int)uVar4) + 1);
  }
  uVar5 = uVar4 - 1;
  if (uVar5 < 0x15) {
    puVar1 = (undefined1 *)((long)param_1 + (ulong)uVar4);
    _memmove(puVar1 + 1,(void *)((long)param_1 + (ulong)uVar4),(long)-param_3);
    *puVar1 = 0x2e;
    return (byte *)((long)param_1 + (long)(int)param_2 + 1);
  }
  if (uVar4 + 5 < 6) {
    uVar5 = 2 - uVar4;
    _memmove((void *)((long)param_1 + (ulong)uVar5),param_1,(long)(int)param_2);
    *param_1 = 0x2e30;
    if ((int)uVar4 < 0) {
      uVar4 = 3;
      if (3 < uVar5) {
        uVar4 = uVar5;
      }
      _memset(param_1 + 1,0x30,(ulong)(uVar4 - 2));
    }
    return (byte *)((long)param_1 + (long)(int)(uVar5 + param_2));
  }
  if (param_2 == 1) {
    *(undefined1 *)((long)param_1 + 1) = 0x65;
    if (-1 < (int)uVar5) {
      pbVar3 = (byte *)(param_1 + 1);
      goto LAB_10016e543;
    }
  }
  else {
    _memmove(param_1 + 1,(void *)((long)param_1 + 1),(long)(int)(param_2 - 1));
    *(undefined1 *)((long)param_1 + 1) = 0x2e;
    lVar2 = (long)(int)param_2;
    *(undefined1 *)((long)param_1 + lVar2 + 1) = 0x65;
    if (-1 < (int)uVar5) {
      pbVar3 = (byte *)((long)param_1 + lVar2 + 2);
      goto LAB_10016e543;
    }
    param_1 = (undefined2 *)((long)param_1 + lVar2);
  }
  *(undefined1 *)(param_1 + 1) = 0x2d;
  pbVar3 = (byte *)((long)param_1 + 3);
  uVar5 = 1 - uVar4;
LAB_10016e543:
  if (uVar5 < 100) {
    if (uVar5 < 10) {
      *pbVar3 = (byte)uVar5 | 0x30;
      pbVar3 = pbVar3 + 1;
    }
    else {
      *(undefined2 *)pbVar3 = *(undefined2 *)(&DAT_10070e250 + (ulong)uVar5 * 2);
      pbVar3 = pbVar3 + 2;
    }
  }
  else {
    *pbVar3 = (char)(uVar5 / 100) + 0x30;
    *(undefined2 *)(pbVar3 + 1) = *(undefined2 *)(&DAT_10070e250 + (ulong)(uVar5 % 100) * 2);
    pbVar3 = pbVar3 + 3;
  }
  return pbVar3;
}

