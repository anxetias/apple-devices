// name: FUN_1005dadc0
// address: 1005dadc0

undefined8 FUN_1005dadc0(long param_1,ulong param_2,uint *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *(long *)(param_1 + 0x28);
  lVar17 = lVar5;
  if (lVar5 == 0) {
    lVar17 = *(long *)(param_1 + 0x30);
  }
  uVar15 = *(uint *)(lVar17 + 0xc);
  if ((ulong)uVar15 != 0) {
    uVar14 = 0;
    uVar16 = 0;
    do {
      if (lVar5 == 0) {
        uVar9 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x10 + uVar14 * 8);
      }
      else {
        uVar9 = (ulong)*(int *)(lVar5 + 0x10 + uVar14 * 4);
      }
      if (param_2 < uVar9) {
        uVar7 = 0xffffffce;
        if (uVar14 != 0) {
          uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0xc);
          if (uVar9 != 0) {
            lVar5 = *(long *)(param_1 + 0x20);
            lVar17 = *(long *)(param_1 + 0x18) + 0x10;
            uVar3 = *(uint *)(lVar5 + 0xc);
            iVar12 = 0;
            uVar18 = 0;
            do {
              uVar22 = uVar18 + 1;
              piVar1 = (int *)(lVar17 + uVar18 * 0xc);
              if (uVar22 < uVar9) {
                iVar19 = *piVar1;
                uVar18 = (long)*(int *)(lVar17 + uVar22 * 0xc) - (long)iVar19;
              }
              else {
                iVar19 = *piVar1;
                uVar18 = (ulong)((uVar15 + 1) - iVar19);
              }
              if (0 < (long)uVar18) {
                uVar4 = piVar1[1];
                uVar11 = (ulong)uVar4;
                iVar20 = (int)uVar18 * uVar4 + iVar12;
                iVar13 = -iVar12;
                uVar10 = 0;
                do {
                  if ((uVar14 - 1 & 0xffffffff) - (long)iVar19 == uVar10) {
                    if (uVar11 == 0) goto LAB_1005dafb8;
                    uVar15 = -iVar13;
                    lVar17 = 0;
                    goto LAB_1005daf32;
                  }
                  uVar10 = uVar10 + 1;
                  iVar13 = iVar13 - uVar4;
                  iVar12 = iVar20;
                } while (uVar18 != uVar10);
              }
              uVar18 = uVar22;
            } while (uVar22 != uVar9);
          }
        }
        goto LAB_1005dae4e;
      }
      uVar14 = uVar14 + 1;
      uVar16 = uVar9;
    } while (uVar15 != uVar14);
  }
  uVar7 = FUN_1001cc310();
  cVar6 = _os_log_type_enabled(uVar7,0x10);
  if (cVar6 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "chunkOffsetOK";
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
  uVar7 = 0xffffffce;
  goto LAB_1005dae4e;
  while( true ) {
    uVar15 = uVar15 + 1;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) break;
LAB_1005daf32:
    if (*(int *)(lVar5 + 4) == 0x73747a32) {
      if (uVar3 == 8) {
        uVar21 = (uint)*(byte *)(lVar5 + 0x14 + (long)(int)uVar15);
      }
      else if (uVar3 == 4) {
        bVar2 = *(byte *)(lVar5 + 0x14 + (long)((int)uVar15 >> 1));
        bVar8 = bVar2 & 0xf;
        if ((uVar15 & 1) == 0) {
          bVar8 = bVar2 >> 4;
        }
        uVar21 = (uint)bVar8;
      }
      else {
        uVar21 = (uint)*(ushort *)(lVar5 + 0x14 + (long)(int)uVar15 * 2);
      }
    }
    else {
      uVar21 = 0;
      if ((*(int *)(lVar5 + 4) == 0x7374737a) && (uVar21 = uVar3, (int)uVar3 < 1)) {
        uVar21 = *(uint *)(lVar5 + 0x14 + (long)(int)uVar15 * 4);
      }
    }
    lVar17 = lVar17 + (int)uVar21;
    if ((long)(param_2 - uVar16) < lVar17) goto LAB_1005dafbe;
  }
LAB_1005dafb8:
  uVar15 = uVar4 - iVar13;
LAB_1005dafbe:
  uVar7 = 0;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar15;
  }
LAB_1005dae4e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

