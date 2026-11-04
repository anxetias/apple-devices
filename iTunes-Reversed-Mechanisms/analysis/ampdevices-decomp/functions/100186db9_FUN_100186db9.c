// name: FUN_100186db9
// address: 100186db9

void FUN_100186db9(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_90;
  undefined1 *local_88;
  uint local_78;
  undefined8 local_60;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e40a7(param_3,param_3,local_58);
  FUN_1001c62d9(&local_90,0x38);
  local_78 = (uint)*(byte *)(param_1 + 0x10);
  local_90 = param_3;
  local_88 = local_58;
  local_60 = param_3;
  FUN_10018166a(param_2,&local_90);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

