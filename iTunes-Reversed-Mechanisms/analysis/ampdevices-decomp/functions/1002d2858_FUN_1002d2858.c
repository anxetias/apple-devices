// name: FUN_1002d2858
// address: 1002d2858

bool FUN_1002d2858(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  bool bVar11;
  char local_6c8 [4];
  char *local_6c4;
  undefined2 local_6bc;
  int local_6ba;
  undefined4 local_4c8;
  char *local_4c4;
  undefined2 local_4bc;
  char *local_4ba;
  char local_58 [4];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      local_4c8 = 0x8220202;
      local_4c4 = "Assertion failure";
      local_4bc = 0x822;
      local_4ba = "ITIPodRefIsValid(iPod)";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
    }
    bVar11 = false;
    FUN_1001782e9(0,0);
    goto LAB_1002d29eb;
  }
  bVar11 = true;
  if ((((*(char *)(param_1 + 0x9db) == '\0') || (*(char *)(param_1 + 0x3c) != '\0')) ||
      (*(char *)(param_1 + 0x9de) != '\0')) ||
     ((*(char *)(param_1 + 0x36) == '\0' ||
      ((uVar2 = *(int *)(param_1 + 0x934) - 0x82, uVar2 < 4 && (uVar2 != 1)))))) goto LAB_1002d29eb;
  iVar3 = FUN_10017e137(param_1 + 0x48,&local_4c8,0);
  if (iVar3 == -0x80) {
LAB_1002d2ad6:
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
LAB_1002d2ade:
    lVar8 = 0;
    bVar11 = false;
  }
  else {
    if (iVar3 != 0) {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        pcVar10 = local_6c8;
        builtin_strncpy(local_6c8,"\x02\x02\"\b",4);
        local_6c4 = "Assertion failure";
        local_6bc = 0x400;
        local_6ba = iVar3;
LAB_1002d2bcd:
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",pcVar10,0x12);
      }
      goto LAB_1002d2ad6;
    }
    iVar3 = FUN_10017de88(&local_4c8,local_6c8,0x200);
    uVar9 = DAT_1008c4d90;
    if (iVar3 == -0x80) goto LAB_1002d2ad6;
    if (iVar3 != 0) {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        pcVar10 = local_58;
        builtin_strncpy(local_58,"\x02\x02\"\b",4);
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1002d2bcd;
      }
      goto LAB_1002d2ad6;
    }
    sVar4 = _strlen(local_6c8);
    lVar5 = FUN_100174592(uVar9,local_6c8,sVar4,1);
    if (lVar5 == 0) {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_58,"\x02\x02\"\b",4);
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "pathURL != __null";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1002d2ad6;
    }
    lVar6 = _DASessionCreate(DAT_1008c4d90);
    if (lVar6 == 0) {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_58,"\x02\x02\"\b",4);
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "session != __null";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar7 = 0;
      lVar6 = 0;
      goto LAB_1002d2ade;
    }
    lVar7 = _DADiskCreateFromVolumePath(DAT_1008c4d90,lVar6,lVar5);
    if (lVar7 == 0) {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_58,"\x02\x02\"\b",4);
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "disk != __null";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar7 = 0;
      goto LAB_1002d2ade;
    }
    lVar8 = _DADiskCopyDescription(lVar7);
    if (lVar8 == 0) goto LAB_1002d2ade;
    cVar1 = FUN_100167dd2(lVar8,*(undefined8 *)PTR__kDADiskDescriptionMediaWholeKey_10082e648,1);
    bVar11 = cVar1 == '\0';
  }
  FUN_10017060f(lVar8);
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar5);
LAB_1002d29eb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar11;
}

