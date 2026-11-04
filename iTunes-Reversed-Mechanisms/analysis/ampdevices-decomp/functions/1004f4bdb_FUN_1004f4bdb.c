// name: FUN_1004f4bdb
// address: 1004f4bdb

int FUN_1004f4bdb(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int local_88;
  char *pcStack_84;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_88 = 0x8220202;
      pcStack_84 = "Assertion failure";
      uStack_7c = 0x822;
      uStack_7a = 0x6610;
      uStack_78 = 0x7d;
      uStack_76 = 1;
      uStack_74 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_1004f4cf7;
  }
  lVar6 = FUN_1004de449();
  if (lVar6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      pcVar9 = "handlerData != nullptr";
LAB_1004f507a:
      uStack_7c = 0x822;
      pcStack_84 = "Assertion failure";
      local_88 = 0x8220202;
      uStack_7a = SUB82(pcVar9,0);
      uStack_78 = (undefined2)((ulong)pcVar9 >> 0x10);
      uStack_76 = (undefined2)((ulong)pcVar9 >> 0x20);
      uStack_74 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
  }
  else {
    if (*(char *)(lVar6 + 0x14cd8) != '\0') {
      if (*(char *)(lVar6 + 0x151d0) == '\0') {
        cVar4 = FUN_1004e7efc(lVar6);
        if (cVar4 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_88 = 0x8220202;
            pcStack_84 = "Assertion failure";
            uStack_7c = 0x822;
            uStack_7a = 0x664a;
            uStack_78 = 0x7d;
            uStack_76 = 1;
            uStack_74 = 0;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
          }
          FUN_1001782e9(0,0);
          iVar5 = 0x48c;
        }
        else {
          iVar5 = 0;
          if (((*param_2 == 0x4f4c5354) && (param_2[1] != 0)) &&
             (uVar12 = (int)((ulong)(*(long *)(param_2 + 4) - *(long *)(param_2 + 2)) >> 3) *
                       -0x49249249, uVar12 != 0)) {
            iVar5 = FUN_1004dccf5(lVar6,"");
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                FUN_100313e0b(*(undefined8 *)(lVar6 + 0x30));
                uVar13 = 0;
                do {
                  if ((*param_2 == 0x4f4c5354) && (param_2[1] != 0)) {
                    lVar8 = *(long *)(param_2 + 2);
                    uVar10 = (*(long *)(param_2 + 4) - lVar8 >> 3) * 0x6db6db6db6db6db7;
                    if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_1004f4e43;
                    lVar11 = uVar13 * 0x38;
                    piVar1 = (int *)(lVar8 + lVar11);
                    local_88 = *piVar1;
                    pcStack_84 = *(char **)(piVar1 + 1);
                    iVar5 = piVar1[3];
                    piVar2 = (int *)(lVar8 + 0x10 + lVar11);
                    iVar3 = *piVar2;
                    iStack_70 = piVar2[2];
                    iStack_6c = piVar2[3];
                    lVar11 = lVar8 + 0x1c + lVar11;
                    uStack_68 = *(undefined4 *)(lVar11 + 4);
                    uStack_64 = *(undefined4 *)(lVar11 + 8);
                    uStack_60 = *(undefined4 *)(lVar11 + 0xc);
                    uStack_7c = (undefined2)iVar5;
                    uStack_7a = (undefined2)((uint)iVar5 >> 0x10);
                    uStack_78 = (undefined2)iVar3;
                    uStack_76 = (undefined2)((uint)iVar3 >> 0x10);
                    uStack_74 = (undefined2)piVar2[1];
                    uStack_72 = (undefined2)((uint)piVar2[1] >> 0x10);
                    if (local_88 == 0) {
                      uVar7 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar4 != '\0') {
                        local_4a = "objectSpec.trackDataID != 0";
LAB_1004f4f5b:
                        local_4c = 0x822;
                        local_54 = "Assertion failure";
                        local_58 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
LAB_1004f4e8a:
                      FUN_1001782e9(0);
                    }
                    else {
                      if (((iVar3 == 0) && (iVar5 == 0)) && (piVar1[1] == 0)) {
                        uVar7 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar7);
                        if (cVar4 != '\0') {
                          local_4a = 
                          "objectSpec.playlistItemID != 0 || objectSpec.playlistID != 0 || objectSpec.trackID != 0"
                          ;
                          goto LAB_1004f4f5b;
                        }
                        goto LAB_1004f4e8a;
                      }
                      if (iVar3 == 0) {
                        if (iVar5 == 0) {
                          lVar8 = FUN_10031b48b(&local_88);
                          if (lVar8 != 0) {
                            FUN_1004737f5(lVar8);
                          }
                        }
                        else {
                          lVar8 = FUN_1004909fc();
                          if (lVar8 != 0) {
                            FUN_100488d27(lVar8,0,0);
                          }
                        }
                      }
                      else {
                        lVar8 = FUN_100490af0();
                        if (lVar8 != 0) {
                          FUN_1003a6ecc(lVar8);
                        }
                      }
                    }
                  }
                  else {
LAB_1004f4e43:
                    uVar7 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar4 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffffce);
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 != uVar12);
                FUN_1002fbbfc(*(undefined8 *)(lVar6 + 0x30));
                FUN_1004dd69c(lVar6,"");
                iVar5 = 0;
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  local_88 = 0x8220202;
                  pcStack_84 = "Assertion failure";
                  uStack_7c = 0x400;
                  uStack_7a = (undefined2)iVar5;
                  uStack_78 = (undefined2)((uint)iVar5 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_88,
                                      0x12);
                }
              }
            }
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_88 = 0x8220202;
          pcStack_84 = "Assertion failure";
          uStack_7c = 0x822;
          uStack_7a = 0x6669;
          uStack_78 = 0x7d;
          uStack_76 = 1;
          uStack_74 = 0;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
        }
        FUN_1001782e9(0,0);
        iVar5 = 0x47d;
      }
      goto LAB_1004f4cf7;
    }
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      pcVar9 = "handlerData->devicePrefs.configured";
      goto LAB_1004f507a;
    }
  }
  FUN_1001782e9(0,0);
  iVar5 = 0x45f;
LAB_1004f4cf7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

