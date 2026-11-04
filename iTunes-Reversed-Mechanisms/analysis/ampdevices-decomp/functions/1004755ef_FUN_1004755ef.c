// name: FUN_1004755ef
// address: 1004755ef

void FUN_1004755ef(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined2 local_56;
  undefined2 local_54;
  undefined6 uStack_52;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (undefined8 *)0x0) || (lVar2 = param_1[2], lVar2 == 0)) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      local_60 = 1;
      local_5e = 0;
      uStack_5c = 0x822;
      uStack_5a = 0x7c4d17;
      local_56 = 1;
      local_54 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100475876;
  }
  if (param_2 == 0) {
    param_2 = param_1[0xb];
  }
  uVar3 = *(ulong *)(lVar2 + 0x1bb0);
  *(ulong *)(lVar2 + 0x1bb0) = uVar3 | 0x10;
  if (((((uint)uVar3 >> 0x16 & 1) != 0) && ((*(byte *)((long)param_1 + 0xc3) & 2) == 0)) &&
     (*(int *)(lVar2 + 0x94) == 0)) {
    FUN_10053979d(local_80,param_3,0);
    if (DAT_1008c66e8 != -1) {
      _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
    }
    uVar6 = DAT_1008c66e0;
    cVar5 = _os_log_type_enabled(DAT_1008c66e0,0x10);
    if (cVar5 != '\0') {
      local_70 = *param_1;
      local_40 = FUN_1001b83ae(local_80);
      lVar1 = lVar2 + 0x84;
      local_68 = 0x4120502;
      uStack_64 = 4;
      local_60 = 0x822;
      local_5e = (undefined2)lVar1;
      uStack_5c = (undefined2)((ulong)lVar1 >> 0x10);
      uStack_5a = (undefined4)((ulong)lVar1 >> 0x20);
      local_56 = 0x800;
      local_54 = (undefined2)local_70;
      uStack_52 = (undefined6)((ulong)local_70 >> 0x10);
      local_4c = 0x820;
      local_4a = "";
      local_42 = 0x822;
      __os_log_impl(0x100000000,uVar6,0x10,
                    "edit> WARN \'%{public}.4s\' track modified outside of a transaction 0x%16.16llx \'%s\' %{public}s"
                    ,&local_68,0x30);
    }
    FUN_1001b7a50(local_80);
  }
  cVar5 = FUN_10053960e(param_3,&DAT_10074ada0);
  if (cVar5 == '\0') {
    FUN_100316d5b(param_1);
  }
  else {
    FUN_1002fef76(param_1);
  }
  cVar5 = FUN_100539333(param_3,&DAT_10074add0);
  if (cVar5 != '\0') {
    if (*(long *)(param_1[0x10] + 0x18) != 0) {
      *(undefined8 *)(param_1[0x10] + 0x18) = 0;
    }
    FUN_100475919(param_1,PTR_cf_upp_key_100844b28,1);
  }
  if (*(long *)(lVar2 + 0x2738) != 0) {
    cVar5 = FUN_10053916d(param_3,0x6f);
    if (cVar5 != '\0') {
      pvVar4 = *(void **)(lVar2 + 0x2738);
      if (pvVar4 != (void *)0x0) {
        FUN_1002a41f4(pvVar4,*(undefined8 *)((long)pvVar4 + 8));
        operator_delete(pvVar4);
      }
      *(undefined8 *)(lVar2 + 0x2738) = 0;
    }
  }
  if ((param_2 != 0) && (*(long *)(*(long *)(param_2 + 0x10) + 0x98) != 0)) {
    cVar5 = FUN_10053916d(param_3,10);
    if (cVar5 == '\0') {
      cVar5 = FUN_10053916d(param_3,0xc);
      if (cVar5 == '\0') goto LAB_100475842;
    }
    FUN_1002bd6df(param_2);
  }
LAB_100475842:
  FUN_1003a2154(param_1,param_3);
  FUN_1005e42f6(param_1,param_3);
  FUN_100473c15(param_1);
  FUN_100538b99(param_1 + 0x38,param_3);
  *(byte *)((long)param_1 + 0xc6) = *(byte *)((long)param_1 + 0xc6) | 8;
LAB_100475876:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

