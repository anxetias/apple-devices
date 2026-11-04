// name: FUN_100508267
// address: 100508267

void FUN_100508267(long param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0x50;
  if (((param_2 & 0xc62) != 0) || (lVar1 = 0x40, (param_2 & 0x130410d) != 0)) {
    *(long *)(param_1 + lVar1) = *(long *)(param_1 + lVar1) + param_3;
  }
  uVar2 = 0xe0;
  if (((((param_2 & 4) == 0) && (uVar2 = 0xf0, (param_2 >> 0x15 & 1) == 0)) &&
      (uVar2 = 0x60, (param_2 & 0x101) == 0)) && (uVar2 = 0x80, (param_2 & 0x20) == 0)) {
    if ((param_2 & 0x40) == 0) {
      if ((param_2 & 0xa02) == 0) {
        uVar2 = 0xb0;
        if (((((param_2 >> 10 & 1) == 0) && (uVar2 = 0x70, (param_2 & 8) == 0)) &&
            ((uVar2 = 0x130, (param_2 & 0xc00000) == 0 &&
             ((uVar2 = 0x100, (param_2 >> 0xe & 1) == 0 &&
              (uVar2 = 0x110, (param_2 >> 0x18 & 1) == 0)))))) &&
           (uVar2 = 0x120, (param_2 >> 0x14 & 1) == 0)) {
          return;
        }
      }
      else {
        uVar2 = (ulong)(param_2 >> 0xb & 0x10) + 0x90;
      }
    }
    else {
      uVar2 = (ulong)(param_2 >> 0xb & 0x10) | 0xc0;
    }
  }
  *(long *)(param_1 + uVar2) = *(long *)(param_1 + uVar2) + param_3;
  return;
}

