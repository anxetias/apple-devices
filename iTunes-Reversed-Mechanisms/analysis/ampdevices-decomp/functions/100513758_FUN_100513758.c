// name: FUN_100513758
// address: 100513758

void FUN_100513758(long param_1,char *param_2)

{
  double dVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x151e5) != *param_2) {
    *(char *)(param_1 + 0x151e5) = *param_2;
    uVar2 = FUN_1001c156e();
    FUN_1001c6987(uVar2,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
  }
  dVar1 = *(double *)(param_2 + 8);
  if ((*(double *)(param_1 + 0x151f0) == dVar1) &&
     (!NAN(*(double *)(param_1 + 0x151f0)) && !NAN(dVar1))) {
    return;
  }
  *(double *)(param_1 + 0x151f0) = dVar1;
  uVar2 = FUN_1001c156e();
  FUN_1001c6987(uVar2,0x69706269,*(undefined4 *)(param_1 + 0x28),0,0);
  return;
}

