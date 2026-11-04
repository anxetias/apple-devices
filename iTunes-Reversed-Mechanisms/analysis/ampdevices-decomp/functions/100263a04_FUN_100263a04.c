// name: FUN_100263a04
// address: 100263a04

undefined8
FUN_100263a04(long param_1,undefined8 param_2,undefined2 param_3,int param_4,char param_5,
             long *param_6,long *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_7 == (long *)0x0) {
    uVar16 = FUN_1001cc310();
    cVar13 = _os_log_type_enabled(uVar16,0x10);
    if (cVar13 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "deviceRefPtr != nullptr";
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_7 = 0;
    if (param_1 == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "deviceID != 0";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_4 == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "deviceClass != 0";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6 == (long *)0x0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (*param_6 == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->acquireLockProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6[1] == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->releaseLockProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6[2] == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->getPreferenceValueProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6[3] == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->setPreferenceValueProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6[4] == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->getNameProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6[5] == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->unmountProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6[6] == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->unmountAndEjectProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6[7] == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->ejectProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_6[8] == 0) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "callbacks->simulateDetachProc != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (DAT_1008a2e80 != 0) {
        lVar15 = FUN_100263880(param_1);
        uVar16 = 0;
        if (lVar15 == 0) {
          lVar15 = FUN_1001c629e(0x6e20,&DAT_100711c6e);
          if (lVar15 == 0) {
            uVar16 = FUN_1001cc310();
            cVar13 = _os_log_type_enabled(uVar16,0x10);
            if (cVar13 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "deviceRecord != nullptr";
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            uVar16 = 0xffffff94;
            lVar15 = 0;
          }
          else {
            *(undefined8 *)(lVar15 + 0x6d80) = 0;
            *(undefined8 *)(lVar15 + 0x6d88) = 0;
            *(undefined4 *)(lVar15 + 8) = 0x706f6464;
            uVar14 = FUN_1001ea5dc();
            *(undefined4 *)(lVar15 + 0xc) = uVar14;
            *(long *)(lVar15 + 0x10) = param_1;
            *(undefined2 *)(lVar15 + 0x24) = param_3;
            lVar12 = param_6[1];
            lVar6 = param_6[2];
            uVar14 = *(undefined4 *)((long)param_6 + 0x14);
            lVar7 = param_6[3];
            uVar1 = *(undefined4 *)((long)param_6 + 0x1c);
            lVar8 = param_6[4];
            uVar2 = *(undefined4 *)((long)param_6 + 0x24);
            lVar9 = param_6[5];
            uVar3 = *(undefined4 *)((long)param_6 + 0x2c);
            lVar10 = param_6[6];
            uVar4 = *(undefined4 *)((long)param_6 + 0x34);
            lVar11 = param_6[7];
            uVar5 = *(undefined4 *)((long)param_6 + 0x3c);
            *(long *)(lVar15 + 0x468) = *param_6;
            *(long *)(lVar15 + 0x470) = lVar12;
            *(int *)(lVar15 + 0x478) = (int)lVar6;
            *(undefined4 *)(lVar15 + 0x47c) = uVar14;
            *(int *)(lVar15 + 0x480) = (int)lVar7;
            *(undefined4 *)(lVar15 + 0x484) = uVar1;
            *(int *)(lVar15 + 0x488) = (int)lVar8;
            *(undefined4 *)(lVar15 + 0x48c) = uVar2;
            *(int *)(lVar15 + 0x490) = (int)lVar9;
            *(undefined4 *)(lVar15 + 0x494) = uVar3;
            *(int *)(lVar15 + 0x498) = (int)lVar10;
            *(undefined4 *)(lVar15 + 0x49c) = uVar4;
            *(int *)(lVar15 + 0x4a0) = (int)lVar11;
            *(undefined4 *)(lVar15 + 0x4a4) = uVar5;
            lVar12 = param_6[9];
            *(long *)(lVar15 + 0x4a8) = param_6[8];
            *(long *)(lVar15 + 0x4b0) = lVar12;
            lVar12 = param_6[0xb];
            *(long *)(lVar15 + 0x4b8) = param_6[10];
            *(long *)(lVar15 + 0x4c0) = lVar12;
            uVar14 = *(undefined4 *)((long)param_6 + 100);
            lVar12 = param_6[0xd];
            uVar1 = *(undefined4 *)((long)param_6 + 0x6c);
            *(int *)(lVar15 + 0x4c8) = (int)param_6[0xc];
            *(undefined4 *)(lVar15 + 0x4cc) = uVar14;
            *(int *)(lVar15 + 0x4d0) = (int)lVar12;
            *(undefined4 *)(lVar15 + 0x4d4) = uVar1;
            *(undefined1 *)(lVar15 + 0x34) = 1;
            *(undefined8 *)(lVar15 + 0x18) = param_2;
            *(int *)(lVar15 + 0x30) = param_4;
            *(char *)(lVar15 + 0x3f) = param_5;
            *(bool *)(lVar15 + 0x40) = param_5 == '\0';
            *(undefined1 *)(lVar15 + 0x35) = *(undefined1 *)(DAT_1008a2e80 + 0x30);
            FUN_10026394e(lVar15);
            FUN_1001ea897(lVar15,DAT_1008a2e80);
          }
        }
        *param_7 = lVar15;
        goto LAB_100263f73;
      }
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "sSupportContext != nullptr";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  uVar16 = 0xffffffce;
LAB_100263f73:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}

