// name: FUN_10052d9b8
// address: 10052d9b8

undefined8 FUN_10052d9b8(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(param_1 + 0x78) = 0x44415448;
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  FUN_1001c631b(param_2 + 1,param_1 + 0x84,0x460);
  *(undefined1 *)(param_1 + 0x500) = *(undefined1 *)((long)param_2 + 0x469);
  *(undefined4 *)(param_1 + 0x7c) = 0x70617373;
  FUN_1002c3cd0(&local_38,*(long *)(param_2 + 0x120) + 0x68);
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  FUN_100217418(param_1 + 0x558,&local_28);
  plVar3 = (long *)CONCAT44(uStack_1c,uStack_20);
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
  return 0;
}

