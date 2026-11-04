// name: FUN_10038ef22
// address: 10038ef22

int FUN_10038ef22(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x822;
      local_64a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else if (*(char *)(param_1 + 5) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x822;
      local_64a = "imageLibrary->dbFileSpecValid";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x2b;
  }
  else {
    iVar2 = FUN_10017d477(param_1 + 4000,0,local_238);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_10017d5ba(param_1 + 4000,&local_658);
        if (iVar2 == -0x80) goto LAB_10038f146;
        if (iVar2 == 0) {
          iVar2 = FUN_10038b674(param_1,&local_658,local_238,param_2,param_3);
          if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_10038f146;
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_10038f146;
          puVar4 = &local_678;
          local_678 = 0x8220202;
          local_674 = "Assertion failure";
          local_66c = 0x400;
          local_66a = iVar2;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_10038f146;
          puVar4 = &local_678;
          local_678 = 0x8220202;
          local_674 = "Assertion failure";
          local_66c = 0x400;
          local_66a = iVar2;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_10038f146;
        puVar4 = &local_658;
        local_658 = 0x8220202;
        local_654 = "Assertion failure";
        local_64c = 0x400;
        local_64a = (char *)CONCAT44(local_64a._4_4_,iVar2);
      }
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
    }
  }
LAB_10038f146:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

