// name: FUN_10016ff43
// address: 10016ff43

undefined8 FUN_10016ff43(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_10017fbfb(param_2);
  iVar2 = FUN_10017de88(param_2,local_428,0x3ff);
  if (iVar2 == 0) {
    sVar3 = _strlen(local_428);
    uVar4 = FUN_100174592(param_1,local_428,sVar3,uVar1);
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

