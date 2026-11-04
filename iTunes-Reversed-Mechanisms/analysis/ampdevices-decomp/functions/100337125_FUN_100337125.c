// name: FUN_100337125
// address: 100337125

int FUN_100337125(long param_1,char *param_2,char param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003372dc:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_44a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_100337362:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure (expected to be true)";
        local_44c = 0x822;
        local_44a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003372dc;
    }
    if (param_4 != 0) {
      iVar2 = FUN_1001e115f(param_2,local_658);
      if (iVar2 == -0x80) goto LAB_100337396;
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x400;
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
        goto LAB_100337396;
      }
      iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x6169726c,1,
                            &local_458);
      if (iVar2 == -0x80) {
LAB_10033743f:
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 == '\0') goto LAB_100337396;
        local_678 = 0x4000100;
        local_674 = (char *)CONCAT44(local_674._4_4_,iVar2);
        pcVar5 = "airtraffic> failed to create Airlock folder (%d)";
        uVar6 = 8;
      }
      else {
        if (iVar2 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_678 = 0x8220202;
            local_674 = "Assertion failure";
            local_66c = 0x400;
            local_66a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_678,0x12);
          }
          goto LAB_10033743f;
        }
        iVar3 = FUN_10017ecc9(&local_458,local_658,param_4,0);
        if (param_3 == '\0' || iVar3 == 0) {
          iVar2 = 0;
          if (iVar3 != 0) {
            if (iVar3 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_678 = 0x8220202;
                local_674 = "Assertion failure";
                local_66c = 0x400;
                local_66a = iVar3;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_678,0x12
                                   );
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            iVar2 = iVar3;
            if (cVar1 != '\0') {
              local_678 = 0x8420202;
              local_66c = 0x400;
              local_674 = param_2;
              local_66a = iVar3;
              __os_log_impl(0x100000000,uVar4,0x10,
                            "airtraffic> failed to find Airlock folder for dataclass %{public}@ (%d)"
                            ,&local_678,0x12);
            }
          }
          goto LAB_100337396;
        }
        iVar2 = FUN_100181256(&local_458,local_658,param_4);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) goto LAB_100337396;
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_678 = 0x8220202;
            local_674 = "Assertion failure";
            local_66c = 0x400;
            local_66a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_678,0x12);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 == '\0') goto LAB_100337396;
        local_678 = 0x8420202;
        local_66c = 0x400;
        pcVar5 = "airtraffic> failed to create Airlock folder for dataclass %{public}@ (%d)";
        uVar6 = 0x12;
        local_674 = param_2;
        local_66a = iVar2;
      }
      __os_log_impl(0x100000000,uVar4,0x10,pcVar5,&local_678,uVar6);
      goto LAB_100337396;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_44a = "folderSpec != nullptr";
      goto LAB_100337362;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100337396:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

