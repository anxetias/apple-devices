// name: FUN_100506c08
// address: 100506c08

void FUN_100506c08(uint param_1,ushort *param_2)

{
  ushort uVar1;
  undefined1 local_68 [72];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e04f5("F");
  if (param_1 < 10) {
    uVar1 = *param_2;
    *param_2 = uVar1 + 1;
    param_2[(ushort)(uVar1 + 1)] = 0x30;
  }
  FUN_1001e1b6d(param_1,local_68);
  FUN_1001e1890(local_68,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

