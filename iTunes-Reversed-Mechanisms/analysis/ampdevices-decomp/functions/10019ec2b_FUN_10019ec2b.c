// name: FUN_10019ec2b
// address: 10019ec2b

undefined1 FUN_10019ec2b(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    FUN_10019bd70();
    *(undefined4 *)(param_1 + 0x48) = 0xffffdc8e;
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar3 = FUN_1001705fc(param_2);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    iVar2 = FUN_1001ed4fd(*(undefined8 *)(param_1 + 8),FUN_10019d30b,param_1,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        return 1;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10069b5ea(iVar2,uVar3);
      }
    }
  }
  return 0;
}

