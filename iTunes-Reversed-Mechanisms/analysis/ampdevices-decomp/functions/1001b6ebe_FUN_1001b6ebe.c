// name: FUN_1001b6ebe
// address: 1001b6ebe

undefined8 FUN_1001b6ebe(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 local_50 [16];
  undefined8 *local_40;
  long *local_38;
  
  FUN_1001b7b04(param_1,"(");
  uVar3 = *(uint *)(param_2 + 0x18);
  if ((uVar3 & 1) == 0) {
    FUN_1001b7b04(&local_40," *");
    FUN_1001bbcfe(param_1,&local_40);
    FUN_1001b7a50(&local_40);
  }
  else if (*(long *)(param_2 + 0x28) != 0) {
    plVar5 = (long *)std::__shared_weak_count::lock();
    local_38 = plVar5;
    if (plVar5 != (long *)0x0) {
      puVar4 = *(undefined8 **)(param_2 + 0x20);
      local_40 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_1001b7b04(local_50," ");
        FUN_1001bbcfe(param_1,local_50);
        FUN_1001b7a50(local_50);
        (**(code **)*puVar4)(local_50,puVar4);
        FUN_1001bbcfe(param_1,local_50);
        FUN_1001b7a50(local_50);
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if ((uVar3 & 2) != 0) {
    FUN_1001b7b04(&local_40," ");
    FUN_1001bbcfe(param_1,&local_40);
    FUN_1001b7a50(&local_40);
    FUN_1001bbcfe(param_1,param_2 + 0x30);
  }
  FUN_1001b7b04(&local_40," )");
  FUN_1001bbcfe(param_1,&local_40);
  FUN_1001b7a50(&local_40);
  return param_1;
}

