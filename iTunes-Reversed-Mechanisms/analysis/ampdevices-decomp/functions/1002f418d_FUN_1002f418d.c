// name: FUN_1002f418d
// address: 1002f418d

undefined8 FUN_1002f418d(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_c58;
  undefined4 local_c4c;
  undefined4 local_c48;
  char *local_c44;
  undefined2 local_c3c;
  int local_c3a;
  undefined4 local_828;
  char *local_824;
  undefined2 local_81c;
  char *local_81a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c58 = 0;
  if (param_2 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_828 = 0x8220202;
      local_824 = "Assertion failure";
      local_81c = 0x822;
      local_81a = "relativeFilePath != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_828,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1002f4302;
  }
  param_2 = param_2 + (*param_2 == '/');
  if (*(char *)(param_1 + 0x428) == '\0') {
    iVar2 = FUN_1001fbb12(*(undefined8 *)(param_1 + 0x430),param_2,&local_c58);
    uVar3 = local_c58;
  }
  else {
    uVar3 = FUN_1001dfc0d(param_2);
    iVar2 = FUN_1001e7237(param_2,uVar3,&local_828,0x400,&local_c4c);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        FUN_100184e7f(&local_828,local_c4c,0x2f);
        iVar2 = FUN_10017d64f(param_1 + 8,&local_828,local_c4c,&local_c48,0,0);
        uVar3 = 0;
        if (iVar2 == 0) {
          local_c58 = FUN_100165eef(DAT_1008c4d90,&local_c48,0,0);
          iVar2 = 0;
          uVar3 = local_c58;
        }
        goto LAB_1002f42ef;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_c48 = 0x8220202;
        local_c44 = "Assertion failure";
        local_c3c = 0x400;
        local_c3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_c48,0x12);
      }
    }
    uVar3 = 0;
  }
LAB_1002f42ef:
  if (iVar2 != 0) {
    FUN_10017060f(uVar3);
    uVar3 = local_c58;
  }
LAB_1002f4302:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

