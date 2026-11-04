// name: FUN_100591963
// address: 100591963

void FUN_100591963(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined1 local_870 [1056];
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    bVar5 = false;
    bVar4 = false;
  }
  else {
    cVar1 = FUN_100183bb2(param_2,param_1);
    iVar2 = FUN_10017d5ba(param_1,local_450);
    bVar4 = iVar2 == 0;
    bVar5 = cVar1 != '\0';
  }
  iVar2 = FUN_100182d4d(param_1);
  if (((iVar2 == 0) && (bVar5)) && (bVar4)) {
    do {
      cVar1 = FUN_10017f77e(param_2,local_450);
      if (cVar1 != '\0') break;
      _memcpy(local_870,local_450,0x420);
      iVar2 = FUN_10017d5ba(local_870,local_450);
      iVar3 = FUN_100182d4d(local_870);
    } while (iVar3 == 0 && iVar2 == 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

