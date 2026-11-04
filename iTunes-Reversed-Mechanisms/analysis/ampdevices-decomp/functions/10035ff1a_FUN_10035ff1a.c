// name: FUN_10035ff1a
// address: 10035ff1a

ulong FUN_10035ff1a(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  char *local_a0;
  ulong local_90;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar16 = (ulong)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar4 = *(char *)(param_1 + 0x1877);
  fVar19 = DAT_100700b50;
  if (cVar4 != '\0') {
    fVar19 = *(float *)(param_1 + 0x11d0);
  }
  if (*(char *)(param_1 + 0x187e) != '\0') {
    fVar19 = fVar19 * *(float *)(param_1 + 0x1880);
  }
  if (*(char *)(param_1 + 0x1884) != '\0') {
    fVar19 = fVar19 * *(float *)(param_1 + 0x1888);
  }
  uVar1 = *(uint *)(param_1 + 0x180c);
  uVar9 = (ulong)uVar1;
  if ((DAT_100700b50 < fVar19) && (*(char *)(param_1 + 0x187b) == '\0')) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "volumeScalar <= 1.0f || decoderData->processLimiter";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    cVar4 = *(char *)(param_1 + 0x1877);
  }
  if (cVar4 == '\0') {
    bVar17 = false;
  }
  else {
    bVar17 = *(char *)(param_1 + 0x1879) != '\0';
  }
  if (*(int *)(param_1 + 0x1894) == 0) {
    bVar18 = *(int *)(param_1 + 0x1898) != 0;
    if ((*(char *)(param_1 + 0x187b) != '\0' || bVar17) || bVar18) goto LAB_100360059;
    bVar13 = fVar19 == DAT_100700b50 && *(char *)(param_1 + 0x187c) == '\0';
    bVar18 = false;
  }
  else {
    bVar18 = true;
LAB_100360059:
    bVar13 = false;
  }
  local_a0 = (char *)(param_1 + 0x187b);
  cVar4 = FUN_10015d7a0(param_1 + 0x17f0);
  iVar2 = *(int *)(param_1 + 0x1808);
  if (cVar4 == '\0') {
    cVar5 = FUN_10015d7c7(param_1 + 0x17f0,0);
    if (!bVar13 && cVar5 != '\0') goto LAB_1003600ba;
  }
  else if (!bVar13) {
LAB_1003600ba:
    uVar3 = *(uint *)(param_1 + 0x17fc);
    uVar6 = FUN_1001ebb2f(1);
    if (param_4 == 0) {
      local_90 = 0;
    }
    else {
      uVar12 = (ulong)*(double *)(param_1 + 0x17b8);
      local_90 = 0;
      do {
        uVar11 = (ulong)*(uint *)(param_1 + 0x1870);
        if ((uint)uVar16 < *(uint *)(param_1 + 0x1870)) {
          uVar11 = uVar16;
        }
        uVar15 = (uint)uVar11;
        if (cVar4 == '\0') {
          if ((uVar3 & 2) == 0) {
            FUN_10015df18(param_2);
          }
          else {
            FUN_10015ddd3(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                          uVar15 * uVar1);
          }
          lVar10 = *(long *)(param_1 + 0x10);
        }
        else {
          if (((fVar19 != DAT_100700b50) || (NAN(fVar19) || NAN(DAT_100700b50))) &&
             (uVar15 * uVar1 != 0)) {
            lVar10 = 0;
            do {
              *(float *)(param_2 + lVar10 * 4) = *(float *)(param_2 + lVar10 * 4) * fVar19;
              lVar10 = lVar10 + 1;
            } while (uVar15 * uVar1 != (int)lVar10);
          }
          FUN_1001c631b(param_2,*(undefined8 *)(param_1 + 0x18),uVar11 * uVar9 * 4);
          lVar10 = param_2;
        }
        if (bVar17) {
          FUN_1005980c8(param_1 + 0x20,lVar10,*(undefined8 *)(param_1 + 0x18),uVar11,uVar9,0);
        }
        if (*(char *)(param_1 + 0x187c) != '\0') {
          FUN_1005f356f(param_1 + 0x11e0,*(undefined8 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 0x18),uVar11,uVar9);
        }
        if (*local_a0 != '\0') {
          uVar7 = FUN_1004147be(param_1 + 0x1290,*(undefined8 *)(param_1 + 0x18),
                                *(undefined8 *)(param_1 + 0x18),uVar11,uVar9);
          uVar11 = (ulong)uVar7;
          if (uVar15 < uVar7) {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "outSamplesToProcess <= samplesToProcess";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58);
            }
            FUN_1001782e9(0,0);
          }
        }
        iVar14 = (int)uVar11;
        if (bVar18) {
          FUN_100360424(param_1,uVar12 & 0xffffffff,uVar11);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        if (cVar4 == '\0') {
          if ((uVar3 & 2) == 0) {
            FUN_10015e0c9(uVar8,param_3);
          }
          else {
            FUN_10015e02e(uVar8,param_3);
          }
        }
        else {
          FUN_1001c631b(uVar8,param_3,(ulong)(iVar14 * uVar1) << 2);
        }
        param_2 = param_2 + (ulong)(uVar15 * iVar2);
        local_90 = (ulong)(uint)((int)local_90 + iVar14);
        param_3 = param_3 + (ulong)(uint)(iVar14 * iVar2);
        uVar12 = (ulong)(uint)((int)uVar12 + iVar14);
        uVar15 = (uint)uVar16 - uVar15;
        uVar16 = (ulong)uVar15;
      } while (uVar15 != 0);
    }
    FUN_1001ebb2f(uVar6);
    goto LAB_1003603ad;
  }
  FUN_1001c631b(param_2,param_3,iVar2 * param_4);
  local_90 = uVar16;
LAB_1003603ad:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_90;
}

