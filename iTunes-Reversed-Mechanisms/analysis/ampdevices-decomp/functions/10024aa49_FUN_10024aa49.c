// name: FUN_10024aa49
// address: 10024aa49

uint FUN_10024aa49(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*param_2 == 0x73766d64 && *param_1 == 0x73766970) ||
     (*param_2 == 0x73766970 && *param_1 == 0x73766d64)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = 
      "(((left.mKind == kSoftwareVersionKindIPod) && (right.mKind == kSoftwareVersionKindMobileDevice)) || ((left.mKind == kSoftwareVersionKindMobileDevice) && (right.mKind == kSoftwareVersionKindIPod))) == false"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_10024a7e6();
    uVar2 = uVar2 >> 0x1f;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

