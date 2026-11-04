// name: FUN_1005ea388
// address: 1005ea388

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ea388(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 != 0) == ((param_3 != 0) != (param_2 != 0))) ||
     (param_3 != 0 && (param_2 != 0 && param_1 != 0))) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "((dfuDeviceRef != nullptr) ^ (recoveryDeviceRef != nullptr) ^ (restorableDeviceRef != nullptr)) && ((dfuDeviceRef == nullptr) || (recoveryDeviceRef == nullptr) || (restorableDeviceRef == nullptr))"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar7 = DAT_1008c7bc0;
    if (param_1 == 0) {
      if (param_2 == 0) {
        for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x6878)) {
          cVar2 = FUN_100170633(*(undefined8 *)(lVar7 + 0x68b0),param_3);
          if (cVar2 != '\0') goto LAB_1005ea4a1;
        }
      }
      else {
        for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x6878)) {
          cVar2 = FUN_100170633(*(undefined8 *)(lVar7 + 0x68a8),param_2);
          if (cVar2 != '\0') goto LAB_1005ea4a1;
        }
      }
    }
    else {
      for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x6878)) {
        cVar2 = FUN_100170633(*(undefined8 *)(lVar7 + 0x68a0),param_1);
        if (cVar2 != '\0') goto LAB_1005ea4a1;
      }
    }
  }
  goto LAB_1005ea437;
LAB_1005ea4a1:
  uVar1 = *(ulong *)(lVar7 + 0x63a8);
  if (uVar1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ecid != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (uVar1 == 0xffffffffffffffff) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ecid != kInvalidECID";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_100238ca8(&local_58,&DAT_1008c7c48);
    uVar3 = FUN_1001711e2();
    puVar5 = DAT_1008c7c98;
    if (DAT_1008c7c98 == (undefined8 *)0x0) {
      puVar6 = &DAT_1008c7c98;
      puVar8 = &DAT_1008c7c98;
    }
    else {
      do {
        while (puVar4 = puVar5, puVar6 = puVar4, (ulong)puVar4[4] <= uVar1) {
          if (uVar1 <= (ulong)puVar4[4]) goto LAB_1005ea611;
          puVar5 = (undefined8 *)puVar4[1];
          if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
            puVar8 = puVar4 + 1;
            goto LAB_1005ea5b7;
          }
        }
        puVar5 = (undefined8 *)*puVar4;
        puVar8 = puVar4;
      } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
    }
LAB_1005ea5b7:
    puVar4 = operator_new(0x30);
    puVar4[4] = uVar1;
    puVar4[5] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = puVar6;
    *puVar8 = puVar4;
    puVar5 = puVar4;
    if ((long *)*DAT_1008c7c90 != (long *)0x0) {
      puVar5 = (undefined8 *)*puVar8;
      DAT_1008c7c90 = (long *)*DAT_1008c7c90;
    }
    FUN_1001ad344(DAT_1008c7c98,puVar5);
    _DAT_1008c7ca0 = _DAT_1008c7ca0 + 1;
LAB_1005ea611:
    puVar4[5] = uVar3;
    FUN_10015a142(&local_58);
  }
  if (1 < *(int *)(lVar7 + 0x68bc) - 1U) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      FUN_1005ed5a2(&DAT_1008c7b60,lVar7);
      return;
    }
    goto LAB_1005ea747;
  }
  if (param_1 == 0) {
    if (*(long *)(lVar7 + 0x68a8) != 0) {
      FUN_10017060f();
      *(undefined8 *)(lVar7 + 0x68a8) = 0;
    }
  }
  else {
    FUN_10017060f(*(undefined8 *)(lVar7 + 0x68a0));
    *(undefined8 *)(lVar7 + 0x68a0) = 0;
  }
LAB_1005ea437:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1005ea747:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

