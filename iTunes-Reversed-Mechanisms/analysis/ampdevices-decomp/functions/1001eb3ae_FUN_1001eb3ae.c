// name: FUN_1001eb3ae
// address: 1001eb3ae

long FUN_1001eb3ae(char param_1)

{
  uid_t uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 local_478 [72];
  undefined8 *local_430;
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = _CSCopyUserName();
  if (lVar3 == 0) {
    local_430 = (undefined8 *)0x0;
    uVar1 = _getuid();
    iVar2 = _getpwuid_r(uVar1,local_478,local_428,0x400,&local_430);
    if (local_430 == (undefined8 *)0x0 || iVar2 != 0) {
      lVar3 = 0;
    }
    else {
      puVar4 = local_430 + 5;
      if (param_1 != '\0') {
        puVar4 = local_430;
      }
      lVar3 = FUN_100172473(0,*puVar4,0x8000100);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

