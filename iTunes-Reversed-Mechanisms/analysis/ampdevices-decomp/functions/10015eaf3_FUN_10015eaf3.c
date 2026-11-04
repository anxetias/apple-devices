// name: FUN_10015eaf3
// address: 10015eaf3

undefined8 FUN_10015eaf3(int *param_1,uint param_2,uint *param_3,int *param_4,uint *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61756463)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066dcbf(uVar3);
    }
    FUN_1001782e9(0,0);
    return 0xffffffe4;
  }
  if ((*(long *)(param_1 + 0x16) == 0) ||
     (iVar2 = _AudioConverterGetProperty(*(long *)(param_1 + 0x16),0x636f6273), iVar2 != 0)) {
    uVar4 = param_2 / (uint)param_1[8];
    iVar2 = uVar4 * param_1[8];
  }
  else {
    uVar4 = param_2 / (uint)param_1[8];
    iVar2 = uVar4 * param_1[8];
    if (param_2 != 0) goto LAB_10015eb5f;
  }
  param_2 = param_1[0x12] * uVar4;
LAB_10015eb5f:
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar4;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_2;
  }
  return 0;
}

