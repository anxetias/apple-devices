// name: FUN_100603fea
// address: 100603fea

int FUN_100603fea(long param_1,char *param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 local_98 [16];
  undefined **local_88;
  code *local_80;
  undefined4 *local_78;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = 0;
  FUN_1004e7aad(param_1,0);
  if (*(int *)(param_1 + 0x6b0c) != 0) goto LAB_100604022;
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 == (undefined4 *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "params != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x6c;
    goto LAB_100604022;
  }
  uVar5 = FUN_1004e7c76(param_1);
  *puVar4 = *(undefined4 *)(param_1 + 0x28);
  pcVar8 = (char *)(uVar5 & (ulong)param_2);
  *(char **)(puVar4 + 2) = pcVar8;
  *(undefined1 *)(puVar4 + 4) = 0;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar7 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    FUN_1006043c1(local_98,param_2);
    local_4a = (char *)FUN_1001b83ae(local_98);
    local_58 = 0x8000202;
    local_4c = 0x822;
    local_54 = param_2;
    __os_log_impl(0x100000000,uVar7,1,"sync> requested sync options = 0x%llX (%{public}s)",&local_58
                  ,0x16);
    FUN_1001b7a50(local_98);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
  }
  uVar7 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    FUN_1006043c1(local_98,pcVar8);
    local_4a = (char *)FUN_1001b83ae(local_98);
    local_58 = 0x8000202;
    local_4c = 0x822;
    local_54 = pcVar8;
    __os_log_impl(0x100000000,uVar7,1,"sync> effective sync options = 0x%llX (%{public}s)",&local_58
                  ,0x16);
    FUN_1001b7a50(local_98);
  }
  *(char **)(param_1 + 0x6b28) = pcVar8;
  if (*(long *)(param_1 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + 1;
  }
  local_88 = &PTR_FUN_100871040;
  local_80 = FUN_10060448b;
  local_78 = puVar4;
  local_68 = &local_88;
  iVar3 = FUN_1001b1a89(&local_88,"SynchronizeIPodStartFiber",param_1 + 0x6b0c,0);
  if (local_68 == &local_88) {
    lVar6 = 0x20;
LAB_100604234:
    (**(code **)((long)*local_68 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_68 != (undefined ***)0x0) goto LAB_100604234;
  }
  if (iVar3 == -0x80) {
LAB_10060426b:
    if (*(char *)(puVar4 + 4) == '\x01') {
      FUN_1004dd69c(param_1,"");
    }
    operator_delete(puVar4);
    if (*(long *)(param_1 + 0x30) != 0) {
      psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
      *psVar1 = *psVar1 + -1;
    }
    if (iVar3 != 0) {
      FUN_1004eeb56(param_1,iVar3);
      goto LAB_100604022;
    }
  }
  else {
    if (iVar3 == 0) goto LAB_100604022;
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (iVar3 != 0) goto LAB_10060426b;
  }
  iVar3 = 0;
LAB_100604022:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

