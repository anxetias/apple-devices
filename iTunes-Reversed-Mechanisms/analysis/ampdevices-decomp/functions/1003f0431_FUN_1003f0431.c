// name: FUN_1003f0431
// address: 1003f0431

bool FUN_1003f0431(long param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  undefined1 local_30 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar5 = false;
  iVar3 = FUN_1003f97f5(param_1,0,local_30);
  if (iVar3 == -0x80) goto LAB_1003f04d6;
  if (iVar3 == 0) {
    cVar2 = FUN_1001c5630(local_30,param_1 + 0x18,8);
    bVar5 = true;
    if (cVar2 != '\0') goto LAB_1003f04d6;
    iVar3 = FUN_1003f97f5(param_1,1,local_30);
    iVar1 = local_3a;
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        cVar2 = FUN_1001c5630(local_30,param_1 + 0x18,8);
        bVar5 = cVar2 != '\0';
        goto LAB_1003f04d6;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      iVar1 = local_3a;
      goto joined_r0x0001003f04d1;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    iVar1 = local_3a;
joined_r0x0001003f04d1:
    local_3a = iVar3;
    if (cVar2 != '\0') {
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      iVar1 = local_3a;
    }
  }
  local_3a = iVar1;
  bVar5 = false;
LAB_1003f04d6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

