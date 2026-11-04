// name: FUN_1004d9466
// address: 1004d9466

undefined8 FUN_1004d9466(long *param_1,undefined4 *param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_2 + 2) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = param_1[0xd];
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((long)param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0xd) = uVar5;
  *(undefined4 *)((long)param_1 + 0x6c) = uVar6;
  if (lVar2 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  param_1[0xe] = param_3;
  *(undefined1 *)(param_1 + 0xf) = param_4;
  (**(code **)(*param_1 + 0x28))(param_1);
  return 1;
}

