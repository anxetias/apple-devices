// name: FUN_10030c4f9
// address: 10030c4f9

/* WARNING: Type propagation algorithm not settling */

int FUN_10030c4f9(long param_1,undefined1 *param_2,int param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "versionSize != 0";
LAB_10030c69a:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_4c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_4c + 1,0x16);
    }
  }
  else if (param_2 == (undefined1 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "version != nullptr";
      goto LAB_10030c69a;
    }
  }
  else {
    *param_2 = 0;
    if (((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 != 0)) {
      iVar3 = FUN_1001de2b7(lVar1 + 0x22a0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x6c),param_2
                            ,local_4c,param_3 + -1);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_4c[1] = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
        }
      }
      param_2[local_4c[0]] = 0;
      goto LAB_10030c654;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "TrackInstanceIsValid(trackInstance)";
      goto LAB_10030c69a;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10030c654:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

