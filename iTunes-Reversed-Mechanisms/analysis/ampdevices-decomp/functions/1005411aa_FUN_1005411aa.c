// name: FUN_1005411aa
// address: 1005411aa

undefined8 FUN_1005411aa(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_10053e9da();
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  if (*(long *)(param_3 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = *(long **)(param_1 + 0xfe8);
  *(undefined4 *)(param_1 + 0xfe0) = uVar4;
  *(undefined4 *)(param_1 + 0xfe4) = uVar5;
  *(undefined4 *)(param_1 + 0xfe8) = uVar6;
  *(undefined4 *)(param_1 + 0xfec) = uVar7;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0x636f726d;
  return 0;
}

