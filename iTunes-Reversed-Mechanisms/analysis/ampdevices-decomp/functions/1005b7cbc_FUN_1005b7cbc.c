// name: FUN_1005b7cbc
// address: 1005b7cbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005b7cbc(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double dVar9;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (char *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "device != __null";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005b7e89;
  }
  iVar2 = -0x17fffff5;
  if (DAT_1008c3011 != '\0') goto LAB_1005b7e89;
  FUN_1001e9de0(&DAT_1008c2fc8);
  if (DAT_1008c2fb0 == (undefined8 *)0x0) {
LAB_1005b7d43:
    iVar2 = FUN_1005b81c3(param_1);
    if (iVar2 == 0) {
      uVar4 = FUN_1001705fc(param_1);
      uVar8 = FUN_1001ebd46();
      puVar3 = DAT_1008c2fb0;
      if (DAT_1008c2fb0 == (undefined8 *)0x0) {
        puVar6 = &DAT_1008c2fb0;
        puVar7 = &DAT_1008c2fb0;
      }
      else {
        do {
          while (puVar5 = puVar3, puVar6 = puVar5, (ulong)puVar5[4] <= uVar4) {
            if (uVar4 <= (ulong)puVar5[4]) goto LAB_1005b7e6e;
            puVar3 = (undefined8 *)puVar5[1];
            if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
              puVar7 = puVar5 + 1;
              goto LAB_1005b7e10;
            }
          }
          puVar3 = (undefined8 *)*puVar5;
          puVar7 = puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      }
LAB_1005b7e10:
      local_50 = uVar8;
      puVar5 = operator_new(0x38);
      puVar5[4] = uVar4;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = puVar6;
      *puVar7 = puVar5;
      puVar3 = puVar5;
      if ((long *)*DAT_1008c2fa8 != (long *)0x0) {
        puVar3 = (undefined8 *)*puVar7;
        DAT_1008c2fa8 = (long *)*DAT_1008c2fa8;
      }
      FUN_1001ad344(DAT_1008c2fb0,puVar3);
      _DAT_1008c2fb8 = _DAT_1008c2fb8 + 1;
      uVar8 = local_50;
LAB_1005b7e6e:
      *(undefined4 *)(puVar5 + 5) = 1;
      puVar5[6] = uVar8;
LAB_1005b7e7a:
      iVar2 = 0;
    }
  }
  else {
    puVar6 = &DAT_1008c2fb0;
    puVar3 = DAT_1008c2fb0;
    do {
      if ((char *)puVar3[4] >= param_1) {
        puVar6 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < param_1];
    } while (puVar3 != (undefined8 *)0x0);
    if (((undefined8 **)puVar6 == &DAT_1008c2fb0) || (param_1 < (char *)puVar6[4]))
    goto LAB_1005b7d43;
    iVar2 = *(int *)(puVar6 + 5);
    if (iVar2 != 0) {
LAB_1005b7dfe:
      *(int *)(puVar6 + 5) = iVar2 + 1;
      goto LAB_1005b7e7a;
    }
    dVar9 = (double)FUN_1001ebd46();
    if (dVar9 < (double)puVar6[6] + DAT_10070d3a0) {
      iVar2 = *(int *)(puVar6 + 5);
      goto LAB_1005b7dfe;
    }
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,2);
    if (cVar1 != '\0') {
      uVar8 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(&local_58,uVar8);
      local_48 = 0x8420202;
      local_44 = local_58;
      local_3c = 0x800;
      local_3a = param_1;
      __os_log_debug_impl(0x100000000,PTR___os_log_default_10082cb88,2,
                          "MobileDevice session for device %{public}@ (%p) timed out, disconnecting and reconnecting"
                          ,&local_48,0x16);
      FUN_1001ab006(&local_58);
    }
    FUN_1005b7fce(param_1);
    iVar2 = FUN_1005b81c3(param_1);
    if (iVar2 == 0) {
      *(int *)(puVar6 + 5) = *(int *)(puVar6 + 5) + 1;
      uVar8 = FUN_1001ebd46();
      puVar6[6] = uVar8;
      goto LAB_1005b7e7a;
    }
    FUN_1005c8650(puVar6);
    operator_delete(puVar6);
    FUN_10017060f(param_1);
  }
  FUN_1001e9eb9(&DAT_1008c2fc8);
LAB_1005b7e89:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

