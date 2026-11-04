// name: FUN_1001b360a
// address: 1001b360a

undefined8 * FUN_1001b360a(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar5 = _CGImageCreateWithImageInRect(*(undefined8 *)(param_2 + 0x48));
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006a0f9b(uVar6);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    if (lVar5 == *(long *)(param_2 + 0x48)) {
      FUN_1002c3cd0(&local_38,param_2 + 8);
      puVar7 = &local_48;
      local_48 = local_38;
      uStack_44 = uStack_34;
      uStack_40 = uStack_30;
      uStack_3c = uStack_2c;
    }
    else {
      FUN_1001b2dff((int)DAT_100700458,&local_38,lVar5);
      puVar7 = &local_38;
    }
    FUN_100217418(param_1,puVar7);
    plVar3 = *(long **)(puVar7 + 2);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_10017060f(lVar5);
  }
  return param_1;
}

