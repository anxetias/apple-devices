// name: FUN_10015a028
// address: 10015a028

void FUN_10015a028(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  iVar2 = FUN_1001e9c3e();
  *(int *)(param_1 + 9) = iVar2;
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066a8e7(iVar2,uVar3);
    }
  }
  return;
}

