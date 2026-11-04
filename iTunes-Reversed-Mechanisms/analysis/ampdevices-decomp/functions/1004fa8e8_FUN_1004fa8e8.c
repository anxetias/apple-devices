// name: FUN_1004fa8e8
// address: 1004fa8e8

void FUN_1004fa8e8(long param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 in_register_00000004;
  ulong local_28;
  
  if (*(int *)(param_1 + 0x6b08) != 0) {
    local_28 = CONCAT44(in_register_00000004,in_EAX);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_28 = local_28 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar1,1,"sync> aborting setup fiber",&local_28,2);
    }
    *(undefined1 *)(param_1 + 0x6ad2) = 1;
    if ((param_2 != '\0') &&
       (iVar3 = FUN_1001b19b0(),
       *(int *)(param_1 + 0x6b08) != 0 && iVar3 != *(int *)(param_1 + 0x6b08))) {
      do {
        FUN_1004e32ed();
      } while (*(int *)(param_1 + 0x6b08) != 0);
    }
  }
  return;
}

