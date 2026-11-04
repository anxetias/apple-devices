// name: FUN_1001a2b2e
// address: 1001a2b2e

bool FUN_1001a2b2e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_118 [256];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069c8c2(uVar3);
    }
    bVar4 = false;
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_1001a26f5(param_1,param_2,local_118,0xff);
    if (cVar1 == '\0') {
      *param_3 = 0;
      bVar4 = false;
    }
    else {
      iVar2 = _sscanf(local_118,"%llu",param_3);
      bVar4 = iVar2 == 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

