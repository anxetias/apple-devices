// name: FUN_10057db47
// address: 10057db47

void FUN_10057db47(undefined8 param_1,code *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 local_2bc;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_2bc,0x284);
  local_2bc = 0x90000000a;
  local_2b4 = 0x284;
  local_2b0 = param_3;
  iVar1 = (*param_2)(param_1,0x67657470,&local_2bc);
  if (iVar1 == 0 && param_4 != (undefined4 *)0x0) {
    *param_4 = local_2ac;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

