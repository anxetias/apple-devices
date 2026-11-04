// name: FUN_100191319
// address: 100191319

void FUN_100191319(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if ((param_4 & 1) == 0) {
    uVar1 = 0;
    uVar2 = 0;
    if (*(char *)(param_1 + 0x4dc) == '\0') goto LAB_100191374;
  }
  else {
    if (*(char *)(param_1 + 0x4dc) != '\0') goto LAB_100191374;
    uVar2 = 1;
    uVar1 = 1;
  }
  _fcntl(*(int *)(param_1 + 0x4d8),0x30,uVar1);
  *(undefined1 *)(param_1 + 0x4dc) = uVar2;
LAB_100191374:
  uVar1 = _read(*(undefined4 *)(param_1 + 0x4d8),param_2,param_3);
  FUN_100191db7(param_3,uVar1,param_5);
  return;
}

