// name: FUN_10028a32b
// address: 10028a32b

undefined8 FUN_10028a32b(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_ac;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  int local_9a;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined1 local_60 [40];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar2 = FUN_1001cf3f5(param_1);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1001d019e(param_1,&local_ac);
      iVar2 = local_9a;
      if ((local_ac != 0) || (iVar3 = FUN_1001d0b82(param_1), iVar2 = local_9a, iVar3 != 2))
      goto LAB_10028a512;
      uVar4 = 0;
      iVar3 = FUN_1001cf495(param_1,0,&local_88);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = FUN_1001cf495(param_1,1,local_60);
          iVar2 = local_9a;
          if (iVar3 != -0x80) {
            if (iVar3 != 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              iVar2 = local_9a;
              goto joined_r0x00010028a475;
            }
            cVar1 = FUN_10028a58f(&local_88,local_60,param_2,param_3);
            if ((cVar1 != '\0') ||
               (cVar1 = FUN_10028a58f(local_60,&local_88,param_2,param_3), iVar2 = local_9a,
               cVar1 != '\0')) {
              uVar4 = 1;
              goto LAB_10028a515;
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          iVar2 = local_9a;
joined_r0x00010028a475:
          local_9a = iVar3;
          if (cVar1 != '\0') {
            local_9c = 0x400;
            local_a4 = "Assertion failure";
            local_a8 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
            iVar2 = local_9a;
          }
        }
LAB_10028a512:
        local_9a = iVar2;
        uVar4 = 0;
      }
LAB_10028a515:
      FUN_1001cf778(param_1);
      goto LAB_10028a51d;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x400;
      local_7a = iVar2;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x12);
    }
  }
  uVar4 = 0;
LAB_10028a51d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

