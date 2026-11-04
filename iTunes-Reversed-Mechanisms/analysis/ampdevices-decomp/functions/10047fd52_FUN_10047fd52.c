// name: FUN_10047fd52
// address: 10047fd52

uint FUN_10047fd52(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1004800f1;
  }
  uVar5 = *(uint *)(param_1 + 0xc2);
  if (*(char *)(param_1 + 200) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10031f884(*(char *)(param_1 + 200));
  }
  lVar7 = FUN_1005974ad(param_1,0);
  if ((lVar7 == 0) && (lVar7 = *(long *)(param_1 + 0x58), lVar7 == 0)) goto LAB_1004800f1;
  if (*(char *)(lVar7 + 0x45) != '\0') {
    if (*(char *)(lVar7 + 0x45) == '\x02') {
      uVar2 = 1;
    }
    goto LAB_1004800f1;
  }
  if (((uVar5 >> 0x12 & 1) == 0) || ((uVar2 & 0xce2) != 0)) goto LAB_10047ff1d;
  FUN_10047dc87(param_1,&local_238);
  FUN_1001b8dfc(local_248,&local_238);
  cVar1 = FUN_1001b8428(local_248);
  if (cVar1 == '\0') {
LAB_10047ff0b:
    FUN_1001b7a50(local_248);
    uVar2 = 0x40;
  }
  else {
    FUN_10047e782(param_1,&local_238);
    FUN_1001b8dfc(local_258,&local_238);
    cVar1 = FUN_1001b8428(local_258);
    if (cVar1 == '\0') {
      FUN_1001b7a50(local_258);
      goto LAB_10047ff0b;
    }
    iVar3 = *(int *)(*(long *)(param_1 + 0x78) + 4);
    FUN_1001b7a50(local_258);
    FUN_1001b7a50(local_248);
    uVar2 = 0x40;
    if ((iVar3 == 0) && (uVar2 = 2, *(int *)(*(long *)(param_1 + 0x78) + 0x24) == 0)) {
      cVar1 = *(char *)(param_1 + 0xcd);
      if (cVar1 == '\x04') {
        uVar2 = 6;
      }
      else if (cVar1 == '\x02') {
        if (*(long *)(*(long *)(lVar7 + 0x10) + 0x38) == 0) {
          cVar1 = FUN_1004802ae(param_1);
          uVar2 = 0x400;
          goto LAB_100480138;
        }
      }
      else if (cVar1 == '\x01') {
        cVar1 = FUN_1004802ae(param_1);
        uVar2 = 0x20;
LAB_100480138:
        if (cVar1 != '\0') {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 2;
        if (*(int *)(*(long *)(param_1 + 0x10) + 0x84) == 0x646f5069) {
          uVar2 = 0x400;
        }
      }
    }
  }
LAB_10047ff1d:
  iVar3 = FUN_1002b1325(lVar7);
  if (iVar3 == 0x49544520) {
    uVar4 = uVar2 | 0x10000;
    uVar5 = uVar2 & 0xfffffbff;
    uVar2 = 0x10002;
    if (uVar5 != 0) {
      uVar2 = uVar4;
    }
  }
  else if (iVar3 == 0x49544c50) {
    uVar2 = uVar2 + (uVar2 == 0) | 0x10000;
  }
  else if (uVar2 == 0) {
    uVar5 = 0;
    uVar2 = 0;
    if (iVar3 < 0x49504120) {
      if (iVar3 < 0x45505542) {
        if ((iVar3 == 0x41412020) || (uVar2 = uVar5, iVar3 == 0x41415820)) goto LAB_10048004c;
      }
      else if ((iVar3 == 0x45505542) || (iVar3 == 0x49424f4f)) {
        uVar2 = 0x400000;
      }
    }
    else if (iVar3 < 0x4d344220) {
      if (iVar3 == 0x49504120) {
        uVar2 = 0x20000;
      }
      else {
        uVar2 = uVar5;
        if (iVar3 == 0x49504720) {
          uVar2 = 0x1000;
        }
      }
    }
    else if (iVar3 == 0x4d344220) {
LAB_10048004c:
      uVar2 = 8;
    }
    else if (iVar3 == 0x4d345220) {
      uVar2 = 0x4000;
    }
    else {
      uVar2 = uVar5;
      if ((iVar3 == 0x50444620) &&
         (uVar2 = 0x10, *(int *)(*(long *)(param_1 + 0x10) + 0x84) == 0x646f5069)) {
        uVar2 = 0x800000;
      }
    }
    if (*(int *)(lVar7 + 0x3c) == 0x53485244) {
      if (iVar3 < 0x4d4f5650) {
        if ((iVar3 == 0x4d345620) || (iVar3 == 0x4d4f5620)) {
LAB_1004800bd:
          uVar2 = uVar2 | 2;
        }
      }
      else if ((iVar3 == 0x4d503420) || (iVar3 == 0x4d4f5650)) goto LAB_1004800bd;
    }
  }
  else if ((iVar3 == 0x4d345220) && (*(char *)(param_1 + 200) == '\x01')) {
    uVar2 = 0x4000;
  }
  uVar5 = uVar2 | 4;
  if (*(char *)(param_1 + 0xcd) != '\x04') {
    uVar5 = uVar2;
  }
  if ((~uVar5 & 0x404) == 0) {
    uVar2 = uVar5 & 0xfffffbfd | 2;
  }
  else {
    uVar2 = uVar5 + (uVar5 == 0);
  }
LAB_1004800f1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

