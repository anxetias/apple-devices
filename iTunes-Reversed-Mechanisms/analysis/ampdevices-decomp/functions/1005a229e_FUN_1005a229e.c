// name: FUN_1005a229e
// address: 1005a229e

void FUN_1005a229e(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "mOriginalText != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "mLanguage != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    lVar5 = *(long *)(param_1 + 0x78);
  }
  uVar2 = FUN_1005a249c(param_2,*(undefined4 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),lVar5,
                        *(undefined8 *)(param_1 + 0x80),&local_448);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  iVar3 = FUN_1001e9809(param_1 + 0x88);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_468 = 0x8220202;
      local_464 = "Assertion failure";
      local_45c = 0x400;
      local_45a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_468,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

