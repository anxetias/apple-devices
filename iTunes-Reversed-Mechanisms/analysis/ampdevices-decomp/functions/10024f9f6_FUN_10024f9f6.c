// name: FUN_10024f9f6
// address: 10024f9f6

undefined8
FUN_10024f9f6(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long param_6,
             long param_7,char param_8)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  ulong uVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x8c) = 1;
  }
  if ((*(char *)(param_1 + 0x8b) == '\0') || (**(long **)(param_1 + 0x38) == 1)) {
    lVar3 = FUN_1001705fc(param_2);
    *(long *)(param_1 + 0x68) = lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x68);
  }
  uVar4 = 0;
  if (lVar3 != 0) goto LAB_10024fd40;
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "mccString != nullptr";
LAB_10024fd0c:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_4 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "mncString != nullptr";
      goto LAB_10024fd0c;
    }
  }
  else {
    lVar3 = FUN_1001736b8(DAT_1008c4d90,0,&cf_____,param_3,param_4);
    *(long *)(param_1 + 0x50) = lVar3;
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mMccMncString != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0xffffff94;
      goto LAB_10024fd40;
    }
    lVar3 = FUN_1001737f8(lVar3);
    if (lVar3 != 0) {
      uVar4 = FUN_1001705fc(param_5);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      uVar4 = 0;
      bVar9 = false;
      if (param_8 != '\0') {
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        lVar3 = FUN_1005f4d4c(&cf_MobileDeviceCarriersByMccMnc,0x6950686e);
        if (lVar3 == 0) {
          FUN_10017060f(0);
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          uVar4 = 0x5c6;
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,0x5c6);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_10024fd40;
        }
        lVar5 = FUN_100166b7f(lVar3,uVar4);
        if (lVar5 == 0) {
          FUN_10017060f(lVar3);
          bVar9 = true;
          uVar4 = 0x67b;
        }
        else {
          lVar5 = FUN_100166844(lVar5,&cf_MVNOs);
          if ((lVar5 == 0) || (lVar6 = FUN_10017076e(lVar5), lVar6 < 1)) {
            uVar4 = 0;
            bVar9 = false;
          }
          else {
            uVar8 = 1;
            uVar10 = 0;
            bVar9 = false;
            bVar1 = false;
            do {
              lVar6 = FUN_10016499b(lVar5,uVar10);
              if (lVar6 == 0) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "mvnoDictionary != nullptr";
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                cVar2 = FUN_100171439(lVar6,&cf_GID1);
                bVar1 = (bool)(bVar1 | cVar2 != '\0');
                cVar2 = FUN_100171439(lVar6,&cf_GID2);
                bVar9 = (bool)(bVar9 | cVar2 != '\0');
              }
              uVar10 = (ulong)uVar8;
              lVar6 = FUN_10017076e(lVar5);
              uVar8 = uVar8 + 1;
            } while ((long)uVar10 < lVar6);
            uVar4 = 0x67b;
            if (!bVar1) {
              uVar4 = 0;
            }
          }
          FUN_10017060f(lVar3);
        }
      }
      if (param_6 != 0) {
        uVar4 = 0;
        lVar3 = FUN_1001699e7(DAT_1008c4d90,param_6,0);
        *(long *)(param_1 + 0x58) = lVar3;
        if (lVar3 == 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "mGID1String != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          uVar4 = 0;
          FUN_1001782e9(0,0);
        }
      }
      if (param_7 == 0) {
        if (bVar9) {
          uVar4 = 0x67b;
        }
      }
      else {
        lVar3 = FUN_1001699e7(DAT_1008c4d90,param_7,0);
        *(long *)(param_1 + 0x60) = lVar3;
        if (lVar3 == 0) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "mGID2String != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      goto LAB_10024fd40;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "::JRCFStringGetLength(mMccMncString) != 0";
      goto LAB_10024fd0c;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0x673;
LAB_10024fd40:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

