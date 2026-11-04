// name: FUN_1005ba740
// address: 1005ba740

long FUN_1005ba740(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  int local_6c;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar9 = &local_6c;
  if (param_5 != (int *)0x0) {
    piVar9 = param_5;
  }
  local_68 = param_2;
  FUN_1001e9de0(&DAT_1008c2fc8);
  if (DAT_1008c2fb0 == (undefined8 *)0x0) {
LAB_1005ba7c1:
    iVar3 = _AMDeviceConnect(param_1);
    *piVar9 = iVar3;
    local_60 = param_4;
    if ((iVar3 != -0x17ffffd8) && ((iVar3 != -0x80 && (iVar3 != 0)))) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      iVar3 = *piVar9;
    }
    lVar6 = 0;
    if (iVar3 != 0) goto LAB_1005ba891;
    bVar1 = false;
    param_4 = local_60;
  }
  else {
    puVar4 = &DAT_1008c2fb0;
    puVar8 = DAT_1008c2fb0;
    do {
      if ((ulong)puVar8[4] >= param_1) {
        puVar4 = puVar8;
      }
      puVar8 = (undefined8 *)puVar8[(ulong)puVar8[4] < param_1];
    } while (puVar8 != (undefined8 *)0x0);
    if (((undefined8 **)puVar4 == &DAT_1008c2fb0) || (bVar1 = true, param_1 < (ulong)puVar4[4]))
    goto LAB_1005ba7c1;
  }
  lVar6 = _AMDeviceCopyValueWithError(param_1,local_68,param_3,piVar9);
  if ((param_4 != 0 && lVar6 != 0) && (lVar7 = _CFGetTypeID(lVar6), lVar7 != param_4)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "CFGetTypeID(cfValue) == typeID";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    _CFRelease(lVar6);
    lVar6 = 0;
  }
  if (!bVar1) {
    _AMDeviceDisconnect(param_1);
  }
LAB_1005ba891:
  FUN_1001e9eb9(&DAT_1008c2fc8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
}

