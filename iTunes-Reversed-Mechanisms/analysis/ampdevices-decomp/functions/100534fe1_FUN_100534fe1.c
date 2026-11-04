// name: FUN_100534fe1
// address: 100534fe1

void FUN_100534fe1(undefined8 param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0(param_2);
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "JRFileSpecIsValid(parentFolderSpec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    _memcpy(&local_458,param_2,0x420);
    do {
      cVar1 = FUN_10017f77e(param_1,&local_458);
      if (cVar1 != '\0') break;
      _memcpy(local_878,&local_458,0x420);
      iVar2 = FUN_10017d5ba(local_878,&local_458);
      iVar3 = FUN_100182d4d(local_878);
    } while (iVar3 == 0 && iVar2 == 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

