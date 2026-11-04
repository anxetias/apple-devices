// name: FUN_10055d311
// address: 10055d311

void FUN_10055d311(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined **local_58;
  code *local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1001ead5c(&DAT_1008c25b8);
  iVar1 = local_6a;
  if ((lVar4 == 0) || (DAT_1008c7878 != 0)) goto LAB_10055d425;
  local_58 = &PTR_FUN_10086a160;
  local_50 = FUN_10055d4b5;
  local_38 = &local_58;
  iVar3 = FUN_1001b1a89(&local_58,"",&DAT_1008c7878,0);
  if (local_38 == &local_58) {
    lVar4 = 0x20;
LAB_10055d39d:
    (**(code **)((long)*local_38 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_38 != (undefined ***)0x0) goto LAB_10055d39d;
  }
  iVar1 = local_6a;
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = FUN_1001b15b3(DAT_1008c7878);
      iVar1 = local_6a;
      if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_10055d425;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      iVar1 = local_6a;
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      iVar1 = local_6a;
    }
    local_6a = iVar3;
    if (cVar2 != '\0') {
      local_6c = 0x400;
      local_74 = "Assertion failure";
      local_78 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      iVar1 = local_6a;
    }
  }
LAB_10055d425:
  local_6a = iVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

