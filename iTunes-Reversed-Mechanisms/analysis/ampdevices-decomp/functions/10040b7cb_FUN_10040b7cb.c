// name: FUN_10040b7cb
// address: 10040b7cb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10040b7cb(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 void *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_528 [2];
  long local_518 [4];
  long *local_4f8;
  code *local_4e8;
  undefined8 *puStack_4e0;
  undefined8 local_4d8;
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6;
  int local_4c4;
  undefined1 local_4c0 [16];
  long local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [1056];
  double local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4f8 = (long *)0x0;
  local_528[0] = 0;
  local_4e8 = (code *)0x0;
  puStack_4e0 = (undefined8 *)0x0;
  local_4d8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (param_1 == 0) {
LAB_10040b93a:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_10040ba46:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10040ba6b:
    iVar5 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_10040b93a;
    }
    if (param_2 == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_4a = "fileItem != nullptr";
        goto LAB_10040ba46;
      }
      goto LAB_10040ba6b;
    }
    cVar4 = FUN_10017cbd0(param_3);
    if (cVar4 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_4a = "JRFileSpecIsValid(parentFolderSpec)";
        goto LAB_10040ba46;
      }
      goto LAB_10040ba6b;
    }
    if (param_5 == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_4a = "workThread != nullptr";
        goto LAB_10040ba46;
      }
      goto LAB_10040ba6b;
    }
    FUN_1001c62d9(local_528,0x4d0);
    iVar5 = FUN_1001e96d3(&local_70,1,0);
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        local_4e8 = FUN_10040f030;
        puStack_4e0 = local_528;
        uVar6 = *(uint *)(param_2 + 4) & 4;
        local_4c7 = (undefined1)(uVar6 >> 2);
        iVar5 = *(int *)(param_2 + 0x60);
        if (((iVar5 < 0x67656e75) || (iVar5 == 0x67656e75)) || (local_4c6 = 1, iVar5 != 0x7472616b))
        {
          local_4c6 = 0;
        }
        local_4c4 = *(int *)(param_2 + 100);
        local_4b0 = param_2 + 0x68;
        local_60 = 1;
        local_4a8 = param_3;
        local_4a0 = param_4;
        if (local_4c4 == 0x400000 && uVar6 != 0) {
          lVar8 = FUN_10031b48b(param_2 + 8);
          if ((lVar8 == 0) || (cVar4 = FUN_1002bd20d(lVar8), cVar4 == '\0')) {
            pcVar10 = "epub";
          }
          else {
            pcVar10 = "ibooks";
          }
          FUN_1001dfbb3(pcVar10,local_4c0,0x10);
        }
        iVar5 = FUN_1001ecf95(param_5,local_528);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            do {
              iVar5 = FUN_1001e9afc(&local_70);
              if (iVar5 != 0) {
                if (iVar5 == -0x80) goto LAB_10040bded;
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 == '\0') goto LAB_10040bded;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                goto LAB_10040bef3;
              }
              iVar5 = FUN_1001e9b10(&local_70);
              if (iVar5 != 0) {
                if (iVar5 == -0x80) goto LAB_10040bded;
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 == '\0') goto LAB_10040bded;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                goto LAB_10040bef3;
              }
              if ((local_78 < DAT_100701af0) || (DAT_100700458 < local_78)) {
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "context.ratioComplete >= 0. && context.ratioComplete <= 1.";
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              iVar5 = local_60;
              dVar3 = _UNK_10070d3d8;
              dVar2 = _DAT_10070d3d0;
              uVar13 = (undefined4)((ulong)DAT_10070d3c0 >> 0x20);
              uVar12 = (undefined4)DAT_10070d3c0;
              dVar1 = (((double)CONCAT44(uVar12,(int)*(undefined8 *)(param_2 + 0x488)) -
                       _DAT_10070d3d0) +
                      ((double)CONCAT44(uVar13,(int)((ulong)*(undefined8 *)(param_2 + 0x488) >> 0x20
                                                    )) - _UNK_10070d3d8)) * local_78;
              uVar9 = (ulong)dVar1;
              uVar9 = (long)(dVar1 - DAT_10070e4c0) & (long)uVar9 >> 0x3f | uVar9;
              *(ulong *)(param_1 + 0x2c00) = uVar9;
              *(double *)(param_1 + 0x2c68) = local_78;
              lVar8 = uVar9 + *(long *)(param_1 + 0x2bf8);
              auVar11._8_4_ = (int)((ulong)lVar8 >> 0x20);
              auVar11._0_8_ = lVar8;
              auVar11._12_4_ = uVar13;
              *(double *)(param_1 + 0x2c70) =
                   (((double)CONCAT44(uVar12,(int)lVar8) - dVar2) + (auVar11._8_8_ - dVar3)) /
                   (((double)CONCAT44(uVar12,(int)*(undefined8 *)(param_1 + 0x2bf0)) - dVar2) +
                   ((double)CONCAT44(uVar13,(int)((ulong)*(undefined8 *)(param_1 + 0x2bf0) >> 0x20))
                   - dVar3));
              uVar6 = *(uint *)(param_1 + 0x2be0);
              *(uint *)(param_1 + 0x2be0) = uVar6 | 0x40000;
              if ((uVar6 & 0xc0) != 0) {
                local_4c8 = 1;
              }
            } while (local_60 == 1);
            if (param_6 != (void *)0x0) {
              _memcpy(param_6,local_498,0x420);
            }
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_10040bef3:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
LAB_10040bded:
        FUN_1001e9bb5(&local_70);
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (local_4f8 == local_518) {
    lVar8 = 0x20;
  }
  else {
    lVar8 = 0x28;
    if (local_4f8 == (long *)0x0) goto LAB_10040baa1;
  }
  (**(code **)(*local_4f8 + lVar8))();
LAB_10040baa1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

