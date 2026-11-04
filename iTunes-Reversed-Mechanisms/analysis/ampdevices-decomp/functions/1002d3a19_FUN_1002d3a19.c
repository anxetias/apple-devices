// name: FUN_1002d3a19
// address: 1002d3a19

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1002d3a19(long param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_268;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "ITIPodRefIsValid(iPod)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1002d3a87;
  }
  if (((*(int *)(param_1 + 0x2c) == 0) &&
      (*(undefined2 *)(param_1 + 0x6db1) = 0, *(char *)(param_1 + 0x40) != '\0')) &&
     (*(char *)(param_1 + 0x39) != '\0')) {
    uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x30),0x10cc00af);
    FUN_1001e115f(uVar4,&local_258);
    if (*(char *)(param_1 + 0x3d) != '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_58 = local_58 & 0xffff0000;
        __os_log_impl(0x100000000,uVar4,1,"unmount in progress",&local_58,2);
      }
      dVar5 = (double)FUN_1001ebd46();
      dVar7 = dVar5 + DAT_10070d3a0;
      uVar4 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
      while (*(char *)(param_1 + 0x34) != '\0') {
        iVar2 = FUN_1001ceb57(param_3,0,0xffffffffffffffff,&local_258);
        if (iVar2 != 0) {
          if (iVar2 != -0x80) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          goto LAB_1002d3d15;
        }
        iVar2 = FUN_1001b1a0f();
        iVar3 = FUN_1001b19b0();
        dVar5 = dVar7 - dVar5;
        if (DAT_100712580 <= dVar5) {
          dVar5 = DAT_100712580;
        }
        if (iVar2 == iVar3) {
          FUN_1001727b4(uVar4);
        }
        else {
          FUN_1001b0d8d(dVar5);
        }
        if (((*(char *)(param_1 + 0x36) == '\0') ||
            (FUN_1001820e5(1), *(char *)(param_1 + 0x36) == '\0')) &&
           (*(char *)(param_1 + 0x3d) == '\0')) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar4 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            local_58 = local_58 & 0xffff0000;
            __os_log_impl(0x100000000,uVar4,1,"unmount complete",&local_58,2);
          }
          break;
        }
        dVar5 = (double)FUN_1001ebd46();
        if (dVar7 <= dVar5) break;
      }
    }
    iVar2 = 0;
LAB_1002d3d15:
    if (*(char *)(param_1 + 0x36) == '\0') {
      if (*(char *)(param_1 + 0x3d) != '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "iPod->unmountInProgress == false";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar2 = FUN_100632897(*(undefined4 *)(param_1 + 0x6d68),3,0);
      if (param_2 != '\0' && iVar2 == 0) {
        dVar5 = (double)FUN_1001ebd46();
        if (*(char *)(param_1 + 0x34) != '\0') {
          dVar7 = DAT_10070d3a0 + dVar5;
          local_268 = dVar5 + _DAT_10070e600;
          uVar4 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
          do {
            iVar2 = FUN_1001ceb57(param_3,0,0xffffffffffffffff,&local_258);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                goto LAB_1002d3ec0;
              }
              iVar2 = -0x80;
              goto LAB_1002d3a87;
            }
            iVar2 = FUN_1001b1a0f();
            iVar3 = FUN_1001b19b0();
            dVar6 = local_268 - dVar5;
            if (DAT_100712580 <= local_268 - dVar5) {
              dVar6 = DAT_100712580;
            }
            if (iVar2 == iVar3) {
              FUN_1001727b4(uVar4);
            }
            else {
              FUN_1001b0d8d(dVar6);
            }
            FUN_1001820e5(1);
            if (*(char *)(param_1 + 0x36) == '\x01') break;
            dVar5 = (double)FUN_1001ebd46();
            if (dVar7 <= dVar5) {
              iVar2 = -0x23;
              goto LAB_1002d3ed3;
            }
            if (local_268 <= dVar5) {
              FUN_100632897(*(undefined4 *)(param_1 + 0x6d68),3,0);
              local_268 = dVar5 + DAT_100700458;
            }
          } while (*(char *)(param_1 + 0x34) != '\0');
        }
        goto LAB_1002d3a53;
      }
    }
LAB_1002d3ec0:
    if (iVar2 == -0x80) goto LAB_1002d3a87;
    if (iVar2 != 0) {
LAB_1002d3ed3:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_258 = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x400;
        local_24a = (char *)CONCAT44(local_24a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,0x12);
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_258 = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x400;
        local_24a = (char *)CONCAT44(local_24a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,0x12);
      }
      goto LAB_1002d3a87;
    }
  }
LAB_1002d3a53:
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  iVar2 = 0;
LAB_1002d3a87:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

