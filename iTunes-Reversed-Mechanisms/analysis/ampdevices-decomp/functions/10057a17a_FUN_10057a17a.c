// name: FUN_10057a17a
// address: 10057a17a

void FUN_10057a17a(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  ushort uStack_3a;
  undefined2 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 8);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar2 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_48 = 0x8420202;
    uStack_44 = (undefined4)**(undefined8 **)(param_1 + 0x10);
    uStack_40 = (undefined4)((ulong)**(undefined8 **)(param_1 + 0x10) >> 0x20);
    uStack_3c = 0x400;
    uStack_3a = (ushort)**(byte **)(param_1 + 0x18);
    uStack_38 = 0;
    __os_log_impl(0x100000000,uVar2,1,"skynet> URL: %{public}@, stripLegacyVersionXML: %{BOOL}d",
                  &local_48,0x12);
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  uVar4 = FUN_100228138(*(undefined4 *)(lVar1 + 0x18),**(undefined8 **)(param_1 + 0x10),&local_48,
                        *(undefined8 *)(param_1 + 0x28));
  **(undefined4 **)(param_1 + 0x20) = uVar4;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

