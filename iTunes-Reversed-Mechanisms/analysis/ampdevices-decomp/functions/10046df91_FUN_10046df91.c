// name: FUN_10046df91
// address: 10046df91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10046df91(long param_1,double *param_2,char param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) != 0x61646563) {
    uVar13 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar13,0x10);
    if (cVar9 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "decoderData->magic == \'adec\'";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar15 = -0x1c;
    goto LAB_10046e30c;
  }
  FUN_10046d628();
  if (*(long *)(param_1 + 0x1818) != 0) {
    FUN_10046d6f2(param_1);
    iVar15 = -0x32;
    goto LAB_10046e30c;
  }
  cVar9 = FUN_10015d730(param_1 + 0x17c8,param_2);
  iVar15 = 0;
  if (cVar9 == '\0') {
    plVar1 = (long *)(param_1 + 0x1818);
    if (((*(int *)(param_1 + 0x17e4) == 2) && (*(int *)((long)param_2 + 0x1c) == 1)) &&
       (*(long *)(param_1 + 0x1868) == 0)) {
      lVar12 = FUN_1001c64d2(*(undefined4 *)(param_1 + 0x1850));
      *(long *)(param_1 + 0x1868) = lVar12;
      if (lVar12 != 0) goto LAB_10046e072;
      uVar13 = FUN_1001cc310();
      cVar9 = _os_log_type_enabled(uVar13,0x10);
      if (cVar9 != '\0') {
        local_4a = "decoderData->tempBuffer != nullptr";
LAB_10046e39d:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_10046e2a2:
      FUN_1001782e9(0,0);
      iVar10 = -0x6c;
    }
    else {
LAB_10046e072:
      iVar10 = FUN_10015e46f(param_1 + 0x17c8,param_2,param_3 != '\0',plVar1);
      if (iVar10 != -0x80) {
        if (iVar10 == 0) {
          iVar10 = FUN_10015eaf3(*(undefined8 *)(param_1 + 0x1818),*(undefined4 *)(param_1 + 0x1850)
                                 ,param_1 + 0x1828,param_1 + 0x182c,param_1 + 0x1830);
          if (iVar10 == -0x80) goto LAB_10046e2b5;
          if (iVar10 == 0) {
            uVar2 = *(uint *)(param_1 + 0x182c);
            uVar3 = *(uint *)(param_1 + 0x1850);
            uVar14 = uVar2 * (uVar3 / uVar2);
            uVar11 = (uVar3 / uVar2 + (uint)(uVar14 < uVar3)) * *(int *)(param_1 + 0x1830);
            *(uint *)(param_1 + 0x1834) = uVar11;
            lVar12 = FUN_1001c64d2((ulong)uVar11 + 0x800,uVar14,(ulong)uVar3 % (ulong)uVar2);
            *(long *)(param_1 + 0x1820) = lVar12;
            if (lVar12 != 0) {
              *(double *)(param_1 + 0x1810) = param_2[4];
              dVar7 = *param_2;
              dVar8 = param_2[1];
              uVar4 = *(undefined4 *)((long)param_2 + 0x14);
              uVar5 = *(undefined4 *)(param_2 + 3);
              uVar6 = *(undefined4 *)((long)param_2 + 0x1c);
              *(undefined4 *)(param_1 + 0x1800) = *(undefined4 *)(param_2 + 2);
              *(undefined4 *)(param_1 + 0x1804) = uVar4;
              *(undefined4 *)(param_1 + 0x1808) = uVar5;
              *(undefined4 *)(param_1 + 0x180c) = uVar6;
              *(double *)(param_1 + 0x17f0) = dVar7;
              *(double *)(param_1 + 0x17f8) = dVar8;
              auVar16._0_8_ = ((double)*(uint *)(param_1 + 0x17ac) * *param_2) / _DAT_100708b48;
              auVar16._8_8_ = 0;
              auVar16 = roundsd(auVar16,auVar16,9);
              *(long *)(param_1 + 0x17b8) = auVar16._0_8_;
              FUN_10035fb19(param_1);
              iVar15 = 0;
              goto LAB_10046e304;
            }
            uVar13 = FUN_1001cc310();
            cVar9 = _os_log_type_enabled(uVar13,0x10);
            if (cVar9 != '\0') {
              local_4a = "decoderData->convertedBuffer != nullptr";
              goto LAB_10046e39d;
            }
            goto LAB_10046e2a2;
          }
          uVar13 = FUN_1001cc310();
          cVar9 = _os_log_type_enabled(uVar13,0x10);
          if (cVar9 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
            goto LAB_10046e361;
          }
        }
        else {
          uVar13 = FUN_1001cc310();
          cVar9 = _os_log_type_enabled(uVar13,0x10);
          if (cVar9 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
LAB_10046e361:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        iVar15 = 0;
        if (iVar10 == 0) goto LAB_10046e304;
      }
    }
LAB_10046e2b5:
    if (*plVar1 != 0) {
      FUN_10015ea60();
      *plVar1 = 0;
    }
    if (*(long *)(param_1 + 0x1820) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(param_1 + 0x1820) = 0;
    }
    iVar15 = iVar10;
    if (*(long *)(param_1 + 0x1868) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(param_1 + 0x1868) = 0;
    }
  }
LAB_10046e304:
  FUN_10046d6f2(param_1);
LAB_10046e30c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar15;
}

