// name: FUN_1005d1484
// address: 1005d1484

void FUN_1005d1484(long *param_1,short *param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  short sVar9;
  uint uVar10;
  short sVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(*param_1 + 0xd0) != 0) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "bitmap->GetPixelFormat() == kITPixelFormatPARGB";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == (short *)0x0) {
    lVar12 = *param_1;
    sVar9 = *(short *)(lVar12 + 0xa8);
    sVar11 = *(short *)(lVar12 + 0xb0);
    lVar8 = 0;
    iVar13 = 0;
  }
  else {
    iVar13 = (int)*param_2;
    lVar8 = (long)param_2[1];
    sVar11 = param_2[2];
    sVar9 = param_2[3];
    lVar12 = *param_1;
  }
  param_4 = param_4 & 0xff;
  bVar1 = *(byte *)(param_3 + 1);
  bVar2 = *(byte *)(param_3 + 3);
  bVar3 = *(byte *)(param_3 + 5);
  lVar16 = (long)(sVar11 - iVar13);
  uVar4 = *(ulong *)(lVar12 + 0xb8);
  cVar5 = *(char *)(lVar12 + 0xd4);
  lVar12 = (ulong)(uint)(iVar13 * (int)uVar4) + *(long *)(lVar12 + 200) + lVar8 * 4;
  do {
    lVar17 = 0;
    do {
      uVar7 = *(uint *)(lVar12 + lVar17 * 4);
      if (cVar5 == '\0') {
        uVar10 = uVar7 >> 8;
        uVar14 = uVar7 >> 0x10;
        uVar7 = uVar7 >> 0x18;
      }
      else {
        uVar10 = uVar7 >> 0x10;
        uVar14 = uVar7 >> 8;
        uVar7 = uVar7 & 0xff;
      }
      iVar15 = (((uint)bVar1 - (uVar10 & 0xff)) * param_4) / 0xff + (uVar10 & 0xff);
      iVar13 = (((uint)bVar2 - (uVar14 & 0xff)) * param_4) / 0xff + (uVar14 & 0xff);
      uVar7 = ((bVar3 - uVar7) * param_4) / 0xff + uVar7;
      if (cVar5 == '\0') {
        uVar7 = uVar7 * 0x1000000 | iVar13 * 0x10000 | iVar15 * 0x100 | 0xff;
      }
      else {
        uVar7 = iVar13 * 0x100 | iVar15 * 0x10000 | uVar7 | 0xff000000;
      }
      *(uint *)(lVar12 + lVar17 * 4) = uVar7;
      lVar17 = lVar17 + 1;
    } while (sVar9 - lVar8 != lVar17);
    lVar12 = lVar12 + (uVar4 & 0xffffffff);
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

