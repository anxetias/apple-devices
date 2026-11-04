// name: FUN_1004b76ff
// address: 1004b76ff

void FUN_1004b76ff(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      pcVar6 = "inHeaderParams != __null";
LAB_1004b7860:
      uStack_3c = 0x822;
      uStack_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      uStack_3a = SUB82(pcVar6,0);
      uStack_38 = (undefined6)((ulong)pcVar6 >> 0x10);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1004b77d7:
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  else {
    if ((*(char *)(param_1 + 0x778) != '\0') || (*(int *)(param_1 + 0x1304) != 0x68747470)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        pcVar6 = 
        "( ((inItem)->isContainer == false) && ((inItem)->leaf.downloadTransport.transportKind == kDownloadTransportKind_HTTP) )"
        ;
        goto LAB_1004b7860;
      }
      goto LAB_1004b77d7;
    }
    *(undefined8 *)(param_1 + 0x1b60) = 0xffffffffffffffff;
    uVar5 = FUN_1001705fc(*param_2);
    *(undefined8 *)(param_1 + 0x1350) = uVar5;
    if ((*(byte *)(param_1 + 0x144) & 0x10) == 0) {
LAB_1004b7767:
      iVar4 = *(int *)(param_2 + 1);
      if (iVar4 - 200U < 100) goto LAB_1004b77f6;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x78);
      if (*(long *)(param_1 + 0x80) == 0) {
        if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != -1)) goto LAB_1004b78a9;
        goto LAB_1004b7767;
      }
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_3a = 0;
      if (lVar1 == 0) {
        plVar7 = (long *)0x0;
        iVar4 = 0;
      }
      else {
LAB_1004b78a9:
        uStack_44 = 0;
        local_48 = 0;
        plVar7 = (long *)std::__shared_weak_count::lock();
        uStack_40 = SUB84(plVar7,0);
        uStack_3c = (undefined2)((ulong)plVar7 >> 0x20);
        uStack_3a = (undefined2)((ulong)plVar7 >> 0x30);
        iVar4 = 0;
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar2 = *(long **)(param_1 + 0x70);
          local_48 = SUB84(plVar2,0);
          uStack_44 = (undefined4)((ulong)plVar2 >> 0x20);
          if (plVar2 != (long *)0x0) {
            iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2);
          }
        }
      }
      if (*(code **)(param_1 + 0x80) != (code *)0x0) {
        iVar4 = (**(code **)(param_1 + 0x80))(param_1,0x68656472,param_2,0,param_1 + 0x90);
      }
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar1 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (iVar4 == 0) goto LAB_1004b77f6;
  }
  if (*(int *)(param_1 + 0x170) == 0) {
    *(int *)(param_1 + 0x170) = iVar4;
  }
LAB_1004b77f6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

