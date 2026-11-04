// name: FUN_100180f75
// address: 100180f75

int FUN_100180f75(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10017a3fc(param_1,param_2,param_3 + param_2,2);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100688976(uVar3);
      }
      FUN_1001782e9(0,0);
      FUN_1001c631b(local_48,param_4,0x14);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006889ec(iVar2,uVar3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

