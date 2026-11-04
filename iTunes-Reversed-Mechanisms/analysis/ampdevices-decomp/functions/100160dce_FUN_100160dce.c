// name: FUN_100160dce
// address: 100160dce

int FUN_100160dce(undefined8 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_440;
  long local_438 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_2 < 0) {
    iVar2 = FUN_100160255(param_1,local_438);
    if (iVar2 == -0x80) goto LAB_100160ee5;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066f407(iVar2,uVar3);
      }
      goto LAB_100160ee5;
    }
    iVar2 = FUN_100160772(param_1,(int)param_2 + local_438[0]);
    if (iVar2 == -0x80) goto LAB_100160ee5;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066f39b(iVar2,uVar3);
      }
      goto LAB_100160ee5;
    }
  }
  else if (param_2 != 0) {
    do {
      uVar4 = 0x400;
      if (param_2 < 0x400) {
        uVar4 = (ulong)param_2;
      }
      local_440 = uVar4;
      iVar2 = FUN_100160380(param_1,&local_440,local_438);
      if (iVar2 != 0) {
        if (iVar2 != -0x80) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_10066f32f(iVar2,uVar3);
          }
        }
        goto LAB_100160ee5;
      }
      param_2 = param_2 - (int)uVar4;
    } while (param_2 != 0);
  }
  iVar2 = 0;
LAB_100160ee5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

