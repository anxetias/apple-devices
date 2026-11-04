// name: FUN_1005011a7
// address: 1005011a7

void FUN_1005011a7(int param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar8;
  long *plVar9;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined6 local_448;
  undefined2 uStack_442;
  long *local_438;
  undefined8 local_428;
  undefined7 uStack_420;
  undefined4 uStack_419;
  undefined8 local_410;
  undefined8 uStack_408;
  long *local_400;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      uStack_454 = 0x7a0a90;
      local_450 = 1;
      uStack_44c = 0x822;
      uStack_44a = 0x5926;
      local_448 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_1 == 0x69707365) {
    plVar7 = *(long **)(param_5 + 0x10);
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)0x0;
      do {
        if (*(int *)((long)plVar7 + 0x284) == param_2) {
          plVar9 = plVar8;
          if (plVar8 == (long *)0x0) {
            plVar9 = plVar7;
          }
          plVar8 = plVar9;
          if ((*(uint *)((long)plVar7 + 0x15804) != 0) &&
             (plVar8 = plVar7,
             *(uint *)((long)plVar7 + 0x15804) <= *(uint *)((long)plVar9 + 0x15804))) {
            plVar8 = plVar9;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      if (plVar8 != (long *)0x0) {
        DAT_1008c7590 = DAT_1008c7590 + 1;
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          FUN_10050a6f5(plVar8,FUN_10051e99a);
          return;
        }
        goto LAB_1005014d2;
      }
    }
  }
  else {
    if (param_1 == 0x77786d6c) {
      FUN_10022509c(0);
      FUN_10022509c(0x4d616320);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        FUN_10022509c(0x69427269);
        return;
      }
      goto LAB_1005014d2;
    }
    if (((param_1 == 0x75737261) && (cVar1 = FUN_10018ea7c(), cVar1 != '\0')) &&
       (plVar7 = *(long **)(param_5 + 0x80), plVar7 != (long *)0x0)) {
      do {
        if ((char)plVar7[3] != '\x01') {
          cVar1 = FUN_10050ca68(plVar7);
          if (cVar1 == '\0') {
            *(undefined1 *)(plVar7 + 3) = 3;
            uVar4 = FUN_10026394e(plVar7[2]);
            local_458 = 0x85f3c0;
            uStack_454 = 1;
            local_450 = 0x50cf91;
            uStack_44c = 1;
            uStack_44a = 0;
            local_448 = (undefined6)uVar4;
            uStack_442 = (undefined2)((ulong)uVar4 >> 0x30);
            local_428 = 0;
            uStack_420 = 0;
            uStack_419 = 0;
            local_410 = 0;
            uStack_408 = 0;
            local_400 = (long *)0x0;
            local_438 = (long *)&local_458;
            FUN_10017869a(&local_458);
            if (local_400 != (long *)0x0) {
              LOCK();
              plVar8 = local_400 + 1;
              lVar6 = *plVar8;
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (lVar6 == 0) {
                (**(code **)(*local_400 + 0x10))(local_400);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_438 == (long *)&local_458) {
              lVar6 = 0x20;
            }
            else {
              lVar6 = 0x28;
              if (local_438 == (long *)0x0) goto LAB_10050136e;
            }
            (**(code **)(*local_438 + lVar6))();
          }
          else {
            *(undefined1 *)(plVar7 + 3) = 1;
            lVar6 = plVar7[2];
            FUN_100501841(lVar6,0x706f6461,extraout_RDX,param_5);
            uVar4 = FUN_10026647d(lVar6);
            lVar5 = FUN_10050c4fb(*(undefined8 *)(param_5 + 0x10),uVar4);
            if (lVar5 != 0) {
              uVar2 = FUN_100266e14(lVar6);
              *(undefined1 *)(lVar5 + 0x6adc) = uVar2;
              iVar3 = FUN_10026677e(lVar6,&local_458);
              if (iVar3 == 0) {
                FUN_100501841(lVar6,0x706f646d,extraout_RDX_00,param_5);
              }
              else {
                *(undefined1 *)(lVar5 + 0x6ad6) = 1;
                FUN_1002665ba(lVar6,0,0);
              }
            }
          }
        }
LAB_10050136e:
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1005014d2:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

