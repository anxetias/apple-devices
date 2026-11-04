// name: FUN_10053bf8a
// address: 10053bf8a

void FUN_10053bf8a(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  undefined4 local_38;
  char *local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_50);
  cVar2 = FUN_10012bbe4(param_2);
  if (cVar2 != '\0') {
    FUN_10012bc1e(local_70,param_2);
    FUN_1001aaf3c(local_40,"device-activation");
    FUN_1001b7a44(local_60);
    FUN_100129a4c(&local_38,local_70,local_40,local_60);
    FUN_1001b80b2(local_50,&local_38);
    FUN_1001b7a50(&local_38);
    FUN_1001b7a50(local_60);
    FUN_1001ab006(local_40);
    FUN_1001a8fac(local_70);
  }
  cVar2 = FUN_1001b8428(local_50);
  if (cVar2 == '\0') {
    FUN_10016865a(**(undefined8 **)(param_1 + 8),&cf_activation_url,local_50,0);
    uVar1 = **(undefined8 **)(param_1 + 8);
    FUN_100132900(&local_38);
    FUN_10016865a(uVar1,&cf_activation_useragent,&local_38,0);
    FUN_1001b7a50(&local_38);
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220102;
      local_34 = "device-activation";
      __os_log_impl(0x100000000,uVar1,0x10,"activation> missing bag key for %{public}s",&local_38,
                    0xc);
    }
    lVar3 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar3 + 8) = 0x2d24;
  }
  FUN_10053b52b(lVar3);
  FUN_1001b7a50(local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

