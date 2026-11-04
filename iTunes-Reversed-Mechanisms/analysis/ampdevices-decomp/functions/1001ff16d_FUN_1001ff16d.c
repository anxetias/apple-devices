// name: FUN_1001ff16d
// address: 1001ff16d

void FUN_1001ff16d(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 local_280 [8];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_258 [512];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *param_2;
  FUN_1001cc3a4(0);
  FUN_1001b7b04(&local_58,"EraseDevice");
  FUN_1001cc232(local_280,&local_58);
  FUN_1001b7a50(&local_58);
  if (*(char *)(lVar4 + 0x6ae9) == '\0') {
    if (*(char *)(lVar4 + 0x6aea) == '\0') {
      if (*(char *)(lVar4 + 0x6aeb) == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          local_58 = 0x8420102;
          uStack_54 = (undefined4)*(undefined8 *)(lVar4 + 0x152c8);
          uStack_50 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x152c8) >> 0x20);
          __os_log_impl(0x100000000,uVar10,1,"restore> erasing device %{public}@",&local_58,0xc);
        }
        *(undefined1 *)(lVar4 + 0x6aea) = 1;
        uVar6 = FUN_1001b19b0();
        *(undefined4 *)((long)param_2 + 0x34) = uVar6;
        if ((char)param_2[2] != '\0') {
          uVar10 = FUN_1001c156e();
          FUN_1001c6987(uVar10,0x69706573,*(undefined4 *)(lVar4 + 0x28),0,0);
        }
        FUN_10023318f(lVar4,"");
        iVar7 = FUN_1001ee6ff(FUN_100203d65,param_2,0xfffffffe,0,0,"EraseMobileDeviceThread");
        if (iVar7 != -0x80) {
          if (iVar7 == 0) {
            FUN_1001ebd46();
            FUN_1001c334a(&local_278,0x110e0056);
            FUN_1004fdbd0(&local_268,lVar4);
            FUN_1001bbec4(&local_58,&local_278,&local_268);
            FUN_1001bb41a(&local_58,local_258);
            FUN_1001b7a50(&local_58);
            FUN_1001b7a50(&local_268);
            FUN_1001b7a50(&local_278);
            local_58 = (undefined4)param_2[3];
            uStack_54 = *(undefined4 *)((long)param_2 + 0x1c);
            uStack_50 = (undefined4)param_2[4];
            uStack_4c = (undefined2)*(undefined4 *)((long)param_2 + 0x24);
            uStack_4a = (undefined2)((uint)*(undefined4 *)((long)param_2 + 0x24) >> 0x10);
            if (param_2[4] != 0) {
              LOCK();
              plVar1 = (long *)(param_2[4] + 8);
              *plVar1 = *plVar1 + 1;
              UNLOCK();
            }
            FUN_1001ceb3c(&local_58,0x7570726d,0,0xffffffffffffffff,local_258);
            plVar1 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
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
            if ((char)param_2[6] == '\0') {
              uVar10 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
              do {
                iVar8 = (int)param_2[5];
                if (iVar8 - 1U < 100) {
                  local_278 = (undefined4)param_2[3];
                  uStack_274 = *(undefined4 *)((long)param_2 + 0x1c);
                  uStack_270 = (undefined4)param_2[4];
                  uStack_26c = *(undefined4 *)((long)param_2 + 0x24);
                  if (param_2[4] != 0) {
                    LOCK();
                    plVar1 = (long *)(param_2[4] + 8);
                    *plVar1 = *plVar1 + 1;
                    UNLOCK();
                    iVar8 = (int)param_2[5];
                  }
                  FUN_1001ceb3c(&local_278,0x7570726d,(long)iVar8,100,local_258);
                  plVar1 = (long *)CONCAT44(uStack_26c,uStack_270);
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
                }
                iVar8 = FUN_1001b1a0f();
                iVar9 = FUN_1001b19b0();
                if (iVar8 == iVar9) {
                  FUN_1001727b4((int)DAT_100712580,uVar10,0);
                }
                else {
                  FUN_1001b0be5();
                }
              } while ((char)param_2[6] == '\0');
            }
            if (*(int *)((long)param_2 + 0x2c) != 0) {
              if (*(int *)((long)param_2 + 0x2c) != -10) goto LAB_1001ff627;
              *(undefined4 *)((long)param_2 + 0x2c) = 0;
            }
            *(undefined1 *)(lVar4 + 0x6afb) = 1;
            local_268 = (undefined4)param_2[3];
            uStack_264 = *(undefined4 *)((long)param_2 + 0x1c);
            uStack_260 = (undefined4)param_2[4];
            uStack_25c = *(undefined4 *)((long)param_2 + 0x24);
            if (param_2[4] != 0) {
              LOCK();
              plVar1 = (long *)(param_2[4] + 8);
              *plVar1 = *plVar1 + 1;
              UNLOCK();
            }
            FUN_1001ceb3c(&local_268,0x7570726d,100,100,local_258);
            FUN_100205d70(&local_268);
          }
          else {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x400;
              uStack_4a = (undefined2)iVar7;
              uStack_48 = (undefined2)((uint)iVar7 >> 0x10);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
LAB_1001ff627:
        FUN_10017060f(param_2[1]);
        param_2[1] = 0;
        *(undefined1 *)(lVar4 + 0x6aea) = 0;
        if ((char)param_2[2] != '\0') {
          uVar10 = FUN_1001c156e();
          FUN_1001c6987(uVar10,0x69706566,*(undefined4 *)(lVar4 + 0x28),(long)iVar7,
                        (long)*(int *)((long)param_2 + 0x2c));
        }
        goto LAB_1001ff2e1;
      }
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        pcVar11 = "handlerData->isRestoringFromLocalBackup == false";
        goto LAB_1001ff2ad;
      }
    }
    else {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        pcVar11 = "handlerData->isErasing == false";
        goto LAB_1001ff2ad;
      }
    }
  }
  else {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      pcVar11 = "handlerData->isBackingUp == false";
LAB_1001ff2ad:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar11,0);
      uStack_48 = (undefined2)((ulong)pcVar11 >> 0x10);
      uStack_46 = (undefined4)((ulong)pcVar11 >> 0x20);
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  iVar7 = 0x492;
  FUN_1001782e9(0,0);
LAB_1001ff2e1:
  FUN_1001cc23c(local_280);
  FUN_1001cc4fc(0);
  if ((iVar7 == 0) && (*(int *)((long)param_2 + 0x2c) == 0)) {
    FUN_1004e3b42(*param_2);
  }
  FUN_1004e1e68(*param_2);
  FUN_100205d70(param_2 + 3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    operator_delete(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

