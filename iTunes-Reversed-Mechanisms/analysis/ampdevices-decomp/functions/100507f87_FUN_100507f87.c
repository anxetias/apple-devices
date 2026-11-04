// name: FUN_100507f87
// address: 100507f87

void FUN_100507f87(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  uint local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_1 + 0x16640);
  if (lVar3 != 0) {
    FUN_10017060f(*(undefined8 *)(lVar3 + 0x10));
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  if ((*(long *)(param_1 + 0x7168) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_28 = local_28 & 0xffff0000;
      __os_log_impl(0x100000000,uVar1,1,"sync> aborting operations before unmounting device",
                    &local_28,2);
    }
    FUN_100315cf3(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    for (lVar3 = FUN_1002f9fc5(); lVar3 != 0; lVar3 = FUN_1002fa118(lVar3)) {
      FUN_1002b765a(lVar3);
      *(undefined1 *)(lVar3 + 0x44) = 0;
    }
    FUN_1001c62d9(*(long *)(param_1 + 0x30) + 0x27b8,0x420);
  }
  *(undefined1 *)(param_1 + 0x6ad7) = 0;
  FUN_1001c62d9(param_1 + 0x6b40,0x420);
  FUN_100505b70(param_1 + 0x14c68);
  if (*(long *)(param_1 + 0x14cb0) != 0) {
    FUN_10017cdfb();
    *(undefined8 *)(param_1 + 0x14cb0) = 0;
  }
  FUN_1001e9eb9(param_1 + 0x14c68);
  if (*(long *)(param_1 + 0x14cc0) != 0) {
    FUN_10017cdfb();
    *(undefined8 *)(param_1 + 0x14cc0) = 0;
  }
  cVar2 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
  if (((cVar2 != '\0') && (*(char *)(param_1 + 0x6ada) == '\0')) &&
     (*(int *)(param_1 + 0x66e0) != 0)) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar2 != '\0') {
      local_24 = *(undefined4 *)(param_1 + 0x66e0);
      local_28 = 0x4000100;
      __os_log_impl(0x100000000,uVar1,2,"release> resetting retain count (%u)",&local_28,8);
    }
    *(undefined4 *)(param_1 + 0x66e0) = 0;
  }
  FUN_1001c62d9(param_1 + 0x71c0,0x420);
  FUN_1001c62d9(param_1 + 0x75e0,0x420);
  FUN_1001c62d9(param_1 + 0x7a00,0x420);
  FUN_1001c62d9(param_1 + 0x7e28,0xce40);
  FUN_1001c62d9(param_1 + 0x159c8,0x420);
  FUN_1001c62d9(param_1 + 0x15df0,0x420);
  FUN_1001c62d9(param_1 + 0x16218,0x420);
  FUN_1004ded16(param_1,0);
  FUN_10017060f(*(undefined8 *)(param_1 + 0x15de8));
  *(undefined8 *)(param_1 + 0x15de8) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x16210));
  *(undefined8 *)(param_1 + 0x16210) = 0;
  FUN_10023318f(param_1,"");
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

