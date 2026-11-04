// name: FUN_10018a780
// address: 10018a780

int FUN_10018a780(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068ffa5(uVar3);
    }
    FUN_1001782e9(0,1);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_10018e9e7(local_440);
    if (iVar2 == 0) {
      FUN_1001b7a44(local_450);
      FUN_1001b7a44(local_460);
      iVar2 = FUN_10018a702(local_440,local_460,local_450);
      FUN_1001b7a50(local_460);
      if (iVar2 == 0) {
        iVar2 = FUN_100188da2(local_440,local_450,param_1);
      }
      FUN_1001b7a50(local_450);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

