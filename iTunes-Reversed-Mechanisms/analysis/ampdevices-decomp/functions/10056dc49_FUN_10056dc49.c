// name: FUN_10056dc49
// address: 10056dc49

int FUN_10056dc49(undefined8 param_1,long *param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    iVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1001c63e1(param_4);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "objectBuffer != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
      iVar2 = FUN_100569944(param_1,lVar3,param_4);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_3,lVar3,param_4,0);
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
    }
  }
  FUN_1001c64c1(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

