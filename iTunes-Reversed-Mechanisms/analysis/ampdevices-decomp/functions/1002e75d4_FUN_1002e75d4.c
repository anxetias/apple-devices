// name: FUN_1002e75d4
// address: 1002e75d4

void FUN_1002e75d4(long param_1)

{
  int iVar1;
  long lVar2;
  long local_28;
  
  local_28 = param_1;
  lVar2 = FUN_100306d2e();
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x88);
    FUN_100314161(lVar2);
    if ((iVar1 == 0) && (*(long *)(param_1 + 0x90) != 0)) {
      FUN_1002e4155(lVar2,param_1 + 0x90,*(undefined8 *)(param_1 + 0x98));
      FUN_1002e5429(lVar2,5,1);
    }
    FUN_100314411(lVar2);
  }
  FUN_1002e7582(&local_28);
  return;
}

