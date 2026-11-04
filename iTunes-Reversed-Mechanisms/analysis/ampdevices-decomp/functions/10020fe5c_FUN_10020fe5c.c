// name: FUN_10020fe5c
// address: 10020fe5c

void FUN_10020fe5c(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **local_78;
  code *local_70;
  undefined8 local_68;
  long local_60;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "thisController != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10020ff0b;
  }
  cVar1 = FUN_1001edfc7();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "JRIsCurrentThreadMainThread()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_100203686(param_1 + 0x28a8,param_2);
  if (((*(char *)(param_1 + 0x2850) != '\0') || (*(char *)(param_1 + 0x2854) != '\0')) ||
     (*(char *)(param_1 + 0x2855) == '\x01')) {
    FUN_100214b80(param_1);
    goto LAB_10020ff0b;
  }
  *(undefined1 *)(param_1 + 0x28a1) = 1;
  local_78 = &PTR_FUN_10083dfa8;
  local_70 = FUN_100214b80;
  local_68 = 0;
  local_60 = param_1;
  local_58 = &local_78;
  iVar2 = FUN_1001b1a89(&local_78,"",0,0);
  if (local_58 == &local_78) {
    lVar4 = 0x20;
LAB_10020ff90:
    (**(code **)((long)*local_58 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_58 != (undefined ***)0x0) goto LAB_10020ff90;
  }
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_10020ff0b:
  FUN_10039c7eb(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

