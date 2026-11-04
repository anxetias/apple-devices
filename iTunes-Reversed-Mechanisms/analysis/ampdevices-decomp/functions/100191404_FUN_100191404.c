// name: FUN_100191404
// address: 100191404

void FUN_100191404(long param_1,off_t param_2,void *param_3,size_t param_4,byte param_5,
                  undefined8 param_6)

{
  ssize_t sVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  if ((param_5 & 1) == 0) {
    uVar2 = 0;
    uVar3 = 0;
    if (*(char *)(param_1 + 0x4dc) == '\0') goto LAB_100191460;
  }
  else {
    if (*(char *)(param_1 + 0x4dc) != '\0') goto LAB_100191460;
    uVar3 = 1;
    uVar2 = 1;
  }
  _fcntl(*(int *)(param_1 + 0x4d8),0x30,uVar2);
  *(undefined1 *)(param_1 + 0x4dc) = uVar3;
LAB_100191460:
  sVar1 = _pread(*(int *)(param_1 + 0x4d8),param_3,param_4,param_2);
  FUN_100191db7(param_4,sVar1,param_6);
  return;
}

