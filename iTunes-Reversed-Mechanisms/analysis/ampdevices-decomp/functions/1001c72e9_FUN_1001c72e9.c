// name: FUN_1001c72e9
// address: 1001c72e9

void FUN_1001c72e9(int *param_1)

{
  long *plVar1;
  int *piVar2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (int *)0x0) || (*param_1 != 0x4d526376)) ||
     ((*(long *)(param_1 + 10) == 0 && (*(long *)(param_1 + 0xc) == 0)))) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006a9f02(uVar6);
    }
    FUN_1001782e9(0,0);
    goto LAB_1001c74d8;
  }
  if (*(long **)(param_1 + 4) != (long *)0x0) {
    plVar8 = *(long **)(param_1 + 4);
    do {
      plVar1 = (long *)*plVar8;
      piVar2 = (int *)plVar8[2];
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0x4d536e64)) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_4a = "MessageSenderIsValid(senderInfo->sender)";
LAB_1001c7408:
          local_4c = 0x822;
          uStack_50 = 1;
          uStack_54 = 0x7a0a90;
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_1001c742c:
        FUN_1001782e9(0,0);
      }
      else {
        local_58 = SUB84(param_1,0);
        uStack_54 = (undefined4)((ulong)param_1 >> 0x20);
        lVar5 = FUN_100131b98(*(undefined8 *)(piVar2 + 8),&local_58);
        if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_4a = "receiverInfo != nullptr";
            goto LAB_1001c7408;
          }
          goto LAB_1001c742c;
        }
        lVar7 = plVar8[2];
        if (*(int *)(lVar7 + 8) == 0) {
          FUN_1001c6b11();
          lVar7 = plVar8[2];
        }
        else {
          *(undefined1 *)(*(long *)(lVar5 + 0x18) + 0x18) = 1;
        }
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
        FUN_1001c6ad8(param_1,plVar8);
      }
      plVar8 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar3 != (void *)0x0) {
    FUN_1002842e4(pvVar3);
    operator_delete(pvVar3);
  }
  plVar8 = *(long **)(param_1 + 10);
  if (plVar8 != (long *)0x0) {
    plVar1 = (long *)plVar8[4];
    if (plVar1 == plVar8) {
      lVar5 = 0x20;
LAB_1001c74bd:
      (**(code **)(*plVar1 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (plVar1 != (long *)0x0) goto LAB_1001c74bd;
    }
    operator_delete(plVar8);
  }
  FUN_1001c62d9(param_1,0x40);
LAB_1001c74d8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

