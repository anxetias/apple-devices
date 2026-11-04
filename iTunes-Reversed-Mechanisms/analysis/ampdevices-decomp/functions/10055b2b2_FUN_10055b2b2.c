// name: FUN_10055b2b2
// address: 10055b2b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10055b2b2(long param_1,char param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10026394e();
  iVar4 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar4 + 1;
  iVar3 = 0;
  if (iVar4 != 0) goto LAB_10055b7db;
  if (*(char *)(param_1 + 0x36) == '\0') {
    if (*(char *)(param_1 + 0x34) == '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      iVar3 = 0x483;
      if (cVar2 != '\0') {
        local_234 = *(char **)(param_1 + 0x6dc8);
        pcVar8 = "support> attempting to wake disconnected device %{public}@";
        uVar6 = 1;
LAB_10055b601:
        local_238 = 0x8420102;
        iVar3 = 0x483;
        __os_log_impl(0x100000000,uVar7,uVar6,pcVar8,&local_238,0xc);
      }
    }
    else {
      if (*(long *)(param_1 + 0x6de8) == 0) goto LAB_10055b2fc;
      *(undefined4 *)(param_1 + 0x6df0) = 0xffffffff;
      lVar5 = _AMDeviceWakeupOperationCreateWithToken
                        (FUN_10055c08b,param_1,*(long *)(param_1 + 0x6de8),0);
      puVar1 = PTR__kCFRunLoopDefaultMode_10082e118;
      if (lVar5 == 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "wakeupOp != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        iVar3 = 0x483;
        if (cVar2 != '\0') {
          local_234 = *(char **)(param_1 + 0x6dc8);
          pcVar8 = "AMDeviceWakeupOperationCreateWithToken failed for device %{public}@";
          uVar6 = 0x10;
          goto LAB_10055b601;
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        uVar7 = *(undefined8 *)puVar1;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_234 = *(char **)(param_1 + 0x6dc8);
          local_238 = 0x8420102;
          __os_log_impl(0x100000000,uVar6,1,
                        "support> scheduling wakeup operation for device %{public}@",&local_238,0xc)
          ;
        }
        uVar6 = _CFRunLoopGetCurrent();
        cVar2 = _AMDeviceWakeupOperationSchedule(lVar5,uVar6,uVar7);
        if (cVar2 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x822;
            local_22a = "success";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar7 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar2 != '\0') {
            local_234 = *(char **)(param_1 + 0x6dc8);
            local_238 = 0x8420102;
            __os_log_impl(0x100000000,uVar7,0x10,
                          "AMDeviceWakeupOperationSchedule failed for device %{public}@",&local_238,
                          0xc);
          }
          FUN_10017060f(lVar5);
          iVar3 = 0x483;
        }
        else {
          *(undefined1 *)(param_1 + 0x6df4) = 1;
          if (param_2 == '\0') {
            FUN_10017060f(lVar5);
            goto LAB_10055b2fc;
          }
          dVar9 = (double)FUN_1001ebd46();
          dVar9 = dVar9 + _DAT_100707dc0;
          dVar11 = _DAT_100707dc0 + dVar9;
          uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x30),0x10cc02a0);
          FUN_1001e115f(uVar6,&local_238);
          do {
            if ((-1 < *(int *)(param_1 + 0x6df0)) &&
               ((iVar3 = 0, *(int *)(param_1 + 0x6df0) != 0 || (*(char *)(param_1 + 0x6df4) == '\0')
                ))) goto LAB_10055b7b9;
            iVar3 = FUN_1001ceb57(param_3,0,0xffffffffffffffff,&local_238);
            if (iVar3 != 0) {
              if (iVar3 != -0x80) {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_258 = 0x8220202;
                  local_254 = "Assertion failure";
                  local_24c = 0x400;
                  local_24a = (char *)CONCAT44(local_24a._4_4_,iVar3);
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_258,
                                      0x12);
                }
              }
              goto LAB_10055b7b9;
            }
            dVar12 = dVar9;
            if (-1 < *(int *)(param_1 + 0x6df0)) {
              dVar12 = dVar11;
            }
            dVar10 = (double)FUN_1001ebd46();
            dVar12 = dVar12 - dVar10;
            if (dVar12 <= 0.0) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar7 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              iVar3 = 0;
              if (cVar2 != '\0') {
                local_254 = *(char **)(param_1 + 0x6dc8);
                local_24a = "attach";
                if (*(int *)(param_1 + 0x6df0) < 0) {
                  local_24a = "wake";
                }
                local_258 = 0x8420202;
                local_24c = 0x822;
                __os_log_impl(0x100000000,uVar7,1,
                              "support> timed out waiting for device %{public}@ to %{public}s",
                              &local_258,0x16);
              }
              goto LAB_10055b7b9;
            }
            FUN_1001727b4(uVar7);
            iVar4 = FUN_1001b1a0f();
            iVar3 = FUN_1001b19b0();
            if (DAT_10070e568 <= dVar12) {
              dVar12 = DAT_10070e568;
            }
            if (iVar4 == iVar3) {
              FUN_1001727b4(uVar7);
            }
            else {
              FUN_1001b0d8d(dVar12);
            }
          } while (DAT_1008c7874 != '\x01');
          iVar3 = 0;
LAB_10055b7b9:
          _AMDeviceWakeupOperationInvalidate(lVar5);
          FUN_10017060f(lVar5);
          if (iVar3 == 0) {
            if (*(char *)(param_1 + 0x6df4) == '\0') goto LAB_10055b2fc;
            *(undefined1 *)(param_1 + 0x6df4) = 0;
            *(undefined1 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x6dfa) = 0;
            iVar3 = 0x483;
            if (*(char *)(param_1 + 0x37) == '\0') {
              *(undefined1 *)(param_1 + 0x37) = 1;
              FUN_10026473a(param_1,0x706f6472,0,0);
              FUN_100264854(param_1);
              FUN_100264ec8(param_1);
            }
          }
        }
      }
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  else {
LAB_10055b2fc:
    FUN_10055c435(param_1,1);
    iVar3 = 0;
  }
LAB_10055b7db:
  FUN_100264ec8(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

