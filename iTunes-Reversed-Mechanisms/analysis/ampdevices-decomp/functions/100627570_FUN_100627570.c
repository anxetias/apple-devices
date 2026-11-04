// name: FUN_100627570
// address: 100627570

int FUN_100627570(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = 0;
  local_70 = 0;
  local_8c = 0;
  uStack_84 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_98 = *(undefined8 *)(param_1 + 0x68);
  local_90 = 1;
  cVar1 = FUN_1001edfc7();
  if (cVar1 == '\0') {
    iVar3 = FUN_1001e96d3(&local_8c,0,0);
  }
  else {
    iVar3 = FUN_1001e8dd6(&local_78,0,0);
  }
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = iVar3;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  iVar3 = FUN_1001ee6ff(FUN_1006277cf,&local_98,1,0,0,"");
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      if (cVar1 == '\0') {
        iVar4 = FUN_1001e9afc(&local_8c);
      }
      else {
        iVar4 = FUN_1001e944c(&local_78);
      }
      iVar3 = local_90;
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        iVar3 = local_90;
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar4;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          iVar3 = local_90;
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  cVar1 = FUN_1001e96b8(&local_8c);
  if (cVar1 != '\0') {
    FUN_1001e9bb5(&local_8c);
  }
  cVar1 = FUN_1001e8dbb(&local_78);
  if (cVar1 != '\0') {
    FUN_1001e9587(&local_78);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

