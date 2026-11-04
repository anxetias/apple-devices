// name: FUN_10040730b
// address: 10040730b

void FUN_10040730b(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_d60 [16];
  long local_d50;
  long local_d48;
  undefined1 local_d40 [20];
  uint local_d2c;
  undefined4 local_d28;
  char *local_d24;
  undefined2 local_d1c;
  char *local_d1a;
  undefined4 local_cc8;
  undefined4 local_cc4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x2c50) == 0) goto LAB_10040765d;
  FUN_1001b7a44(local_d40);
  iVar4 = *(int *)(param_1 + 0x2c98);
  if (iVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_d28 = 0x8220202;
      local_d24 = "Assertion failure";
      local_d1c = 0x822;
      local_d1a = "trackData->copyFileItemKind != 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_d28,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = *(int *)(param_1 + 0x2c98);
  }
  if (iVar4 == 0x7472616b) {
    uVar3 = FUN_10052a034(*(undefined4 *)(param_1 + 0x2c9c));
LAB_1004073e0:
    uVar6 = FUN_100529cfc(uVar3,0x1f4000f,0);
    FUN_1001b81f2(local_d40,uVar6);
  }
  else {
    cVar2 = FUN_1001b8428(param_1 + 0x2c88);
    uVar3 = 1;
    if (cVar2 == '\0') goto LAB_1004073e0;
    if (*(int *)(param_1 + 0x2c98) == 0x666f746f) {
      FUN_1001c334a(&local_d28,0x8f0001);
      FUN_1001b80b2(local_d40,&local_d28);
    }
    else {
      FUN_1001c334a(&local_d28,0x8f0002);
      FUN_1001b80b2(local_d40,&local_d28);
    }
    FUN_1001b7a50(&local_d28);
  }
  if ((*(int *)(param_1 + 0x84) == 0x646f5069) && ((*(byte *)(param_1 + 0x2d1a) & 0x30) != 0)) {
    local_d50 = param_1 + 0x2c20;
    FUN_10015b1df(local_d50,*(undefined4 *)(param_1 + 0x2c50),&local_d28);
    iVar4 = FUN_100407d12(local_cc8,local_cc4);
    uVar10 = *(uint *)(param_1 + 0x2c50);
    do {
      uVar7 = uVar10;
      uVar10 = uVar7 - 1;
      if (uVar10 == 0) break;
      FUN_10015b1df(local_d50,uVar10,&local_d28);
      iVar5 = FUN_100407d12(local_cc8,local_cc4);
    } while (iVar5 == iVar4);
    uVar9 = *(uint *)(param_1 + 0x2c50);
    local_d48 = param_1;
    local_d2c = uVar7;
    uVar1 = *(uint *)(param_1 + 0x2c50) - uVar10;
    do {
      uVar7 = uVar1;
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
      if (*(uint *)(local_d48 + 0x2c28) < uVar9) break;
      FUN_10015b1df(local_d50,uVar9,&local_d28);
      iVar5 = FUN_100407d12(local_cc8,local_cc4);
      uVar1 = uVar7 + 1;
    } while (iVar5 == iVar4);
    param_1 = local_d48;
    if (uVar8 < local_d2c) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "rangeStartIndex <= rangeEndIndex";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar10 = *(int *)(param_1 + 0x2c50) - uVar10;
    if (uVar10 == 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "*copyFileIndex >= 1";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (uVar7 < uVar10) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "*copyFileIndex <= *copyFileCount";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x2c28);
    uVar10 = *(uint *)(param_1 + 0x2c50);
  }
  FUN_1001b8e86(&local_58,uVar10,1);
  FUN_1001b8e86(local_d60,uVar7,1);
  FUN_1001bc048(&local_d28,local_d40,&local_58,local_d60,param_1 + 0x2c88);
  FUN_1001b80b2(param_1 + 0x2c78,&local_d28);
  FUN_1001b7a50(&local_d28);
  FUN_1001b7a50(local_d60);
  FUN_1001b7a50(&local_58);
  *(byte *)(param_1 + 0x2be2) = *(byte *)(param_1 + 0x2be2) | 2;
  FUN_1001b7a50(local_d40);
LAB_10040765d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

