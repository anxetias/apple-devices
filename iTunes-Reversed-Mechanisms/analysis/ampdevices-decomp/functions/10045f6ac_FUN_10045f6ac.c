// name: FUN_10045f6ac
// address: 10045f6ac

int FUN_10045f6ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_c98;
  char *local_c94;
  undefined2 local_c8c;
  int local_c8a;
  undefined1 local_c78 [512];
  undefined4 local_a78;
  char *local_a74;
  undefined2 local_a6c;
  int local_a6a;
  undefined1 local_658 [520];
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  FUN_1001e04f5("iPod Photo Cache",local_c78);
  iVar2 = FUN_10058fa81(local_c78,param_1,local_450);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1001e04f5("Photo Database",local_658);
      iVar2 = FUN_10017ecc9(local_450,local_658,&local_a78,0);
      if (iVar2 == 0) {
        iVar2 = FUN_10038f413(&local_a78,param_2,param_3);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_c98 = 0x8220202;
            local_c94 = "Assertion failure";
            local_c8c = 0x400;
            local_c8a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_c98,0x12);
          }
          if ((iVar2 == -0x27) || (iVar2 == -0xd0)) {
            FUN_100182d59(local_450,3);
          }
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_a78 = 0x8220202;
        local_a74 = "Assertion failure";
        local_a6c = 0x400;
        local_a6a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_a78,0x12);
      }
    }
  }
  FUN_10058faf7(local_450);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

