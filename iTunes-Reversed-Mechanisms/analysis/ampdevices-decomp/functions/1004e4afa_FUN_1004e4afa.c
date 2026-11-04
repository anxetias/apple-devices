// name: FUN_1004e4afa
// address: 1004e4afa

int FUN_1004e4afa(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004e4b97:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004e4b97;
    }
    if (*(long *)(param_1 + 0x7168) == 0) {
      iVar2 = 0;
      if ((ulong)*(uint *)(param_1 + 0x61d4) != 0) {
        *(ulong *)(param_1 + 0x153b0) = (ulong)*(uint *)(param_1 + 0x61d4) << 0x14;
        iVar2 = 0;
      }
    }
    else {
      FUN_10017060f(*(undefined8 *)(param_1 + 0x15978));
      *(undefined8 *)(param_1 + 0x15978) = 0;
      if (*(char *)(param_1 + 0x3a2) == '\0') {
        FUN_1004e17a4(param_1);
        if (param_2 == '\0') {
          FUN_1005bd9cb(*(undefined8 *)(param_1 + 0x7168));
          iVar2 = FUN_1005bd384(*(undefined8 *)(param_1 + 0x7168),param_1 + 0x7170);
          if (iVar2 == 0) {
            FUN_1004e50d2(param_1);
          }
        }
        else {
          iVar2 = FUN_1005b9808(*(undefined8 *)(param_1 + 0x7168),5,0,FUN_1004e4f5a,param_1);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) goto LAB_1004e4bc3;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
        }
        FUN_1004e1e68(param_1);
      }
      else {
        if (*(long *)(param_1 + 0x153b0) == 0) {
          iVar2 = FUN_1005bd842(*(undefined8 *)(param_1 + 0x7168),(undefined8 *)(param_1 + 0x153b0))
          ;
          if (iVar2 != 0) goto LAB_1004e4bc3;
          uVar3 = FUN_1004e4e24(param_1);
          *(long *)(param_1 + 0x153b0) = *(long *)(param_1 + 0x153b0) + (ulong)uVar3;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar4 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            local_44 = *(char **)(param_1 + 0x153b0);
            local_48 = 0x8000100;
            __os_log_impl(0x100000000,uVar4,1,"stats> reservedDiskBytes = %llu",&local_48,0xc);
          }
        }
        iVar2 = 0;
      }
    }
  }
LAB_1004e4bc3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

