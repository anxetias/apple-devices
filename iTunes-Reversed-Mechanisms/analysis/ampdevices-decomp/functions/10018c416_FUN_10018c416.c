// name: FUN_10018c416
// address: 10018c416

int FUN_10018c416(long param_1,undefined2 *param_2,undefined1 *param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069173f(uVar4);
    }
  }
  else {
    if (param_2 != (undefined2 *)0x0) {
      puVar5 = local_68;
      if (param_3 != (undefined1 *)0x0) {
        puVar5 = param_3;
      }
      sVar2 = _FSMakeFSRefUnicode(param_1,*param_2,param_2 + 1,0xffff,puVar5);
      iVar3 = (int)sVar2;
      goto LAB_10018c4a6;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006916c9(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10018c4a6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

