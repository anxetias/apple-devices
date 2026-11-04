// name: FUN_10050ca68
// address: 10050ca68

/* WARNING: Removing unreachable block (ram,0x00010050ce8e) */

undefined1 FUN_10050ca68(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  uint local_3dc;
  char local_3d8 [256];
  undefined4 local_2d8;
  char *local_2d4;
  undefined4 local_2c8;
  char *local_2c4;
  undefined2 local_2bc;
  char *local_2ba;
  char local_2a4;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_2c8 = 0x8220202;
      local_2c4 = "Assertion failure";
      local_2bc = 0x822;
      local_2ba = "userInfo->ownedSeedRef == 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_2c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  _snprintf(local_3d8,0x100,"iTunes:iPod:%llX",*(undefined8 *)(param_1 + 8));
  cVar2 = FUN_10018ea7c();
  if (cVar2 == '\0') {
LAB_10050cdaf:
    uVar9 = 1;
    goto LAB_10050cdb2;
  }
  cVar2 = FUN_1001ebbad();
  if (cVar2 == '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_2c8 = 0x8220102;
      local_2c4 = local_3d8;
      __os_log_impl(0x100000000,uVar5,1,"not active user; ignoring device %{public}s",&local_2c8,0xc
                   );
    }
    uVar9 = 0;
    goto LAB_10050cdb2;
  }
  iVar3 = FUN_1001c4a66(local_3d8,0);
  uVar9 = 1;
  if (iVar3 != 0) goto LAB_10050cdb2;
  iVar3 = FUN_1001c4a70(0,&local_3dc);
  uVar9 = 1;
  if (iVar3 != 0) goto LAB_10050cdb2;
  uVar4 = _getpid();
  uVar1 = local_3dc;
  if (local_3dc < 2) {
    iVar3 = FUN_1001c4a84(0,local_3dc,uVar4);
    if (iVar3 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      goto LAB_10050cdaf;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_2c8 = 0x8220102;
      local_2c4 = local_3d8;
      __os_log_impl(0x100000000,uVar5,1,"atomic write failed; ignoring device %{public}s",&local_2c8
                    ,0xc);
    }
    goto LAB_10050ce7b;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8);
  if (uVar1 == uVar4) {
    if (cVar2 == '\0') goto LAB_10050cdb2;
    pcVar7 = "already own device %{public}s";
LAB_10050ccd5:
    local_2c8 = 0x8220102;
    local_2c4 = local_3d8;
    __os_log_impl(0x100000000,uVar5,1,pcVar7,&local_2c8,0xc);
  }
  else {
    if (cVar2 != '\0') {
      local_2c8 = 0x8220202;
      local_2bc = 0x400;
      local_2ba = (char *)CONCAT44(local_2ba._4_4_,local_3dc);
      local_2c4 = local_3d8;
      __os_log_impl(0x100000000,uVar5,1,"device %{public}s owned elsewhere by pid %d",&local_2c8,
                    0x12);
    }
    iVar3 = _kill(local_3dc,0);
    if (iVar3 == 0) {
      iVar3 = FUN_10050d2de(local_3dc,&local_2c8);
      if ((iVar3 == 0) && ((local_2a4 == '\x05' || (local_2a4 == '\0')))) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          puVar8 = &local_2d8;
          local_2d8 = 0x8220102;
          pcVar7 = "device %{public}s owned by zombie";
          local_2d4 = local_3d8;
          goto LAB_10050ce4c;
        }
        goto LAB_10050ce5f;
      }
    }
    else {
      piVar6 = ___error();
      if (*piVar6 == 3) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          puVar8 = &local_2c8;
          local_2c8 = 0x8220102;
          pcVar7 = "device %{public}s owned by dead process";
          local_2c4 = local_3d8;
LAB_10050ce4c:
          __os_log_impl(0x100000000,uVar5,1,pcVar7,puVar8,0xc);
        }
LAB_10050ce5f:
        iVar3 = FUN_1001c4a84(0,local_3dc,uVar4);
        if (iVar3 == 0) {
          *(undefined8 *)(param_1 + 0x20) = 0;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 == '\0') goto LAB_10050cdb2;
          pcVar7 = "taking ownership of device %{public}s";
          goto LAB_10050ccd5;
        }
      }
    }
LAB_10050ce7b:
    uVar9 = 0;
  }
LAB_10050cdb2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

