// name: FUN_10050ab79
// address: 10050ab79

void FUN_10050ab79(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_cb8;
  char *local_cb4;
  undefined2 local_cac;
  int local_caa;
  undefined4 local_c98;
  char *local_c94;
  undefined2 local_c8c;
  int local_c8a;
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x396) == '\0') {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "handlerData->deviceInfo.useVoiceMemosFolder";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar1 = *(long *)(param_2 + 0x58);
  iVar4 = FUN_1002b0559(lVar1,0x42);
  if (iVar4 == 0) {
    iVar4 = FUN_1002b1039(lVar1,&local_458);
    if (iVar4 == 0) {
      iVar4 = FUN_10017d5ba(&local_458,local_878);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          uVar5 = FUN_1004744bf(param_2,0);
          bVar3 = FUN_10017f77e(local_878,param_1 + 0x15df0);
          if (((byte)(uVar5 >> 0x14) & 1) != bVar3) {
            if (bVar3 != 0) {
              FUN_10032e6f3(param_1,param_2);
            }
            iVar4 = FUN_100317a87(*(undefined8 *)(param_2 + 0x10),lVar1,local_878);
            if (iVar4 != -0x80) {
              if (iVar4 != 0) {
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                if (cVar2 != '\0') {
                  local_c98 = 0x8220202;
                  local_c94 = "Assertion failure";
                  local_c8c = 0x400;
                  local_c8a = iVar4;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_c98,
                                      0x12);
                }
                if (iVar4 != 0) goto LAB_10050abf6;
              }
              iVar4 = FUN_10017fa7b(&local_458,local_878,0,1,&local_c98);
              if (iVar4 != -0x80) {
                if (iVar4 != 0) {
                  uVar6 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar2 != '\0') {
                    local_cb8 = 0x8220202;
                    local_cb4 = "Assertion failure";
                    local_cac = 0x400;
                    local_caa = iVar4;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_cb8,
                                        0x12);
                  }
                  if (iVar4 != 0) goto LAB_10050abf6;
                }
                FUN_1002b0f56(lVar1);
                iVar4 = FUN_10030d69f(lVar1,&local_c98,0);
                if (iVar4 != -0x80) {
                  if (iVar4 != 0) {
                    uVar6 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar2 != '\0') {
                      local_cb8 = 0x8220202;
                      local_cb4 = "Assertion failure";
                      local_cac = 0x400;
                      local_caa = iVar4;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                          &local_cb8,0x12);
                    }
                    if (iVar4 != 0) goto LAB_10050abf6;
                  }
                  *(undefined1 *)(lVar1 + 0x45) = 0;
                  iVar4 = FUN_1002fc027(lVar1);
                  if (iVar4 != -0x80) {
                    if (iVar4 != 0) {
                      uVar6 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar2 != '\0') {
                        local_cb8 = 0x8220202;
                        local_cb4 = "Assertion failure";
                        local_cac = 0x400;
                        local_caa = iVar4;
                        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                            &local_cb8,0x12);
                      }
                      if (iVar4 != 0) goto LAB_10050abf6;
                    }
                    FUN_1002b532a(lVar1,0xf);
                    FUN_1002b48e9(lVar1);
                  }
                }
              }
            }
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_c98 = 0x8220202;
            local_c94 = "Assertion failure";
            local_c8c = 0x400;
            local_c8a = iVar4;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_c98,0x12);
          }
        }
      }
    }
  }
LAB_10050abf6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

