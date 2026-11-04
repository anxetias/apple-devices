// name: FUN_1002e8374
// address: 1002e8374

void FUN_1002e8374(long param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined8 local_3a;
  undefined2 local_32;
  int local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    uVar2 = *param_3;
    cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar3 != '\0') {
      local_44 = *(undefined8 *)(param_1 + 8);
      local_48 = 0x8220302;
      local_3c = 0x800;
      local_32 = 0x400;
      local_3a = uVar2;
      local_30 = iVar1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "Failed to remove artwork uuid for %{public}s 0x%llx (%d)",&local_48,0x1c)
      ;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

