// name: FUN_1004c3b6c
// address: 1004c3b6c

int FUN_1004c3b6c(long param_1,undefined8 param_2,long param_3,int param_4,undefined4 *param_5,
                 undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = -0x32;
  if (param_4 == 0) goto LAB_1004c3c29;
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_3 == 0) {
    if (*(long **)(param_1 + 0x550) != (long *)0x0) {
      param_3 = (**(code **)(**(long **)(param_1 + 0x550) + 0x70))();
      if (param_3 != 0) goto LAB_1004c3bbc;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "chapterData != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
LAB_1004c3bbc:
    iVar2 = FUN_100176de6(param_3,param_4);
    iVar2 = FUN_1004c2aee(param_1,(long)iVar2,0,&local_48);
    if ((param_5 != (undefined4 *)0x0) && (iVar2 == 0)) {
      *param_5 = local_48;
      iVar2 = 0;
    }
  }
LAB_1004c3c29:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

