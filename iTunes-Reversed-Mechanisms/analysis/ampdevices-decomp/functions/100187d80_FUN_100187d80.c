// name: FUN_100187d80
// address: 100187d80

int FUN_100187d80(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10068d54f(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    *param_2 = 0;
    iVar2 = FUN_10017d489(param_1,local_228);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        uVar3 = FUN_1001e21dd(local_228);
        *param_2 = uVar3;
        iVar2 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10068d4e3(iVar2,uVar4);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

