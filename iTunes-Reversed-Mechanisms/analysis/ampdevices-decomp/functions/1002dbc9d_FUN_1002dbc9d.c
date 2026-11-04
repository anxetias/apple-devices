// name: FUN_1002dbc9d
// address: 1002dbc9d

void FUN_1002dbc9d(long param_1)

{
  int iVar1;
  undefined1 local_430 [1056];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_10017ecc9(param_1 + 0x50,param_1 + 0x470,local_430,0);
  if (iVar1 == 0) {
    FUN_100182d4d(local_430);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

