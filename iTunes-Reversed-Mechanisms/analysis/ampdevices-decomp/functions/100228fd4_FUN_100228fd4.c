// name: FUN_100228fd4
// address: 100228fd4

int FUN_100228fd4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  undefined1 local_678 [1056];
  undefined1 local_258 [512];
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outRecoveryBundleFileSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(param_3,0x420);
    if (param_4 != 0) {
      iVar2 = FUN_100220c77(param_2,local_258);
      if (iVar2 == -0x80) goto LAB_100229122;
      if (iVar2 == 0) {
        iVar2 = FUN_1003870d4(0x2d,3,local_678);
        if (iVar2 == -0x80) goto LAB_100229122;
        if (iVar2 == 0) {
          iVar2 = FUN_10017ecc9(local_678,local_258,param_3,0);
          if (iVar2 == 0) {
            local_58 = 0;
            FUN_1001c62d9((long)&local_54 + 4,8);
            cVar1 = FUN_100221ce3(param_3,param_1,extraout_RDX,param_4,0);
            FUN_100249fca(&local_58);
            iVar2 = -0x2b;
            if (cVar1 != '\0') {
              iVar2 = 0;
            }
          }
          goto LAB_100229122;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100229122;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100229122;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      }
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      goto LAB_100229122;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outSoftwareVersion != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_100229122:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

