// name: FUN_1005404f2
// address: 1005404f2

long FUN_1005404f2(long *param_1,uint param_2,char param_3,undefined1 param_4,long *param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_40;
  int local_34;
  
  local_34 = 0;
  FUN_1001c62d9(&local_40,8);
  if (param_2 == 0) {
    if (param_3 == '\0') {
      lVar2 = param_1[0xa3];
      if (lVar2 == 0) {
        lVar2 = param_1[0xa4];
        if (lVar2 == 0) goto LAB_1005405e2;
        goto LAB_1005405ce;
      }
    }
    else {
      lVar2 = param_1[0xa4];
      if (lVar2 != 0) {
LAB_1005405ce:
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
        if (param_5 == (long *)0x0) {
          return lVar2;
        }
        lVar3 = param_1[0xa6];
        goto LAB_1005405dd;
      }
      lVar2 = param_1[0xa3];
      if (lVar2 == 0) {
LAB_1005405e2:
        if ((char)param_1[0xa2] != '\0') {
          return 0;
        }
        cVar1 = *(char *)((long)param_1 + 0x511);
joined_r0x00010054053f:
        if (cVar1 != '\0') {
          return 0;
        }
        lVar2 = (**(code **)(*param_1 + 0x198))
                          (param_1,param_2 & 0xff,param_3,param_4,&local_40,&local_34);
        if (param_5 == (long *)0x0 || lVar2 == 0) {
          if (lVar2 == 0) {
            *(undefined1 *)((long)param_1 + 0x511) = 1;
            return 0;
          }
        }
        else {
          *param_5 = local_40;
        }
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
        if (local_34 == 0x69746d74) {
          param_1[0xa3] = lVar2;
          param_1[0xa5] = local_40;
          *(undefined1 *)(param_1 + 0xa2) = 1;
          return lVar2;
        }
        param_1[0xa4] = lVar2;
        param_1[0xa6] = local_40;
        *(undefined1 *)((long)param_1 + 0x511) = 1;
        return lVar2;
      }
    }
  }
  else {
    lVar2 = param_1[0xa3];
    if (lVar2 == 0) {
      cVar1 = (char)param_1[0xa2];
      goto joined_r0x00010054053f;
    }
  }
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  if (param_5 == (long *)0x0) {
    return lVar2;
  }
  lVar3 = param_1[0xa5];
LAB_1005405dd:
  *param_5 = lVar3;
  return lVar2;
}

