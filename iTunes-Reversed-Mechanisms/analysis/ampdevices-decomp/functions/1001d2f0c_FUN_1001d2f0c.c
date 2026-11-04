// name: FUN_1001d2f0c
// address: 1001d2f0c

undefined4
FUN_1001d2f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    pcVar4 = _sqlite3_mprintf("ATTACH DATABASE \"%s\" AS %s",param_2,param_3);
  }
  else {
    if (0xf < param_5 - 1U) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b2ee9(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001e0a72(param_4,param_5,local_138,0x100,0);
    pcVar4 = _sqlite3_mprintf("ATTACH DATABASE \"%s\" AS %s KEY X\'%s\'",param_2,param_3,local_138);
  }
  if (pcVar4 == (char *)0x0) {
    uVar2 = 0xffffff94;
  }
  else {
    uVar2 = FUN_1001d302b(param_1,pcVar4,0,0);
    _sqlite3_free(pcVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

