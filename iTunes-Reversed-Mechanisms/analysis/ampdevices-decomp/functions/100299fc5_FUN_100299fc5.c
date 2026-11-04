// name: FUN_100299fc5
// address: 100299fc5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100299fc5(double param_1,long param_2,int param_3,uint param_4,uint *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong local_30;
  ulong uVar8;
  
  uVar8 = (ulong)param_4;
  local_30 = 0xffffffffffffffff;
  uVar11 = (uint)(long)(param_1 * _DAT_100708b48);
  uVar7 = uVar11;
  if ((((param_3 != 0) && (*(long **)(param_2 + 0xca8) != (long *)0x0)) &&
      (cVar2 = (**(code **)(**(long **)(param_2 + 0xca8) + 0x78))(), cVar2 == '\0')) &&
     ((iVar3 = (**(code **)(**(long **)(param_2 + 0xca8) + 0x68))
                         (*(long **)(param_2 + 0xca8),0,&local_30), iVar3 == 0 &&
      (uVar7 = 3000, uVar11 != 0)))) {
    uVar7 = uVar11;
  }
  if (*(char *)(param_2 + 0xc84) == '\0') {
    if (*(uint *)(param_2 + 0x480) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        if ((param_4 < *(uint *)(param_2 + 0x484 + (long)(short)iVar3 * 8)) ||
           ((-1 < (long)local_30 && (local_30 < *(uint *)(param_2 + 0x488 + (long)(short)iVar3 * 8))
            ))) break;
        iVar3 = iVar3 + 1;
      } while ((uint)(int)(short)iVar3 < *(uint *)(param_2 + 0x480));
    }
    sVar5 = (short)iVar3;
    uVar7 = iVar3 - (uint)(0 < sVar5);
    uVar8 = (ulong)uVar7;
    sVar6 = (short)uVar7;
    uVar4 = (ulong)*(uint *)(param_2 + 0x488 + (long)sVar6 * 8);
    if (0 < sVar6 && *(ulong *)(param_2 + 0xd50) != 0) {
      uVar8 = (long)sVar5 - (ulong)(0 < sVar5);
      do {
        if (uVar4 < *(ulong *)(param_2 + 0xd50)) goto LAB_10029a12a;
        uVar4 = (ulong)*(uint *)(param_2 + 0x480 + uVar8 * 8);
        bVar1 = 1 < (long)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar1);
      uVar8 = 0;
    }
LAB_10029a12a:
    if (param_5 == (uint *)0x0) {
      return uVar4;
    }
    uVar7 = *(uint *)(param_2 + 0x484 + (long)(short)uVar8 * 8);
    goto LAB_10029a1b1;
  }
  uVar11 = *(uint *)(param_2 + 0x478);
  uVar9 = (ulong)*(uint *)(param_2 + 0x47c);
  if (uVar9 == 0) {
LAB_10029a085:
    uVar4 = (ulong)uVar11;
    uVar7 = 0;
  }
  else {
    uVar10 = (ulong)*(uint *)(param_2 + 0x474);
    uVar4 = (ulong)((int)((uVar8 * uVar10) / uVar9) + uVar11);
    if ((-1 < (long)local_30) && ((long)local_30 < (long)uVar4)) {
      if (((uint)local_30 < uVar11) ||
         (uVar12 = (uint)((((uint)local_30 - uVar11) * uVar9) / uVar10),
         uVar8 = (ulong)(uVar12 - uVar7), uVar12 < uVar7)) goto LAB_10029a085;
      uVar4 = (ulong)((int)((uVar8 * uVar10) / uVar9) + uVar11);
    }
    uVar7 = (uint)uVar8;
    if ((*(ulong *)(param_2 + 0xd50) != 0) && (uVar7 != 0)) {
      do {
        uVar12 = (uint)uVar8;
        uVar7 = uVar12;
        if (uVar4 < *(ulong *)(param_2 + 0xd50)) break;
        uVar7 = 0;
        uVar8 = (ulong)(uVar12 - 100);
        if (uVar12 < 100) {
          uVar8 = 0;
        }
        uVar4 = (ulong)((int)((uVar8 * uVar10) / uVar9) + uVar11);
      } while (100 < uVar12);
    }
  }
  if (param_5 == (uint *)0x0) {
    return uVar4;
  }
LAB_10029a1b1:
  *param_5 = uVar7;
  return uVar4;
}

