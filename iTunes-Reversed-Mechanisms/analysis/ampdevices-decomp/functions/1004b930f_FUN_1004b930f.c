// name: FUN_1004b930f
// address: 1004b930f

void FUN_1004b930f(long param_1,undefined8 param_2,uint param_3,char param_4,char param_5)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_68;
  ulong local_60;
  uint local_58 [3];
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x140) == 0x66696c65) {
    plVar1 = *(long **)(param_1 + 0xaa0);
    if (param_5 != '\0' && plVar1 == (long *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = "(inLeafInfo->dataHandler != __null) || (inWriteDataToFile == false)";
        goto LAB_1004b95b9;
      }
      goto LAB_1004b9569;
    }
    if (param_3 == 0) goto LAB_1004b9572;
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x170) == 0x1f48) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = "inLeafInfo->downloadItem->status != kDownloadMgrErr_SegmentHashMismatch";
        goto LAB_1004b95b9;
      }
      goto LAB_1004b9569;
    }
    if (*(char *)(param_1 + 0xb19) == '\0') {
      if (param_5 != '\0') {
        local_60 = (ulong)param_3;
        local_58[1] = 0;
        local_58[0] = param_3;
        iVar3 = (**(code **)(*plVar1 + 0xa0))
                          (plVar1,*(undefined8 *)(param_1 + 0xb38),param_2,local_58,1);
        plVar1 = *(long **)(param_1 + 0xab0);
        if ((plVar1 != (long *)0x0) && ((*(byte *)(*(long *)(param_1 + 0x18) + 0x147) & 3) == 0)) {
          local_68 = local_60;
          (**(code **)(*plVar1 + 0xa0))(plVar1,*(undefined8 *)(param_1 + 0xb38),param_2,&local_68,1)
          ;
        }
        goto LAB_1004b94e4;
      }
      lVar5 = *(long *)(param_1 + 0xb38);
LAB_1004b95ee:
      iVar3 = FUN_1004b96f6(param_1 + 0x1408,param_2,param_3,lVar5);
      if (iVar3 == 0) {
        lVar5 = (ulong)param_3 + *(long *)(param_1 + 0xb38);
LAB_1004b961f:
        *(long *)(param_1 + 0xb38) = lVar5;
        if (param_4 != '\0') {
          lVar5 = *(long *)(param_1 + 0x18);
          cVar2 = FUN_1004aa626(lVar5);
          if ((cVar2 == '\0') || (*(char *)(lVar5 + 0x778) != '\0')) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_4a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
              goto LAB_1004b95b9;
            }
            goto LAB_1004b9569;
          }
          if ((*(int *)(lVar5 + 0x140) == 0x66696c65) &&
             ((((*(int *)(lVar5 + 0x1304) != 0x636f7079 && (*(int *)(lVar5 + 0x7d8) < 0)) &&
               (*(char *)(lVar5 + 0x1bc8) == '\0')) &&
              ((*(char *)(lVar5 + 0x1c10) != '\0' && (*(char *)(lVar5 + 0x1c11) != '\0')))))) {
            FUN_1004ab66b(lVar5,1);
          }
        }
      }
      else {
        FUN_1004ac2b6(*(undefined8 *)(param_1 + 0x18),0,iVar3,0);
      }
    }
    else {
      iVar3 = FUN_1004b96f6(param_1 + 0x1408,param_2,param_3,*(undefined8 *)(param_1 + 0xb38));
      if (iVar3 != 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          FUN_1004ac2b6(*(undefined8 *)(param_1 + 0x18),0,iVar3,0);
          return;
        }
        goto LAB_1004b96f1;
      }
      iVar3 = FUN_1004b9b0a(param_1,param_2,param_3);
LAB_1004b94e4:
      if (iVar3 == 0) {
        if (*(int *)(*(long *)(param_1 + 0x18) + 0x140) != 0x66696c65) goto LAB_1004b9550;
        lVar5 = *(long *)(param_1 + 0xb38);
        if (*(char *)(param_1 + 0xb19) == '\0') goto LAB_1004b95ee;
        lVar5 = lVar5 + (ulong)param_3;
        goto LAB_1004b961f;
      }
      FUN_1004ac2b6(*(long *)(param_1 + 0x18),0,iVar3,0);
      if (((iVar3 == -0x22) && ((*(byte *)(*(long *)(param_1 + 0x18) + 0x144) & 0x40) == 0)) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar5 != 0)) {
        *(undefined1 *)(lVar5 + 0x5ca) = 1;
      }
    }
  }
  else {
LAB_1004b9550:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "inLeafInfo->downloadItem->downloadTargetType == kDownloadDataDeliveryType_File";
LAB_1004b95b9:
      local_58[2] = 1;
      local_58[1] = 0x7a0a90;
      local_4c = 0x822;
      local_58[0] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
LAB_1004b9569:
    FUN_1001782e9(0,0);
  }
LAB_1004b9572:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1004b96f1:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

