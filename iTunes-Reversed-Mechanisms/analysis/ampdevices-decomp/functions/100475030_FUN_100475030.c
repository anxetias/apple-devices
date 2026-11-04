// name: FUN_100475030
// address: 100475030

byte FUN_100475030(long param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  byte bVar4;
  
  bVar2 = *(byte *)(param_1 + 0xc0);
  if (bVar2 == 0) {
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 == (long *)0x0) {
      bVar2 = 0;
    }
    else {
      bVar2 = 0;
      do {
        iVar1 = *(int *)((long)plVar3 + 0x3c);
        if (iVar1 < 0x48545450) {
          if (iVar1 == 0x43442020) {
            bVar4 = 4;
          }
          else if (iVar1 == 0x44574e4c) {
            bVar4 = 0x20;
          }
          else {
            bVar4 = 1;
            if (iVar1 != 0x46494c45) goto LAB_1004750c6;
          }
LAB_1004750bd:
          bVar2 = bVar2 | bVar4;
          *(byte *)(param_1 + 0xc0) = bVar2;
        }
        else {
          if (0x4d46494b < iVar1) {
            if (iVar1 == 0x53485244) {
              bVar4 = 0x10;
            }
            else {
              if (iVar1 != 0x4d46494c) goto LAB_1004750c6;
              bVar4 = 2;
            }
            goto LAB_1004750bd;
          }
          if (iVar1 == 0x48545450) {
            bVar4 = 8;
            goto LAB_1004750bd;
          }
          if (iVar1 == 0x4d425546) {
            bVar4 = 0x80;
            goto LAB_1004750bd;
          }
        }
LAB_1004750c6:
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return bVar2;
}

