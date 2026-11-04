// name: FUN_10024ebc1
// address: 10024ebc1

undefined8 FUN_10024ebc1(undefined8 param_1,char param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100166c1b(param_1,&cf_BuildVersion);
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x822;
      local_7a = "buildVersionString != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_c8 = param_3;
    lVar3 = FUN_100166c1b(param_1,&cf_ProductVersion);
    if (lVar3 == 0 && param_2 == '\0') {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x822;
        local_7a = "(productVersionString != nullptr) || onlyRequireFirmwareURLAndBuildVersion";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      local_c0 = FUN_100166c1b(param_1,&cf_QueueURL);
      lVar4 = FUN_100166c1b(param_1,&cf_FirmwareURL);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_88 = 0x8220202;
          local_84 = "Assertion failure";
          local_7c = 0x822;
          local_7a = "firmwareURLString != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        local_b8 = lVar4;
        local_b0 = FUN_100166c1b(param_1,&cf_FirmwareSHA1);
        local_a8 = FUN_100166c1b(param_1,&cf_DocumentationURL);
        if (local_a8 != 0 || param_2 != '\0') {
          cVar1 = FUN_100167740(param_1,&cf_EpochVersion,&local_8c);
          if (cVar1 == '\0') {
            local_8c = 0xffffffff;
          }
          if (param_4 < 5) {
            bVar6 = false;
          }
          else {
            cVar1 = FUN_100167dd2(param_1,&cf_IsPersonalizable,1);
            bVar6 = cVar1 != '\0';
          }
          local_a0[0] = 0x73766d64;
          local_98 = FUN_1001705fc(lVar2);
          local_d8[0] = 0x73766d64;
          local_d0 = FUN_1001705fc(lVar3);
          FUN_10024f288(&local_88,local_a0,local_d8,local_c0,local_b8,local_b0,local_a8,local_8c,
                        bVar6);
          FUN_10024adb0(local_c8,&local_88);
          FUN_10024f3ba(&local_88);
          FUN_100249fee(local_d8);
          FUN_100249fca(local_a0);
          uVar5 = 1;
          goto LAB_10024ed88;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_88 = 0x8220202;
          local_84 = "Assertion failure";
          local_7c = 0x822;
          local_7a = "(documentationURLString != nullptr) || onlyRequireFirmwareURLAndBuildVersion";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  uVar5 = 0;
LAB_10024ed88:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

