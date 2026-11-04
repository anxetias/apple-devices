// name: FUN_100489e7b
// address: 100489e7b

void FUN_100489e7b(long param_1)

{
  int iVar1;
  char cVar2;
  uint in_EAX;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  cVar2 = FUN_100489d0a();
  if ((cVar2 != '\0') && (*(short *)(param_1 + 0x10) != 10)) {
    iVar1 = *(int *)(param_1 + 0x388);
    FUN_10048492e(*(undefined8 *)(param_1 + 0x78),FUN_100490147,(long)&uStack_28 + 4);
    *(int *)(param_1 + 0x388) = uStack_28._4_4_;
    if (iVar1 != uStack_28._4_4_) {
      FUN_1001c6987(param_1 + 200,0x63707563,param_1,0,0);
    }
  }
  return;
}

