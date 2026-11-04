// name: FUN_1001fbe3b
// address: 1001fbe3b

int FUN_1001fbe3b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined1 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 local_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_460 = 0;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006cd0e1(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    puVar5 = local_458;
    if (param_6 != (undefined1 *)0x0) {
      puVar5 = param_6;
    }
    iVar2 = FUN_1001f7080(param_2,param_3,puVar5,&local_460);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar3 = FUN_1001f9b59(local_460,0,param_1,param_4,param_5);
        FUN_1001f7652(local_460);
        iVar2 = 0;
        if (iVar3 != 0) {
          FUN_100182d4d(puVar5);
          iVar2 = iVar3;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006cd075(iVar2,uVar4);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

