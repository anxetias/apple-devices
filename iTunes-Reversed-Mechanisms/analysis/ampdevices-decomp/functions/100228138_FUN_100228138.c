// name: FUN_100228138
// address: 100228138

undefined4
FUN_100228138(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  uVar5 = FUN_100416f20(param_1,0x10cc00fd);
  FUN_1001b7eb0(local_38,uVar5);
  plVar3 = *(long **)(param_3 + 2);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_100227caa(param_2,&local_48,local_38,0,0x2f,param_4);
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
  FUN_1001b7a50(local_38);
  return uVar4;
}

