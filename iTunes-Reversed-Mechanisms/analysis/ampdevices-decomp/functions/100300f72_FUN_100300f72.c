// name: FUN_100300f72
// address: 100300f72

int FUN_100300f72(long param_1,undefined2 *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_2a = "xid != nullptr";
LAB_1003010ed:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 != 0)) {
      iVar3 = FUN_1001de41f(lVar1 + 0x2250,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68));
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x400;
          local_2a = (char *)CONCAT44(local_2a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
        }
      }
      goto LAB_1003010ae;
    }
    uVar4 = FUN_1001cc310(param_1,param_2,param_2);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_2a = "TrackInstanceIsValid(trackInstance)";
      goto LAB_1003010ed;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1003010ae:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

