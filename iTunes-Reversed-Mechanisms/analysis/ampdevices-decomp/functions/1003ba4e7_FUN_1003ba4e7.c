// name: FUN_1003ba4e7
// address: 1003ba4e7

undefined8 FUN_1003ba4e7(long param_1,int param_2,int *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  char *local_9a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = &DAT_1008c75a0;
  do {
    lVar1 = *plVar3;
    if (lVar1 == param_1) break;
    plVar3 = (long *)(lVar1 + 8);
  } while (lVar1 != 0);
  if (lVar1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_9a = "IsValidEncoderPlugin(encoderPlugin)";
LAB_1003ba63e:
      local_9c = 0x822;
      local_a4 = "Assertion failure";
      local_a8 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
  }
  else {
    if (*param_3 == 10) {
      FUN_1001e4bb2(param_1 + 0x38,&local_a8);
      FUN_1003b8245(local_b8,&local_a8);
      uVar4 = 0;
      if (param_2 != 0x756e7267) {
        if (param_2 == 0x6974737a) {
          param_3[3] = 0x1660;
        }
        else {
          uVar4 = 0xfffffffc;
        }
      }
      FUN_1001b7a50(local_b8);
      goto LAB_1003ba5f6;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_9a = "messageInfo->messageMajorVersion == kITPluginMajorMessageVersion";
      goto LAB_1003ba63e;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1003ba5f6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

