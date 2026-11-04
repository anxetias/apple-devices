// name: FUN_1004d43c0
// address: 1004d43c0

void FUN_1004d43c0(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_c88;
  char *local_c84;
  undefined2 local_c7c;
  int local_c7a;
  undefined1 local_c68 [1056];
  undefined1 local_848 [512];
  undefined1 local_648 [1056];
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) goto LAB_1004d449b;
  iVar2 = FUN_10017d489(param_1,local_228);
  iVar3 = local_c7a;
  if (iVar2 == -0x80) goto LAB_1004d4512;
  if (iVar2 == 0) {
    iVar2 = FUN_10017d5ba(param_1,local_648);
    iVar3 = local_c7a;
    if (iVar2 == -0x80) goto LAB_1004d4512;
    if (iVar2 == 0) {
      iVar3 = FUN_10017ede0(local_228,"cig",local_848);
      if (iVar3 != -0x80) {
        if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_c88 = 0x8220202;
            local_c84 = "Assertion failure";
            local_c7c = 0x400;
            local_c7a = iVar3;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_c88,0x12);
          }
          if (iVar3 != 0) goto LAB_1004d449b;
        }
        iVar3 = FUN_10017ecc9(local_648,local_848,local_c68,0);
        if (((iVar3 == 0) && (iVar3 = FUN_100182d4d(local_c68), iVar3 != -0x80)) && (iVar3 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_c88 = 0x8220202;
            local_c84 = "Assertion failure";
            local_c7c = 0x400;
            local_c7a = iVar3;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_c88,0x12);
          }
        }
      }
LAB_1004d449b:
      FUN_100182d4d(param_1);
      iVar3 = local_c7a;
      goto LAB_1004d4512;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    iVar3 = local_c7a;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    iVar3 = local_c7a;
  }
  local_c7a = iVar2;
  if (cVar1 != '\0') {
    local_c7c = 0x400;
    local_c84 = "Assertion failure";
    local_c88 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_c88,0x12);
    iVar3 = local_c7a;
  }
LAB_1004d4512:
  local_c7a = iVar3;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

