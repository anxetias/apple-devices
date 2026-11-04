// name: FUN_100189206
// address: 100189206

undefined8 FUN_100189206(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068eadf(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001e04f5(param_2,local_228);
    uVar2 = FUN_10018156b(param_1,local_228,0,0,param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

