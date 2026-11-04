// name: FUN_1003937cf
// address: 1003937cf

int FUN_1003937cf(long param_1)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined **local_58;
  code *local_50;
  long local_48;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x168c8) == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
      *psVar1 = *psVar1 + 1;
    }
    *(undefined1 *)(param_1 + 0x168cc) = 0;
    local_58 = &PTR_FUN_100854778;
    local_50 = FUN_10039394f;
    local_48 = param_1;
    local_38 = &local_58;
    iVar3 = FUN_1001b1a89(&local_58,"",param_1 + 0x168c8,0);
    if (local_38 == &local_58) {
      lVar4 = 0x20;
LAB_100393888:
      (**(code **)((long)*local_38 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_38 != (undefined ***)0x0) goto LAB_100393888;
    }
    if (iVar3 != -0x80) {
      if (iVar3 == 0) goto LAB_1003937f6;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x400;
        local_6a = iVar3;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      }
      if (iVar3 == 0) goto LAB_1003937f3;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
      *psVar1 = *psVar1 + -1;
    }
  }
  else {
LAB_1003937f3:
    iVar3 = 0;
  }
LAB_1003937f6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

