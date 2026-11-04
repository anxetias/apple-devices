// name: FUN_10018e6ca
// address: 10018e6ca

void FUN_10018e6ca(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_418 [1024];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = _FSRefMakePath(param_1,local_418,0x400);
  if (iVar1 == 0) {
    FUN_10018dd66(local_418,param_2,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

