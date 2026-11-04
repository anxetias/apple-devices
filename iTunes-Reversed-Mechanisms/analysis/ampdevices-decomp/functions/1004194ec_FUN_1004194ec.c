// name: FUN_1004194ec
// address: 1004194ec

void FUN_1004194ec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = &PTR_FUN_100857e10;
  param_1[2] = &PTR_FUN_100857ec0;
  uVar4 = FUN_1001c156e();
  iVar3 = FUN_1001c76c6(param_1 + 2,uVar4);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  FUN_10017060f(param_1[0x97]);
  FUN_100205d70(param_1 + 0x268);
  plVar1 = (long *)param_1[0x266];
  if (plVar1 == param_1 + 0x262) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1004195a1;
  }
  (**(code **)(*plVar1 + lVar5))();
LAB_1004195a1:
  FUN_100249fee(param_1 + 0x1da);
  FUN_100249fca(param_1 + 0x1d8);
  FUN_100249fee(param_1 + 0x152);
  FUN_100249fca(param_1 + 0x150);
  FUN_100249fee(param_1 + 0xca);
  FUN_100249fca(param_1 + 200);
  FUN_10024f3ba(param_1 + 0xbf);
  FUN_10024f3ba(param_1 + 0xb6);
  FUN_10024f3ba(param_1 + 0xac);
  FUN_100249fee(param_1 + 0xa7);
  FUN_100249fca(param_1 + 0xa5);
  FUN_100249ea6(param_1 + 0x98);
  FUN_100249fca(param_1 + 0x95);
  FUN_1001b7a50(param_1 + 0xc);
  FUN_1001c7684(param_1 + 2);
  FUN_1001cee68(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

