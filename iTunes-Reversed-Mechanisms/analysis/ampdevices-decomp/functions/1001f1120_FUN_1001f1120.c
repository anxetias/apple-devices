// name: FUN_1001f1120
// address: 1001f1120

int FUN_1001f1120(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  Bytef *buf;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uLong uVar5;
  int iVar6;
  uint len;
  ulong uVar7;
  
  iVar6 = -0x66;
  if ((param_1 != 0) && (plVar1 = *(long **)(param_1 + 0x140), plVar1 != (long *)0x0)) {
    if (*plVar1 == 0) {
      iVar6 = -100;
    }
    else {
      iVar6 = 0;
      if (param_3 != 0) {
        plVar1[4] = param_2;
        *(uint *)(plVar1 + 5) = param_3;
        uVar7 = (ulong)param_3;
        if (((ulong)plVar1[0x18] < uVar7) && ((int)plVar1[0x27] == 0)) {
          param_3 = (uint)plVar1[0x18];
          *(uint *)(plVar1 + 5) = param_3;
        }
        if ((plVar1[0x17] + (ulong)*(uint *)(plVar1 + 2) < uVar7) && ((int)plVar1[0x27] != 0)) {
          param_3 = (int)plVar1[0x17] + *(uint *)(plVar1 + 2);
          *(uint *)(plVar1 + 5) = param_3;
        }
        iVar6 = 0;
        if (param_3 != 0) {
          iVar6 = 0;
          do {
            uVar7 = (ulong)*(uint *)(plVar1 + 2);
            if (*(uint *)(plVar1 + 2) == 0) {
              uVar7 = plVar1[0x17];
              if (uVar7 == 0) {
                uVar7 = 0;
              }
              else {
                if (0x3fff < uVar7) {
                  uVar7 = 0x4000;
                }
                lVar3 = FUN_1001a702e(plVar1 + 0x19,plVar1[0x24],plVar1[0x26] + plVar1[0xf],0);
                if (lVar3 != 0) {
                  return -1;
                }
                uVar4 = (*(code *)plVar1[0x1a])(plVar1[0x20],plVar1[0x24],*plVar1);
                if (uVar4 != uVar7) {
                  return -1;
                }
                plVar1[0xf] = plVar1[0xf] + uVar7;
                plVar1[0x17] = plVar1[0x17] - uVar7;
                plVar1[1] = *plVar1;
                *(int *)(plVar1 + 2) = (int)uVar7;
              }
            }
            if ((plVar1[0x25] == 0) || ((int)plVar1[0x27] != 0)) {
              len = (uint)uVar7;
              if ((len == 0) && (plVar1[0x17] == 0)) {
                return iVar6;
              }
              if (*(uint *)(plVar1 + 5) < len) {
                len = *(uint *)(plVar1 + 5);
              }
              if (len == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (ulong)len;
                uVar4 = 0;
                do {
                  *(undefined1 *)(plVar1[4] + uVar4) = *(undefined1 *)(plVar1[1] + uVar4);
                  uVar4 = uVar4 + 1;
                } while (uVar7 != uVar4);
              }
              plVar1[0x14] = plVar1[0x14] + uVar7;
              uVar5 = _crc32(plVar1[0x15],(Bytef *)plVar1[4],len);
              plVar1[0x15] = uVar5;
              plVar1[0x18] = plVar1[0x18] - uVar7;
              *(uint *)(plVar1 + 2) = (int)plVar1[2] - len;
              *(uint *)(plVar1 + 5) = (int)plVar1[5] - len;
              plVar1[4] = plVar1[4] + uVar7;
              plVar1[1] = plVar1[1] + uVar7;
              plVar1[6] = plVar1[6] + uVar7;
              iVar6 = iVar6 + len;
            }
            else if (plVar1[0x25] != 0xc) {
              buf = (Bytef *)plVar1[4];
              lVar3 = plVar1[6];
              iVar2 = _inflate((z_streamp)(plVar1 + 1),2);
              if ((-1 < iVar2) && (plVar1[7] != 0)) {
                iVar2 = -3;
              }
              lVar3 = plVar1[6] - lVar3;
              plVar1[0x14] = plVar1[0x14] + lVar3;
              uVar5 = _crc32(plVar1[0x15],buf,(uInt)lVar3);
              plVar1[0x15] = uVar5;
              plVar1[0x18] = plVar1[0x18] - lVar3;
              iVar6 = iVar6 + (uInt)lVar3;
              if (iVar2 != 0) {
                if (iVar2 == 1) {
                  return iVar6;
                }
                return iVar2;
              }
            }
          } while ((int)plVar1[5] != 0);
        }
      }
    }
  }
  return iVar6;
}

