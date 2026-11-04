// name: FUN_10012e594
// address: 10012e594

/* WARNING: Removing unreachable block (ram,0x00010012e6a1) */
/* WARNING: Removing unreachable block (ram,0x00010012e6b3) */

void FUN_10012e594(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long *local_30;
  undefined1 local_28 [8];
  
  cVar3 = FUN_10013303f();
  if (cVar3 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1001322ac(uVar4);
    }
    FUN_1001782e9(0,1);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1001444f2(*param_2,3);
    FUN_10014f388(local_68,0x1db2);
    FUN_1001b7b04(local_58,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_48,"Request scheduler not accepting requests.");
    FUN_1001aa6a0(local_28,local_58,0x1d51,local_48,local_68);
    FUN_1001b7a50(local_48);
    FUN_1001b7a50(local_58);
    local_38 = *param_2;
    local_30 = (long *)param_2[1];
    if (local_30 != (long *)0x0) {
      LOCK();
      local_30[1] = local_30[1] + 1;
      UNLOCK();
    }
    FUN_100144dfe(local_38,&local_38,local_28);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_1001aaad2(local_28);
    FUN_1001a8fac(local_68);
  }
  else {
    FUN_10012e76a(param_1,param_2);
    FUN_10012e8c2(param_1,param_2,0);
  }
  return;
}

