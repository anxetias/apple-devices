// name: FUN_10022460f
// address: 10022460f

undefined8 FUN_10022460f(int param_1,int *param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 local_d48;
  undefined4 uStack_d44;
  undefined4 local_d40;
  undefined2 uStack_d3c;
  undefined2 uStack_d3a;
  undefined6 local_d38;
  undefined2 uStack_d32;
  long local_d30;
  undefined1 local_d28 [16];
  undefined1 local_d18 [16];
  undefined1 local_d08 [1056];
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  undefined1 local_8c8 [1056];
  undefined1 local_4a8 [1056];
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (1 < param_1 - 1U) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_d48 = 0x8220202;
      uStack_d44 = 0x7a0a90;
      local_d40 = 1;
      uStack_d3c = 0x822;
      uStack_d3a = 0x1361;
      local_d38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_d48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
    goto LAB_100224a27;
  }
  if ((((param_2[6] == 0) && (param_2[8] == 0)) && (param_2[9] == 0)) &&
     (uVar4 = 0xffffffce, (char)param_2[10] == '\0')) goto LAB_100224a27;
  iVar3 = *param_2;
  uVar4 = 0xffffffce;
  if (iVar3 < 0x69506164) {
    if (iVar3 < 0x57617463) {
      if (iVar3 == 0x48506f64) {
        uVar6 = 0x1d;
        uVar7 = 0x1e;
      }
      else {
        if (iVar3 != 0x4d616320) goto LAB_100224a27;
        uVar6 = 0x1f;
        uVar7 = 0x20;
      }
    }
    else if (iVar3 == 0x57617463) {
      uVar6 = 0x1b;
      uVar7 = 0x1c;
    }
    else {
      if (iVar3 != 0x69427269) goto LAB_100224a27;
      uVar6 = 0x21;
      uVar7 = 0x22;
    }
  }
  else if (iVar3 < 0x69506f64) {
    if (iVar3 == 0x69506164) {
      uVar6 = 0x17;
      uVar7 = 0x18;
    }
    else {
      if (iVar3 != 0x6950686e) goto LAB_100224a27;
      uVar6 = 0x15;
      uVar7 = 0x16;
    }
  }
  else {
    uVar6 = 0x13;
    uVar7 = 0x14;
    if ((iVar3 != 0x69506f64) && (iVar3 != 0x69506f74)) {
      if (iVar3 != 0x69545620) goto LAB_100224a27;
      uVar6 = 0x19;
      uVar7 = 0x1a;
    }
  }
  local_d48 = SUB84(param_2,0);
  uStack_d44 = (undefined4)((ulong)param_2 >> 0x20);
  local_d40 = (undefined4)param_3;
  uStack_d3c = (undefined2)((ulong)param_3 >> 0x20);
  uStack_d3a = (undefined2)((ulong)param_3 >> 0x30);
  local_d30 = 0;
  FUN_10024f406(local_d28);
  FUN_10024f406(local_8e8);
  piVar1 = (int *)CONCAT44(uStack_d44,local_d48);
  if (*piVar1 == 0x69506f64) {
    pcVar5 = FUN_10022130a;
  }
  else if (param_1 == 1) {
    pcVar5 = FUN_1002216f4;
  }
  else {
    pcVar5 = FUN_100221ce3;
  }
  local_d38 = SUB86(pcVar5,0);
  uStack_d32 = 0;
  bVar8 = true;
  if ((piVar1[8] == 0) && (piVar1[9] == 0)) {
    bVar8 = (char)piVar1[10] != '\0';
  }
  if ((param_1 == 2) && (bVar8)) {
    local_d30 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (local_d30 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x822;
        local_7a = "purchasedBuildVersionsArray != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      FUN_1001782e9(0,0);
      if (local_d30 == 0) goto LAB_10022492a;
    }
    FUN_10024f22a(&local_88);
    FUN_10024d72a(0,2,CONCAT44(uStack_d44,local_d48),0,1,0,&local_88,0,0,local_d30,0,0,0,0);
    FUN_10024f3ba(&local_88);
  }
LAB_10022492a:
  iVar3 = FUN_1003870d4(uVar7,2,local_4a8);
  if (iVar3 == 0) {
    FUN_10017fdd8(local_4a8,1,1,FUN_100224afe,&local_d48);
  }
  iVar3 = FUN_1003870d4(uVar6,2,local_4a8);
  if (iVar3 == 0) {
    FUN_10017fdd8(local_4a8,1,1,FUN_100224afe,&local_d48);
  }
  if (param_4 != 0) {
    FUN_100249f2c(param_4,local_d28);
    FUN_100249f2c(param_4 + 0x10,local_d18);
    _memcpy((void *)(param_4 + 0x20),local_d08,0x420);
  }
  if (param_5 != 0) {
    FUN_100249f2c(param_5,local_8e8);
    FUN_100249f2c(param_5 + 0x10,local_8d8);
    _memcpy((void *)(param_5 + 0x20),local_8c8,0x420);
  }
  FUN_100222876(&local_d48);
  uVar4 = 0;
LAB_100224a27:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

