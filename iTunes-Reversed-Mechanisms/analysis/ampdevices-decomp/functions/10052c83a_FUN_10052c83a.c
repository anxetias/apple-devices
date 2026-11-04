// name: FUN_10052c83a
// address: 10052c83a

int FUN_10052c83a(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x188))();
  if ((cVar1 == '\0') || ((char)param_1[0xa0] != '\x01')) {
    if (param_1[0xb4] == 0) {
      return -0x26;
    }
    if ((int)param_1[0xb5] != 0) {
      return (int)param_1[0xb5];
    }
    if ((char)param_1[0xa0] != '\x01') {
      lVar2 = (**(code **)(*param_1 + 0x70))(param_1);
      lVar3 = lVar2 - param_2;
      if (lVar2 < param_2) {
        return -0x32;
      }
      goto LAB_10052c893;
    }
  }
  lVar3 = 0;
  if (param_2 <= param_1[0xa1]) {
    lVar3 = param_1[0xa1] - param_2;
  }
LAB_10052c893:
  *param_3 = lVar3;
  return 0;
}

