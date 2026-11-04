// name: FUN_1002d7067
// address: 1002d7067

void FUN_1002d7067(ulong param_1,ulong param_2,char *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "outDeviceRef != nullptr";
LAB_1002d726e:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *param_4 = 0;
    puVar2 = DAT_1008c5d80;
    if (param_2 != 0 || param_1 != 0) {
      for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
        if (((param_1 != 0) && (puVar2[3] == param_1)) || ((param_2 != 0 && (puVar2[4] == param_2)))
           ) goto LAB_1002d7224;
      }
      puVar2 = (undefined8 *)FUN_1001c629e(0x48,&DAT_100711c6e);
      if (puVar2 == (undefined8 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "device != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        puVar2 = (undefined8 *)0x0;
        FUN_1001782e9(0,0);
      }
      else {
        *(undefined4 *)(puVar2 + 1) = 0x6461706f;
        puVar2[3] = param_1;
        uVar3 = param_2 | 0xa270002000000;
        if (param_2 == 0) {
          uVar3 = param_1;
        }
        puVar2[4] = param_2;
        puVar2[5] = uVar3;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_58 = 0x8420102;
          local_54 = param_3;
          __os_log_impl(0x100000000,uVar4,1,
                        "New iPod disk arb device with appearance time %{public}@",&local_58,0xc);
        }
        uVar4 = FUN_1001705fc(param_3);
        puVar2[6] = uVar4;
        FUN_1001ea897(puVar2,&DAT_1008c5d80);
      }
LAB_1002d7224:
      *param_4 = puVar2;
      goto LAB_1002d7227;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "(fireWireGUID != 0) || (usbSerialNumber != 0)";
      goto LAB_1002d726e;
    }
  }
  FUN_1001782e9(0,0);
LAB_1002d7227:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

