// name: FUN_10044f1a0
// address: 10044f1a0

int FUN_10044f1a0(int *param_1)

{
  long lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "params != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*param_1 == 0x61736b75) {
    cVar2 = FUN_1001b8428(param_1 + 10);
    if (cVar2 == '\0') {
      cVar2 = FUN_1001b8428(param_1 + 0x12);
      if (cVar2 == '\0') {
        cVar2 = FUN_1001b8428(param_1 + 2);
        if (cVar2 != '\0') {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220302;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "params->uuid.IsEmpty() == false";
            local_42 = 0x822;
            local_40 = "No UUID specified in AskUserParams.";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: %{public}s (%{public}s)",
                                &local_58,0x20);
          }
          FUN_1001782e9(0,0);
        }
        cVar2 = FUN_1001edfc7();
        if (cVar2 == '\0') {
          pvVar6 = (void *)FUN_1001c629e(0x200,&DAT_100711c6e);
          if (pvVar6 == (void *)0x0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "delayedInfo != nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_10044eef2(pvVar6);
            *(undefined8 *)((long)pvVar6 + 0x1c4) = 0;
            *(undefined8 *)((long)pvVar6 + 0x1cc) = 0;
            *(undefined8 *)((long)pvVar6 + 0x1d8) = 0;
            *(undefined4 *)((long)pvVar6 + 0x1e0) = 0;
            *(undefined8 *)((long)pvVar6 + 0x1e8) = 0;
            *(undefined8 *)((long)pvVar6 + 0x1f0) = 0;
            FUN_10044f74c(pvVar6,param_1);
            cVar2 = FUN_1001ee056();
            lVar1 = (long)pvVar6 + 0x1c4;
            lVar7 = (long)pvVar6 + 0x1d8;
            *(char *)((long)pvVar6 + 0x1c2) = cVar2;
            if (cVar2 == '\0') {
              iVar4 = FUN_1001e8dd6(lVar7,0,0);
            }
            else {
              iVar4 = FUN_1001e96d3(lVar1,0,0);
            }
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                FUN_10044f8d6(FUN_10044f9a9,pvVar6);
                if (*(char *)((long)pvVar6 + 0x1c2) == '\0') {
                  FUN_1001e944c(lVar7);
                  FUN_1001e9587(lVar7);
                }
                else {
                  FUN_1001e9afc(lVar1);
                  FUN_1001e9bb5(lVar1);
                }
                sVar3 = *(short *)((long)pvVar6 + 0x1c0);
                if (*param_1 != 0x61736b75) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "params->magic == kAskUserParamsMagic";
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)((long)pvVar6 + 0x1a0);
                FUN_10020dfaa(pvVar6);
                operator_delete(pvVar6);
                goto LAB_10044f25b;
              }
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            FUN_10020dfaa(pvVar6);
            operator_delete(pvVar6);
          }
          sVar3 = 0;
        }
        else {
          sVar3 = FUN_100242b38(param_1);
        }
        goto LAB_10044f25b;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "params->okButtonString.IsEmpty()==false";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "params->message.IsEmpty() == false";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "params->magic == kAskUserParamsMagic";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  sVar3 = 2;
LAB_10044f25b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

