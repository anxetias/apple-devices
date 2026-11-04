// name: FUN_1005da92d
// address: 1005da92d

undefined1 * FUN_1005da92d(long param_1,ulong param_2,ulong *param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar9 = *(long *)(param_1 + 0x28);
  uVar5 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
  uVar14 = (ulong)uVar5;
  lVar12 = lVar9;
  if (lVar9 == 0) {
    lVar12 = *(long *)(param_1 + 0x30);
  }
  if (uVar14 == 0) {
LAB_1005daa2e:
    uVar7 = FUN_1001cc310(param_1,param_2,uVar14);
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_4a = "currChunkIndex != -1";
LAB_1005daaf7:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1005daa4b:
    FUN_1001782e9(0,0);
    puVar8 = &DAT_ffffff30;
LAB_1005daa59:
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return puVar8;
  }
  piVar6 = (int *)(*(long *)(param_1 + 0x18) + 0x10);
  uVar19 = 0;
  uVar16 = 0;
LAB_1005da983:
  iVar17 = *(int *)(lVar12 + 0xc) + 1;
  if (uVar19 < uVar5 - 1) {
    iVar17 = piVar6[3];
  }
  iVar15 = *piVar6;
  uVar2 = piVar6[1];
  uVar18 = (iVar17 - iVar15) * uVar2 + uVar16;
  uVar10 = (uint)param_2;
  if (uVar18 <= uVar10) goto code_r0x0001005da9a5;
  uVar18 = 0;
  uVar5 = uVar10 - uVar16;
  if (uVar5 != 0) {
    uVar14 = (ulong)uVar5 % (ulong)uVar2;
    iVar15 = iVar15 + uVar5 / uVar2;
    uVar18 = uVar10 - (uVar16 + (uVar5 / uVar2) * uVar2);
  }
  if (iVar15 != -1) {
    if (lVar9 == 0) {
      if (*(int *)(*(long *)(param_1 + 0x30) + 0xc) < iVar15) {
        uVar7 = FUN_1001cc310(param_1,param_2,uVar14);
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 == '\0') goto LAB_1005daa4b;
        local_4a = "(currChunkIndex-1) < sampleTableCache->chunkOffset64Atom->numEntries";
        goto LAB_1005daaf7;
      }
      uVar14 = (ulong)iVar15;
      uVar19 = *(ulong *)(*(long *)(param_1 + 0x30) + 8 + uVar14 * 8);
    }
    else {
      if (*(int *)(lVar9 + 0xc) < iVar15) {
        uVar7 = FUN_1001cc310(param_1,param_2,uVar14);
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 == '\0') goto LAB_1005daa4b;
        local_4a = "(currChunkIndex-1) < sampleTableCache->chunkOffsetAtom->numEntries";
        goto LAB_1005daaf7;
      }
      uVar19 = (ulong)*(uint *)(lVar9 + 0xc + (long)iVar15 * 4);
    }
    if (uVar18 == 0) {
      lVar9 = *(long *)(param_1 + 0x20);
      iVar17 = *(int *)(lVar9 + 4);
LAB_1005dab72:
      if (iVar17 == 0x7374737a) {
        uVar16 = *(uint *)(lVar9 + 0xc);
        if (uVar16 == 0) goto LAB_1005dad11;
        goto LAB_1005dad8c;
      }
      uVar16 = 0;
      if (iVar17 != 0x73747a32) goto LAB_1005dad8c;
      iVar17 = *(int *)(lVar9 + 0xc);
      goto LAB_1005dab8e;
    }
    uVar5 = uVar10 - uVar18;
    if ((int)uVar5 < 0) {
      uVar7 = FUN_1001cc310(param_1,param_2,uVar14);
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 == '\0') goto LAB_1005daa4b;
      local_4a = "firstPacketToSkip >= 0";
      goto LAB_1005daaf7;
    }
    lVar9 = *(long *)(param_1 + 0x20);
    iVar17 = *(int *)(lVar9 + 4);
    if (iVar17 != 0x73747a32) {
      if (iVar17 != 0x7374737a) goto LAB_1005dab72;
      uVar16 = *(uint *)(lVar9 + 0xc);
      if (uVar16 != 0) {
        uVar19 = uVar19 + uVar18 * uVar16;
        goto LAB_1005dad8c;
      }
      if (*(uint *)(lVar9 + 0x10) < uVar10) goto LAB_1005daca6;
      uVar14 = 0;
      uVar16 = 0;
      do {
        uVar16 = uVar16 + *(int *)(lVar9 + (ulong)uVar5 * 4 + 0x14 + uVar14 * 4);
        uVar14 = uVar14 + 1;
      } while (uVar18 != uVar14);
      uVar19 = uVar19 + uVar16;
LAB_1005dad11:
      if ((int)uVar10 < *(int *)(lVar9 + 0x10)) {
        uVar16 = *(uint *)(lVar9 + 0x14 + (long)(int)uVar10 * 4);
        goto LAB_1005dad8c;
      }
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_4a = "packetIndex < sampleTableCache->sampleSizeAtom->numEntries";
        goto LAB_1005daaf7;
      }
      goto LAB_1005daa4b;
    }
    if (uVar10 <= *(uint *)(lVar9 + 0x10)) {
      iVar17 = *(int *)(lVar9 + 0xc);
      lVar12 = lVar9 + 0x14;
      uVar14 = (ulong)uVar5;
      uVar11 = (ulong)uVar18;
      if (iVar17 == 8) {
        uVar13 = 0;
        uVar5 = 0;
        do {
          uVar5 = uVar5 + *(byte *)(lVar12 + uVar14 + uVar13);
          uVar13 = uVar13 + 1;
        } while (uVar11 != uVar13);
        uVar19 = uVar19 + uVar5;
LAB_1005dad84:
        uVar16 = (uint)*(byte *)(lVar9 + 0x14 + (long)(int)uVar10);
      }
      else {
        if (iVar17 == 4) {
          uVar13 = 0;
          uVar5 = 0;
          do {
            bVar1 = *(byte *)(lVar12 + uVar14 + (uVar13 >> 1 & 0x7fffffff));
            bVar3 = bVar1 & 0xf;
            if ((uVar13 & 1) == 0) {
              bVar3 = bVar1 >> 4;
            }
            uVar5 = (uint)bVar3 + *(byte *)(lVar12 + uVar14 + uVar13) + uVar5;
            uVar13 = uVar13 + 1;
          } while (uVar11 != uVar13);
          uVar19 = uVar19 + uVar5;
        }
        else {
          uVar13 = 0;
          uVar5 = 0;
          do {
            uVar5 = uVar5 + *(ushort *)(lVar12 + uVar14 * 2 + uVar13 * 2);
            uVar13 = uVar13 + 1;
          } while (uVar11 != uVar13);
          uVar19 = uVar19 + uVar5;
LAB_1005dab8e:
          if (iVar17 == 8) goto LAB_1005dad84;
          if (iVar17 != 4) {
            uVar16 = (uint)*(ushort *)(lVar9 + 0x14 + (long)(int)uVar10 * 2);
            goto LAB_1005dad8c;
          }
        }
        bVar1 = *(byte *)(lVar9 + 0x14 + (long)((int)uVar10 >> 1));
        bVar3 = bVar1 & 0xf;
        if ((param_2 & 1) == 0) {
          bVar3 = bVar1 >> 4;
        }
        uVar16 = (uint)bVar3;
      }
LAB_1005dad8c:
      *param_4 = uVar16;
      *param_3 = uVar19;
      puVar8 = (undefined1 *)0x0;
      goto LAB_1005daa59;
    }
LAB_1005daca6:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 == '\0') goto LAB_1005daa4b;
    local_4a = "(firstPacketToSkip + packetsToSkip) <= sampleTableCache->sampleSizeAtom->numEntries"
    ;
    goto LAB_1005daaf7;
  }
  goto LAB_1005daa2e;
code_r0x0001005da9a5:
  uVar19 = uVar19 + 1;
  piVar6 = piVar6 + 3;
  uVar16 = uVar18;
  if (uVar14 == uVar19) goto LAB_1005daa2e;
  goto LAB_1005da983;
}

