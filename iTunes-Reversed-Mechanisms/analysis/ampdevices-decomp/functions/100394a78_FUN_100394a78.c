// name: FUN_100394a78
// address: 100394a78

void FUN_100394a78(long param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 in_EAX;
  int iVar3;
  int iVar4;
  undefined4 in_register_00000004;
  ulong local_28;
  
  if (*(int *)(param_1 + 0x168c8) != 0) {
    local_28 = CONCAT44(in_register_00000004,in_EAX);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_28 = local_28 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar1,1,"airtraffic> aborting photo asset convert fiber",&local_28,2
                   );
    }
    *(undefined1 *)(param_1 + 0x168cc) = 1;
    if (param_2 != '\0') {
      FUN_1004e17a4(param_1);
      while (*(int *)(param_1 + 0x168c8) != 0) {
        FUN_1001b0d8d(0);
        FUN_1001ee7ac();
        iVar3 = FUN_1001b19b0();
        iVar4 = FUN_1001b1a0f();
        if (iVar3 == iVar4) {
          FUN_100178bf5(4,0);
        }
      }
      FUN_1004e1e68(param_1);
    }
  }
  return;
}

