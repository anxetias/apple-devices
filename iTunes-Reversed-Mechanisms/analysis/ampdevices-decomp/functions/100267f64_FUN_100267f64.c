// name: FUN_100267f64
// address: 100267f64

int FUN_100267f64(long param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined1 local_59;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "ITIPodRefIsValid(iPod)";
LAB_1002681c0:
      uStack_4c = 0x822;
      uStack_4e = 0;
      uStack_50 = 1;
      local_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != (code *)0x0) {
      iVar7 = -4;
      if (*(char *)(param_1 + 0x3c) == '\0') {
        if (*(char *)(param_1 + 0x3f) == '\0') {
          uVar3 = FUN_1002d327d(param_1,&local_58,&local_59);
          (*param_2)(param_1,uVar3,(undefined1)local_58,local_59,param_3);
          iVar7 = 0;
        }
        else {
          puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
          if (puVar4 == (undefined8 *)0x0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              uStack_4c = 0x822;
              local_4a = "params != nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar7 = -0x6c;
          }
          else {
            uVar5 = FUN_10026394e(param_1);
            *puVar4 = uVar5;
            puVar4[1] = param_2;
            puVar4[2] = param_3;
            lVar6 = FUN_10055ae0c(param_1);
            if (lVar6 == 0) {
              iVar2 = -0x17ffff95;
            }
            else {
              iVar2 = FUN_1005b9808(lVar6,6,0,FUN_100268255,puVar4);
              iVar7 = 0;
              if (iVar2 == 0) goto LAB_100268100;
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar5 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x4000200;
                uStack_50 = 0x400;
                uStack_4e = (undefined2)iVar2;
                uStack_4c = (undefined2)((uint)iVar2 >> 0x10);
                local_54 = iVar2;
                __os_log_impl(0x100000000,uVar5,0x10,
                              "MobileDeviceGetBatteryInfoAsync failed (%d / 0x%08X)",&local_58,0xe);
              }
            }
            FUN_100264ec8(*puVar4);
            operator_delete(puVar4);
            iVar7 = iVar2;
          }
        }
      }
      goto LAB_100268100;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "completionProc != nullptr";
      goto LAB_1002681c0;
    }
  }
  FUN_1001782e9(0,0);
  iVar7 = -0x32;
LAB_100268100:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

