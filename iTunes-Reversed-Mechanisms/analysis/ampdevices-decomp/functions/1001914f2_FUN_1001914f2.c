// name: FUN_1001914f2
// address: 1001914f2

undefined4 FUN_1001914f2(long param_1,void *param_2,size_t param_3,byte param_4,ulong *param_5)

{
  undefined4 uVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined1 uVar6;
  int local_38;
  
  if ((param_4 & 1) == 0) {
    uVar4 = 0;
    uVar6 = 0;
    if (*(char *)(param_1 + 0x4dc) == '\0') goto LAB_10019154d;
  }
  else {
    if (*(char *)(param_1 + 0x4dc) != '\0') goto LAB_10019154d;
    uVar6 = 1;
    uVar4 = 1;
  }
  _fcntl(*(int *)(param_1 + 0x4d8),0x30,uVar4);
  *(undefined1 *)(param_1 + 0x4dc) = uVar6;
LAB_10019154d:
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  uVar1 = 0;
  pvVar5 = param_2;
  do {
    if (param_3 == 0) {
LAB_100191596:
      if (param_5 != (ulong *)0x0) {
        local_38 = (int)param_2;
        *param_5 = (ulong)(uint)((int)pvVar5 - local_38);
      }
      return uVar1;
    }
    sVar2 = _write(*(int *)(param_1 + 0x4d8),pvVar5,param_3);
    if (sVar2 < 0) {
      piVar3 = ___error();
      uVar1 = FUN_1001eb020(*piVar3);
      goto LAB_100191596;
    }
    pvVar5 = (void *)((long)pvVar5 + sVar2);
    param_3 = param_3 - sVar2;
  } while( true );
}

