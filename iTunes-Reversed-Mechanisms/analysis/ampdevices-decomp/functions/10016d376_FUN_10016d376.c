// name: FUN_10016d376
// address: 10016d376

void FUN_10016d376(long *param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = (uint)param_2;
  if (uVar3 < 0x80) {
    lVar1 = *param_1;
    pbVar2 = *(byte **)(lVar1 + 0x18);
    if (*(byte **)(lVar1 + 0x20) <= pbVar2 + 1) {
      FUN_10016d504(lVar1,1);
      pbVar2 = *(byte **)(lVar1 + 0x18);
    }
    *(byte **)(lVar1 + 0x18) = pbVar2 + 1;
    *pbVar2 = (byte)param_2;
  }
  else {
    if (uVar3 < 0x800) {
      bVar4 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      if (uVar3 < 0x10000) {
        bVar4 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        if (0x10ffff < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_100679081();
        }
        lVar1 = *param_1;
        pbVar2 = *(byte **)(lVar1 + 0x18);
        if (*(byte **)(lVar1 + 0x20) <= pbVar2 + 1) {
          FUN_10016d504(lVar1,1);
          pbVar2 = *(byte **)(lVar1 + 0x18);
        }
        *(byte **)(lVar1 + 0x18) = pbVar2 + 1;
        *pbVar2 = (byte)(param_2 >> 0x12) | 0xf0;
        param_1[1] = param_1[1] + 1;
        bVar4 = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      }
      lVar1 = *param_1;
      pbVar2 = *(byte **)(lVar1 + 0x18);
      if (*(byte **)(lVar1 + 0x20) <= pbVar2 + 1) {
        FUN_10016d504(lVar1,1);
        pbVar2 = *(byte **)(lVar1 + 0x18);
      }
      *(byte **)(lVar1 + 0x18) = pbVar2 + 1;
      *pbVar2 = bVar4;
      param_1[1] = param_1[1] + 1;
      bVar4 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    }
    lVar1 = *param_1;
    pbVar2 = *(byte **)(lVar1 + 0x18);
    if (*(byte **)(lVar1 + 0x20) <= pbVar2 + 1) {
      FUN_10016d504(lVar1,1);
      pbVar2 = *(byte **)(lVar1 + 0x18);
    }
    *(byte **)(lVar1 + 0x18) = pbVar2 + 1;
    *pbVar2 = bVar4;
    param_1[1] = param_1[1] + 1;
    lVar1 = *param_1;
    pbVar2 = *(byte **)(lVar1 + 0x18);
    if (*(byte **)(lVar1 + 0x20) <= pbVar2 + 1) {
      FUN_10016d504(lVar1,1);
      pbVar2 = *(byte **)(lVar1 + 0x18);
    }
    *(byte **)(lVar1 + 0x18) = pbVar2 + 1;
    *pbVar2 = (byte)param_2 & 0x3f | 0x80;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

