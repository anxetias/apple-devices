// name: FUN_100191615
// address: 100191615

undefined8
FUN_100191615(long param_1,long param_2,void *param_3,size_t param_4,byte param_5,ulong *param_6)

{
  ssize_t sVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  
  if ((param_5 & 1) == 0) {
    uVar3 = 0;
    uVar4 = 0;
    if (*(char *)(param_1 + 0x4dc) == '\0') goto LAB_100191681;
  }
  else {
    if (*(char *)(param_1 + 0x4dc) != '\0') goto LAB_100191681;
    uVar4 = 1;
    uVar3 = 1;
  }
  _fcntl(*(int *)(param_1 + 0x4d8),0x30,uVar3);
  *(undefined1 *)(param_1 + 0x4dc) = uVar4;
LAB_100191681:
  if (param_6 != (ulong *)0x0) {
    *param_6 = 0;
  }
  uVar3 = 0;
  pvVar5 = param_3;
  if (param_4 != 0) {
    do {
      sVar1 = _pwrite(*(int *)(param_1 + 0x4d8),pvVar5,param_4,param_2);
      if (sVar1 < 0) {
        piVar2 = ___error();
        uVar3 = FUN_1001eb020(*piVar2);
        goto LAB_1001916dd;
      }
      pvVar5 = (void *)((long)pvVar5 + sVar1);
      param_2 = param_2 + sVar1;
      param_4 = param_4 - sVar1;
    } while (param_4 != 0);
    uVar3 = 0;
  }
LAB_1001916dd:
  if (param_6 != (ulong *)0x0) {
    *param_6 = (ulong)(uint)((int)pvVar5 - (int)param_3);
  }
  return uVar3;
}

