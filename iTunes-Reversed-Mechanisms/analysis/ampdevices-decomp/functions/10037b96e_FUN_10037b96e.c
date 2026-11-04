// name: FUN_10037b96e
// address: 10037b96e

undefined8 FUN_10037b96e(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    plVar3 = (long *)param_3[1];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    iVar6 = (int)((ulong)(*(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10)) >> 3);
    if (iVar6 != 0) {
      iVar9 = 0;
      do {
        uVar4 = FUN_10037b3b0(lVar2,iVar9);
        puVar5 = *(undefined8 **)(param_1 + 0x18);
        puVar7 = (undefined8 *)(param_1 + 0x18);
        while (puVar8 = puVar7, puVar5 != (undefined8 *)0x0) {
          while (puVar7 = puVar5, (ulong)puVar7[4] <= uVar4) {
            if (uVar4 <= (ulong)puVar7[4]) goto LAB_10037ba56;
            puVar5 = (undefined8 *)puVar7[1];
            if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
              puVar8 = puVar7 + 1;
              goto LAB_10037ba0e;
            }
          }
          puVar5 = (undefined8 *)*puVar7;
        }
LAB_10037ba0e:
        puVar5 = operator_new(0x30);
        puVar5[4] = uVar4;
        *(int *)(puVar5 + 5) = iVar9;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = puVar7;
        *puVar8 = puVar5;
        if (**(long **)(param_1 + 0x10) != 0) {
          *(long *)(param_1 + 0x10) = **(long **)(param_1 + 0x10);
          puVar5 = (undefined8 *)*puVar8;
        }
        FUN_1001ad344(*(undefined8 *)(param_1 + 0x18),puVar5);
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
LAB_10037ba56:
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar6);
    }
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
  }
  return 1;
}

