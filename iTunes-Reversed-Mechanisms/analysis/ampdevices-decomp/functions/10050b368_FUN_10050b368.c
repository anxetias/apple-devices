// name: FUN_10050b368
// address: 10050b368

void FUN_10050b368(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x6abd) != '\0') {
    cVar2 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
    if (cVar2 == '\0') {
      FUN_1004e17a4(param_1);
      iVar3 = FUN_100267f64(*(undefined8 *)(param_1 + 0x66d8),FUN_10050b9b3,param_1);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x153f0) = 0;
        *(undefined4 *)(param_1 + 0x420) = 0;
        if (*(long *)(param_1 + 0x153e8) != 0) {
          FUN_1001eed65(param_1 + 0x153e8);
        }
        uVar1 = FUN_1001c156e();
        FUN_1001c6987(uVar1,0x69706263,*(undefined4 *)(param_1 + 0x28),0,0);
        FUN_1004e1e68(param_1);
        return;
      }
      *(undefined1 *)(param_1 + 0x153f0) = 1;
    }
    else if (*(char *)(param_1 + 0x153f0) != '\0') {
      *(undefined1 *)(param_1 + 0x153f0) = 0;
      uVar1 = FUN_1001c156e();
      FUN_1001c6987(uVar1,0x69706263,*(undefined4 *)(param_1 + 0x28),0,0);
      return;
    }
  }
  return;
}

