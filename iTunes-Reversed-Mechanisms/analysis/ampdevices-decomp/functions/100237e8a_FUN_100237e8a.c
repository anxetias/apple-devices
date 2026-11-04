// name: FUN_100237e8a
// address: 100237e8a

void FUN_100237e8a(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0xfc) != 5)) {
    uVar4 = FUN_1001ea5dc();
    *(undefined4 *)(param_2 + 0x34) = uVar4;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      lVar6 = std::__shared_weak_count::lock();
      if (lVar6 != 0) {
        *(undefined8 *)(param_2 + 0x50) = uVar7;
        plVar2 = *(long **)(param_2 + 0x58);
        *(long *)(param_2 + 0x58) = lVar6;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar6 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        cVar3 = FUN_10017869a(param_2);
        if (cVar3 != '\0') {
          FUN_100238ca8(&local_58);
          if (*(int *)(param_1 + 0xfc) == 3) {
            *(undefined4 *)(param_1 + 0xfc) = 4;
          }
          FUN_10015a142(&local_58);
          bVar8 = false;
          do {
            iVar5 = FUN_1001e91e4(param_1 + 0xd8,250000);
            if (iVar5 == 0x3c) {
              if ((*(int *)(param_1 + 0xfc) == 5) || (*(int *)(param_1 + 0xfc) == 0)) {
                uVar7 = FUN_100235e52();
                uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_54 = FUN_1001b83ae(param_1 + 0x28);
                  local_58 = 0x8220202;
                  local_4c = 0x400;
                  local_4a = 0x3c;
                  __os_log_impl(0x100000000,uVar7,0x10,
                                "**ERROR**: WaitTillNonPreemptiveCompletes() failed! ccp:%{public}s error:%d"
                                ,&local_58,0x12);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar7);
                FUN_10017899c(uVar4);
                break;
              }
              if (!bVar8) {
                FUN_100238ca8(&local_58,param_1 + 0x40);
                if (*(int *)(param_1 + 0xfc) == 4) {
                  cVar3 = *(char *)(param_1 + 200);
                  FUN_10015a142(&local_58);
                  if (cVar3 == '\x01') {
                    cVar3 = FUN_10017899c(uVar4);
                    bVar8 = true;
                    if (cVar3 != '\0') break;
                  }
                }
                else {
                  FUN_10015a142(&local_58);
                }
              }
            }
            else {
              if (iVar5 == 0) break;
              uVar7 = FUN_100235e52();
              uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_54 = FUN_1001b83ae(param_1 + 0x28);
                local_58 = 0x8220202;
                local_4c = 0x400;
                local_4a = iVar5;
                __os_log_impl(0x100000000,uVar7,0x10,
                              "**ERROR**: WaitTillNonPreemptiveCompletes() failed! ccp:%{public}s error:%d"
                              ,&local_58,0x12);
              }
              (*(code *)PTR__objc_release_10082c7b0)(uVar7);
              FUN_10017899c(uVar4);
            }
          } while (iVar5 == 0x3c);
          FUN_100238ca8(&local_58,param_1 + 0x40);
          if (*(int *)(param_1 + 0xfc) == 4) {
            *(undefined4 *)(param_1 + 0xfc) = 3;
          }
          FUN_10015a142(&local_58);
          FUN_1001e9460(param_1 + 0xd8);
        }
        goto LAB_100238124;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_10013bd04();
  }
LAB_100238124:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

