// name: FUN_1005b8824
// address: 1005b8824

void FUN_1005b8824(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = param_1;
  if (DAT_1008c3018 != param_1) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "timer == sMobileDeviceStopSessionAndDisconnectTimer";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001e9de0(&DAT_1008c2fc8);
  FUN_1001eed65(&local_50);
  puVar4 = DAT_1008c2fa8;
  while (puVar4 != &DAT_1008c2fb0) {
    if (*(int *)(puVar4 + 5) == 0) {
      puVar1 = (undefined8 *)puVar4[1];
      puVar5 = puVar4;
      if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)puVar5[2];
          bVar7 = (undefined8 *)*puVar6 != puVar5;
          puVar5 = puVar6;
        } while (bVar7);
      }
      else {
        do {
          puVar6 = puVar1;
          puVar1 = (undefined8 *)*puVar6;
        } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      }
      uVar3 = puVar4[4];
      FUN_1005c8650(puVar4);
      operator_delete(puVar4);
      FUN_1005b7fce(uVar3);
      FUN_10017060f(uVar3);
      puVar4 = puVar6;
    }
    else {
      puVar1 = (undefined8 *)puVar4[1];
      puVar5 = puVar4;
      if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
        do {
          puVar4 = (undefined8 *)puVar5[2];
          bVar7 = (undefined8 *)*puVar4 != puVar5;
          puVar5 = puVar4;
        } while (bVar7);
      }
      else {
        do {
          puVar4 = puVar1;
          puVar1 = (undefined8 *)*puVar4;
        } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
      }
    }
  }
  FUN_1001e9eb9(&DAT_1008c2fc8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

