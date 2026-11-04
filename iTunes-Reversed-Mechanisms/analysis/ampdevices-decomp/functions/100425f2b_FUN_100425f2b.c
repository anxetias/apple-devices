// name: FUN_100425f2b
// address: 100425f2b

long FUN_100425f2b(int param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  int local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1005e9a2c();
  lVar2 = *(long *)(lVar2 + 0x60);
  if (lVar2 != 0 && param_1 != 0) {
    do {
      if (*(int *)(lVar2 + 0x6884) == param_1) {
        uVar3 = FUN_1005e9a2c();
        lVar2 = FUN_1005e7932(uVar3,param_1);
        goto LAB_100425f94;
      }
      lVar2 = *(long *)(lVar2 + 0x6878);
    } while (lVar2 != 0);
  }
  uVar3 = FUN_1004de449(param_1);
  lVar2 = FUN_100501f71(uVar3);
LAB_100425f94:
  if (lVar2 == 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x4000100;
      local_34 = param_1;
      __os_log_impl(0x100000000,uVar3,0x10,"Can\'t find deviceIdentifier for object ID %u",&local_38
                    ,8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

