// name: FUN_1003362a8
// address: 1003362a8

int FUN_1003362a8(double param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_10033634a:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_10033660c:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)(param_2 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10033634a;
    }
    cVar1 = FUN_1001ee068();
    if (cVar1 != '\0') {
      iVar2 = FUN_10033666b(param_2);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          dVar4 = DAT_100744e08;
          if (0.0 <= param_1) {
            dVar4 = (double)FUN_1001ebd46();
            dVar4 = dVar4 + param_1;
          }
          while (*(int *)(param_2 + 0x167d8) != 0) {
            dVar5 = (double)FUN_1001ebd46();
            if (dVar4 <= dVar5) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar3 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 != '\0') {
                local_34 = *(char **)(param_2 + 0x152c8);
                local_38 = 0x8420102;
                __os_log_impl(0x100000000,uVar3,1,
                              "airtraffic> timed out waiting for metadata sync to complete for device %{public}@"
                              ,&local_38,0xc);
              }
              FUN_100333742(param_2,7);
              iVar2 = 0x481;
              goto LAB_1003363b8;
            }
            cVar1 = FUN_100333382(param_2);
            if (cVar1 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar3 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 != '\0') {
                local_34 = *(char **)(param_2 + 0x152c8);
                local_38 = 0x8420102;
                __os_log_impl(0x100000000,uVar3,1,
                              "airtraffic> sync canceled waiting for metadata sync to complete for device %{public}@"
                              ,&local_38,0xc);
              }
              FUN_100333742(param_2,2);
              iVar2 = -0x80;
              if (*(char *)(param_2 + 0x6abd) == '\0') {
                iVar2 = 0x482;
              }
              goto LAB_1003363b8;
            }
            FUN_1001b0d8d(DAT_10070f2b8);
          }
          iVar2 = *(int *)(param_2 + 0x167dc);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            FUN_1003360f2(param_2,iVar2);
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x400;
            local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
          }
        }
      }
      goto LAB_1003363b8;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "JRIsCurrentThreadSecondaryCooperativeThread()";
      goto LAB_10033660c;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1003363b8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

