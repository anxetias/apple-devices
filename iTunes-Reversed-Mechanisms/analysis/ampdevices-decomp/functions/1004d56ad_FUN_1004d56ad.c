// name: FUN_1004d56ad
// address: 1004d56ad

int FUN_1004d56ad(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined6 uStack_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 uStack_bb;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  long local_88 [2];
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uStack_c8 = 0;
  local_d8 = (long *)0x0;
  uStack_d0 = 0;
  uStack_ca = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c0 = 0;
  local_bc = 0;
  uStack_bb = 0;
  local_b8 = 0x3ff0000000000000;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  *param_5 = 0;
  pcVar4 = (char *)0x0;
  local_68 = param_5;
  if ((param_3 != (char *)0x0) &&
     (lVar3 = FUN_10048b5ec(param_1,param_3), pcVar4 = param_3, lVar3 != 0)) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      FUN_1001b8dfc(local_78,param_2);
      local_4a = FUN_1001b83ae(local_78);
      local_58 = 0x8000202;
      local_4c = 0x822;
      local_54 = param_3;
      __os_log_impl(0x100000000,uVar5,1,
                    "sync> ignoring duplicate playlist persistent id %llu for playlist \"%{public}s\""
                    ,&local_58,0x16);
      FUN_1001b7a50(local_78);
    }
    pcVar4 = (char *)0x0;
  }
  local_bc = 0;
  local_d8 = local_88;
  uStack_d0 = SUB86(pcVar4,0);
  uStack_ca = (undefined2)((ulong)pcVar4 >> 0x30);
  local_88[0] = 0;
  local_88[1] = 0xffffffffffffffff;
  uStack_e0 = param_2;
  if ((param_4 != (char *)0x0) &&
     ((local_88[0] = FUN_10048b5ec(param_1,param_4), local_88[0] == 0 ||
      ((*(byte *)(local_88[0] + 0x298) & 2) == 0)))) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_58 = 0x8000100;
      local_54 = param_4;
      __os_log_impl(0x100000000,uVar5,1,"sync> unable to find parent playlist persistent id %llu",
                    &local_58,0xc);
    }
  }
  iVar2 = FUN_1002e2674(param_1,1,&local_e8,&local_60);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1004d47f3(local_60);
      FUN_100488970(local_60);
      if ((local_88[0] != 0) && ((*(byte *)(local_88[0] + 0x298) & 2) != 0)) {
        FUN_100585003(local_60);
      }
      *local_68 = local_60;
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

