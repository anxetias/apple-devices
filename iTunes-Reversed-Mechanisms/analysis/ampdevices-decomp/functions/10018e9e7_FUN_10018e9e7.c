// name: FUN_10018e9e7
// address: 10018e9e7

undefined8 FUN_10018e9e7(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_4b8 [1176];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_4b8,0x498);
  iVar2 = FUN_100193150(0xffff8005,0x666c6e74,1,param_1);
  uVar3 = 0xffffffdd;
  if (iVar2 == 0) {
    cVar1 = FUN_100189847(param_1);
    if (cVar1 != '\0') {
      uVar3 = 0;
      FUN_100183add(param_1,local_4b8,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

