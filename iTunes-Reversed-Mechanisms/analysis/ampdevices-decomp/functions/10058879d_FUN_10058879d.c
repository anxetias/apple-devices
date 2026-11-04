// name: FUN_10058879d
// address: 10058879d

int FUN_10058879d(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_7a = "JRFileSpecIsValid(inFileSpec)";
LAB_100588952:
      local_7c = 0x822;
      local_84 = "Assertion failure";
      local_88 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      iVar2 = FUN_100188aa6(param_1,param_2,0,&local_88,0);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          if ((char)local_88 == '\0') {
            cVar1 = FUN_100193976(param_2);
            iVar2 = 0x1b5f;
            if (cVar1 == '\0') {
              iVar2 = 0;
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_38 = 0x8220202;
              local_34 = "Assertion failure";
              local_2c = 0x822;
              local_2a = "outFileInfo->isDirectory == false";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x516;
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x400;
            local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
          }
        }
      }
      goto LAB_100588899;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_7a = "outFileSpec != nullptr";
      goto LAB_100588952;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100588899:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

