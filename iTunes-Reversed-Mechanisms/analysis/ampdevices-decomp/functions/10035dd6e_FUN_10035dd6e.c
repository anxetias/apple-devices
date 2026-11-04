// name: FUN_10035dd6e
// address: 10035dd6e

int FUN_10035dd6e(void *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  int *piVar5;
  int local_698;
  char *local_694;
  undefined2 local_68c;
  int local_68a;
  int local_678;
  char *local_674;
  undefined2 local_66c;
  undefined4 local_66a;
  char cStack_666;
  int local_358;
  char *local_354;
  undefined2 local_34c;
  char local_314;
  char local_313;
  char local_312;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      piVar5 = &local_358;
      local_358 = 0x8220202;
      local_354 = "Assertion failure";
      local_34c = 0x822;
      pcVar4 = "srcVideoCodecInfo != nullptr";
LAB_10035e1ba:
      *(char **)((long)piVar5 + 0xe) = pcVar4;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",piVar5,0x16);
    }
LAB_10035dee9:
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_10035def8;
  }
  _memcpy(&local_358,param_1,0x31c);
  if (param_2 != 0 && local_358 == 0) {
    cVar1 = FUN_100170633(param_2,&cf_H_264);
    local_358 = 0x61766331;
    if ((((cVar1 == '\0') && (cVar1 = FUN_100170633(param_2,&cf_H_264LC), cVar1 == '\0')) &&
        (cVar1 = FUN_100170633(param_2,&cf_h264HDVideoCodecInfo), cVar1 == '\0')) &&
       (cVar1 = FUN_100170633(param_2,&cf_h264SDVideoCodecInfo), cVar1 == '\0')) {
      cVar1 = FUN_100170633(param_2,&cf_MPEG4);
      local_358 = 0x6d703476;
      if ((cVar1 == '\0') && (cVar1 = FUN_100170633(param_2,&cf_mpeg4VideoCodecInfo), cVar1 == '\0')
         ) {
        cVar1 = FUN_100173f7c(param_2,&cf_HEVC);
        local_358 = 0x68766331;
        if (cVar1 == '\0') {
          local_358 = 0;
        }
      }
    }
  }
  if (local_358 == 0x61766331) {
    if (local_314 == '\0') {
LAB_10035dfb9:
      if (local_313 == '\0') {
        cVar1 = local_312;
        if (local_312 == '\0') {
          if (local_314 == '\0') goto LAB_10035e070;
        }
        else {
LAB_10035e101:
          _memcpy(&local_678,&local_358,0x31c);
          local_66a = CONCAT13(100,(undefined3)local_66a);
          cStack_666 = cVar1;
          iVar2 = FUN_10035e1e9(&local_678,param_4);
          if (iVar2 != 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 == '\0') goto LAB_10035def8;
            piVar5 = &local_698;
            local_698 = 0x8220202;
            local_694 = "Assertion failure";
            local_68c = 0x400;
            local_68a = iVar2;
            goto LAB_10035e0d9;
          }
        }
      }
      else {
        _memcpy(&local_678,&local_358,0x31c);
        local_66a = CONCAT13(0x4d,(undefined3)local_66a);
        cStack_666 = local_313;
        iVar2 = FUN_10035e1e9(&local_678,param_4);
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_10035def8;
          piVar5 = &local_698;
          local_698 = 0x8220202;
          local_694 = "Assertion failure";
          local_68c = 0x400;
          local_68a = iVar2;
          goto LAB_10035e0d9;
        }
        cVar1 = local_312;
        if (local_312 != '\0') goto LAB_10035e101;
      }
LAB_10035e18b:
      iVar2 = 0;
      goto LAB_10035def8;
    }
    _memcpy(&local_678,&local_358,0x31c);
    local_66a = CONCAT13(0x42,(undefined3)local_66a);
    cStack_666 = local_314;
    iVar2 = FUN_10035e1e9(&local_678,param_4);
    if (iVar2 == 0) goto LAB_10035dfb9;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10035def8;
    piVar5 = &local_698;
    local_698 = 0x8220202;
    local_694 = "Assertion failure";
    local_68c = 0x400;
    local_68a = iVar2;
  }
  else {
    if (local_358 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        piVar5 = &local_678;
        local_678 = 0x8220202;
        local_674 = "Assertion failure";
        local_66c = 0x822;
        pcVar4 = "videoCodecInfo.codecType != kUnknownDeviceVideoCodecType";
        goto LAB_10035e1ba;
      }
      goto LAB_10035dee9;
    }
LAB_10035e070:
    iVar2 = FUN_10035e1e9(&local_358,param_4);
    if (iVar2 == 0) goto LAB_10035e18b;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10035def8;
    piVar5 = &local_678;
    local_678 = 0x8220202;
    local_674 = "Assertion failure";
    local_66c = 0x400;
    local_66a = iVar2;
  }
LAB_10035e0d9:
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",piVar5,0x12);
LAB_10035def8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

