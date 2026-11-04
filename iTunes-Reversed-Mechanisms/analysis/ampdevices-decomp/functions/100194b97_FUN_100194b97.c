// name: FUN_100194b97
// address: 100194b97

void FUN_100194b97(undefined8 param_1)

{
  int iVar1;
  undefined1 local_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_10018e4a1(param_1,local_68);
  if (iVar1 == 0) {
    _FNNotify(local_68,1,0);
  }
  FUN_1001944d7(param_1,0x666e6472,0x66757064,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

