// name: FUN_10020e0d0
// address: 10020e0d0

undefined8 FUN_10020e0d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [8];
  long *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10015189a();
  FUN_10012bbaa(local_70);
  cVar3 = FUN_10012bbe4(local_70);
  if (cVar3 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "bag.IsReady()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar3 = FUN_1001782e9(0,0);
    if (cVar3 == '\0') goto LAB_10020e20a;
  }
  if ((param_3 & 1) == 0) {
    FUN_10012bc1e(local_60,local_70);
    FUN_1001aaf3c(local_50,"storefront-header-suffix");
    FUN_1001b7a44(local_80);
    FUN_100129a4c(&local_48,local_60,local_50,local_80);
    FUN_1001bbcfe(param_1,&local_48);
    FUN_1001b7a50(&local_48);
    puVar5 = local_80;
  }
  else {
    FUN_10012bc1e(local_60,local_70);
    FUN_1001aaf3c(local_50,"subscription-storefront-header-suffix");
    FUN_1001b7a44(local_90);
    FUN_100129a4c(&local_48,local_60,local_50,local_90);
    FUN_1001bbcfe(param_1,&local_48);
    FUN_1001b7a50(&local_48);
    puVar5 = local_90;
  }
  FUN_1001b7a50(puVar5);
  FUN_1001ab006(local_50);
  FUN_1001a8fac(local_60);
LAB_10020e20a:
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

