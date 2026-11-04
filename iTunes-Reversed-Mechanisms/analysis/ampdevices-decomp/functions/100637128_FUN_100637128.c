// name: FUN_100637128
// address: 100637128

/* WARNING: Type propagation algorithm not settling */

int FUN_100637128(long *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_6a [18];
  undefined8 local_58;
  int local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4c[0] = 0;
  local_58 = 0;
  FUN_1001c62d9(local_6a,0x12);
  plVar3 = (long *)(**(code **)(*param_1 + 0x50))(param_1);
  if (plVar3 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4c[1] = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "task != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_4c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -4;
    goto LAB_1006371f0;
  }
  iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,*param_2,*(undefined1 *)(param_2 + 1));
  if (iVar2 == 0) {
    if (*(char *)((long)param_2 + 0x1c) != '\0') {
      local_80 = param_2[2];
      local_78 = *(undefined4 *)(param_2 + 3);
      iVar2 = (**(code **)(*plVar3 + 0x58))
                        (plVar3,&local_80,1,local_78,*(char *)((long)param_2 + 0x1c));
      if (iVar2 != 0) goto LAB_100637190;
    }
    iVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,10000);
    if (iVar2 != 0) goto LAB_100637190;
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,local_6a,local_4c,&local_58);
    if (iVar2 != 0) goto LAB_100637190;
    *(undefined4 *)(param_2 + 4) = (undefined4)local_58;
    if (local_4c[0] == 0) {
      iVar2 = 0;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4c[1] = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "taskStatus == kSCSITaskStatus_GOOD";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_4c + 1,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = local_4c[0];
    }
  }
  else {
LAB_100637190:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4c[1] = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "ioreturn == 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_4c + 1,0x16);
    }
    FUN_1001782e9(0,0);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
LAB_1006371f0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

