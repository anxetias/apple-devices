// name: FUN_1001b6cb4
// address: 1001b6cb4

void FUN_1001b6cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_48;
  long *local_40;
  long local_38;
  
  local_38 = FUN_10020e3d6(param_1 + 0x28,param_4);
  if ((local_38 != param_1 + 0x30) &&
     (lVar9 = *(long *)(local_38 + 0x38) - *(long *)(local_38 + 0x30), lVar9 != 0)) {
    lVar5 = lVar9 >> 4;
    do {
      lVar9 = lVar9 + -0x10;
      lVar5 = lVar5 + -1;
      lVar6 = lVar5 * 0x10;
      lVar7 = *(long *)(*(long *)(local_38 + 0x30) + lVar6);
      plVar2 = *(long **)(*(long *)(local_38 + 0x30) + 8 + lVar6);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar2[1] = plVar2[1] + 1;
        UNLOCK();
      }
      cVar3 = FUN_1001b68fe(lVar7,*(undefined4 *)(lVar7 + 0x18),param_2,param_3);
      if (cVar3 == '\x01') {
        local_48 = 0;
        if (*(long *)(lVar7 + 0x48) != 0) {
          local_40 = (long *)std::__shared_weak_count::lock();
          if (local_40 != (long *)0x0) {
            local_48 = *(long *)(lVar7 + 0x40);
          }
          if (local_48 != 0) {
            FUN_1001b788c(param_5,&local_48);
          }
          if (local_40 != (long *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            lVar7 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar7 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
      else if (cVar3 == '\0') {
        lVar7 = *(long *)(local_38 + 0x30);
        lVar8 = *(long *)(local_38 + 0x38);
        lVar4 = lVar7 + lVar6;
        if (lVar7 + lVar6 + 0x10 != lVar8) {
          lVar4 = lVar7 + lVar9;
          lVar7 = lVar7 + lVar6;
          do {
            FUN_100217418(lVar7,lVar7 + 0x10);
            lVar4 = lVar4 + 0x10;
            lVar6 = lVar7 + 0x20;
            lVar7 = lVar7 + 0x10;
          } while (lVar6 != lVar8);
          lVar8 = *(long *)(local_38 + 0x38);
        }
        while (lVar8 != lVar4) {
          lVar8 = lVar8 + -0x10;
          FUN_100205d70(lVar8);
        }
        *(long *)(local_38 + 0x38) = lVar4;
      }
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
    } while (lVar5 != 0);
  }
  return;
}

