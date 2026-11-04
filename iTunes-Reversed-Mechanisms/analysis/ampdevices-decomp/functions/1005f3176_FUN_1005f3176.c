// name: FUN_1005f3176
// address: 1005f3176

void FUN_1005f3176(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  
  plVar1 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *(long *)(param_1 + 8);
  FUN_100238ca8(local_40,lVar3 + 0x148);
  lVar6 = *(long *)(lVar3 + 0x198);
  if (lVar6 != 0) {
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x63a8);
    lVar5 = lVar3 + 0x198;
    do {
      bVar7 = *(ulong *)(lVar6 + 0x20) < uVar4;
      if (!bVar7) {
        lVar5 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)bVar7 * 8);
    } while (lVar6 != 0);
    if (((lVar5 != lVar3 + 0x198) && (*(ulong *)(lVar5 + 0x20) <= uVar4)) &&
       (*(char *)(lVar5 + 0x28) != '\0')) goto LAB_1005f3225;
  }
  FUN_100395b14(local_30,local_40);
  (**(code **)(*plVar1 + 0x4e8))(plVar1,**(undefined2 **)(param_1 + 0x18));
  FUN_100179644(local_30);
LAB_1005f3225:
  FUN_10015a142(local_40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

