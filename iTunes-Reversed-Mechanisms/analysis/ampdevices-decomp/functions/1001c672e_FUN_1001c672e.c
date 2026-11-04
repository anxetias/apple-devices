// name: FUN_1001c672e
// address: 1001c672e

void FUN_1001c672e(int *param_1)

{
  long *plVar1;
  int *piVar2;
  void *pvVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4d536e64)) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006a99f3(uVar5);
    }
  }
  else {
    if (param_1[2] == 0) {
      FUN_1001c6987(param_1,0x64696564,param_1,0,0);
      if (*(long **)(param_1 + 4) != (long *)0x0) {
        plVar7 = *(long **)(param_1 + 4);
        do {
          plVar1 = (long *)*plVar7;
          piVar2 = (int *)plVar7[2];
          if (((piVar2 == (int *)0x0) || (*piVar2 != 0x4d526376)) ||
             ((*(long *)(piVar2 + 10) == 0 && (*(long *)(piVar2 + 0xc) == 0)))) {
            uVar5 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar5,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "MessageReceiverIsValid(receiverInfo->receiver)";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            local_58 = SUB84(param_1,0);
            uStack_54 = (undefined4)((ulong)param_1 >> 0x20);
            lVar6 = FUN_100131b98(*(undefined8 *)(piVar2 + 8),&local_58);
            if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
              uVar5 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar5,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x822;
                local_4a = "senderInfo != nullptr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              FUN_1001c6ad8(plVar7[2]);
              *(int *)(plVar7[2] + 8) = *(int *)(plVar7[2] + 8) + 1;
            }
            FUN_1001c6b11(param_1,plVar7);
          }
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      pvVar3 = *(void **)(param_1 + 8);
      if (pvVar3 != (void *)0x0) {
        FUN_1002842e4(pvVar3);
        operator_delete(pvVar3);
      }
      param_1[8] = 0;
      param_1[9] = 0;
      FUN_1001c62d9(param_1,0x28);
      goto LAB_1001c67ac;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006a997d(uVar5);
    }
  }
  FUN_1001782e9(0,0);
LAB_1001c67ac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

