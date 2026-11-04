// name: FUN_10043a792
// address: 10043a792

undefined8 FUN_10043a792(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  param_2 = (undefined8 *)*param_2;
  cVar2 = FUN_1002c10ef(*(undefined8 *)(*(long *)(param_1 + 8) + 0x152f0),*param_2);
  if (cVar2 != '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      FUN_100476ac1(local_48,param_2);
      local_34 = FUN_1001b83ae(local_48);
      local_38 = 0x8220102;
      __os_log_impl(0x100000000,uVar1,1,"sync> removed \"%{public}s\" from selected music tracks",
                    &local_38,0xc);
      FUN_1001b7a50(local_48);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

