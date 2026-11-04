// name: FUN_10015f247
// address: 10015f247

int FUN_10015f247(int *param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48 [2];
  int local_40;
  uint local_3c;
  undefined8 local_38;
  uint local_2c;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61756463)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066e05d(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x1c;
  }
  else if ((*(long *)(param_1 + 0x16) == 0) || (param_1[0x18] == 2)) {
    *param_3 = 0;
    iVar2 = 0;
  }
  else {
    local_48[0] = 1;
    local_40 = param_1[0x13];
    local_3c = *param_3;
    *(undefined1 *)((long)param_1 + 0x7a) = 1;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_1 + 0x20);
    local_2c = *param_3 / (uint)param_1[0x12];
    local_38 = param_2;
    iVar2 = _AudioConverterFillComplexBuffer
                      (*(long *)(param_1 + 0x16),FUN_10015ebd4,param_1,&local_2c,local_48,0);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066dff1(iVar2,uVar3);
      }
    }
    *param_3 = param_1[0x12] * local_2c;
  }
  return iVar2;
}

