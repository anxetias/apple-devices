// name: FUN_1003c2c14
// address: 1003c2c14

undefined8 FUN_1003c2c14(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x454) == '\x01') {
    _memcpy(param_1 + 4,(void *)(param_2 + 0x458),0x460);
  }
  iVar1 = *(int *)(param_2 + 0x8c0);
  *(int *)(param_1 + 0x90) = iVar1;
  iVar2 = *(int *)(param_2 + 0x8c4);
  *(int *)((long)param_1 + 0x484) = iVar2;
  if (iVar2 == 0 || iVar1 == 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1,param_2);
  }
  if (*(long *)(param_2 + 8) == 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
      *(undefined8 *)((long)param_1 + 0x4a4) = *(undefined8 *)((long)param_1 + 0x3c);
      *(undefined8 *)((long)param_1 + 0x4ac) = *(undefined8 *)((long)param_1 + 0x44);
      param_1[0x93] = param_1[6];
      param_1[0x94] = param_1[7];
      param_1[0x91] = param_1[4];
      param_1[0x92] = param_1[5];
    }
    else {
      FUN_10031bd9c(*(long *)(param_2 + 0x10),param_1 + 0x91);
    }
  }
  else {
    FUN_100490f45(*(long *)(param_2 + 8),param_1 + 0x91);
  }
  return 0;
}

