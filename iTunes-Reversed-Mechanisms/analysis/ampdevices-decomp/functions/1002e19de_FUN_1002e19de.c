// name: FUN_1002e19de
// address: 1002e19de

int FUN_1002e19de(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_868;
  char *local_864;
  undefined2 local_85c;
  int local_85a;
  undefined4 local_848;
  char *local_844;
  undefined2 local_83c;
  int local_83a;
  undefined4 local_648;
  char *local_644;
  undefined2 local_63c;
  int local_63a;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "outSignatureFileSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    FUN_1001c62d9(param_2,0x420);
    iVar2 = FUN_10017d5ba(param_1,&local_448);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_10017d489(param_1,&local_648);
        if (iVar2 == -0x80) goto LAB_1002e1be7;
        if (iVar2 == 0) {
          FUN_1001e1c39(&local_648,&local_848);
          FUN_1001e26e1(".signature",&local_848);
          iVar2 = FUN_10017d64f(&local_448,(long)&local_848 + 2,(undefined2)local_848,param_2,0,0);
          if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1002e1be7;
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_1002e1be7;
          puVar4 = &local_868;
          local_868 = 0x8220202;
          local_864 = "Assertion failure";
          local_85c = 0x400;
          local_85a = iVar2;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_1002e1be7;
          puVar4 = &local_848;
          local_848 = 0x8220202;
          local_844 = "Assertion failure";
          local_83c = 0x400;
          local_83a = iVar2;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_1002e1be7;
        puVar4 = &local_648;
        local_648 = 0x8220202;
        local_644 = "Assertion failure";
        local_63c = 0x400;
        local_63a = iVar2;
      }
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
    }
  }
LAB_1002e1be7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

