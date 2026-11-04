// name: FUN_10017ddd6
// address: 10017ddd6

undefined8 FUN_10017ddd6(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_438[0] = 0;
  iVar2 = FUN_10017de88(param_2,local_438,0x400);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100685f4a(iVar2,uVar3);
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  FUN_1001b7b04(param_1,local_438);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

