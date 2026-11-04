// name: FUN_1003773f6
// address: 1003773f6

void FUN_1003773f6(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  int local_58 [3];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (code *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58[0] = 0x8220202;
      local_58[1] = 0x7a0a90;
      local_58[2] = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6096;
      local_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001c62d9(local_58,0x20);
  local_58[2] = (int)param_2;
  uStack_4c = (undefined2)((ulong)param_2 >> 0x20);
  uStack_4a = (undefined2)((ulong)param_2 >> 0x30);
  local_48 = (undefined6)param_3;
  uStack_42 = (undefined2)((ulong)param_3 >> 0x30);
  local_40 = param_4;
  if ((param_1 != -0x27) && (param_1 != 0)) {
    local_40 = 0;
  }
  local_58[0] = param_1;
  if (param_5 != (code *)0x0) {
    (*param_5)(local_58,param_6);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

