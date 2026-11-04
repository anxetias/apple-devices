// name: FUN_100247fe5
// address: 100247fe5

undefined8 FUN_100247fe5(undefined8 param_1,int param_2,uint param_3,short *param_4)

{
  long lVar1;
  int iVar2;
  
  if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
    FUN_1001b8dfc(param_1,param_4);
    return param_1;
  }
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((&DAT_100719d70)[lVar1 * 2] == param_3) {
        iVar2 = *(int *)(&UNK_100719d74 + lVar1 * 8);
        goto LAB_100248075;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x101);
  }
  if (param_2 < 0x69506164) {
    if (param_2 < 0x57617463) {
      if (param_2 == 0x48506f64) {
        iVar2 = 0x112f0041;
      }
      else {
        if (param_2 != 0x4d616320) {
LAB_100248115:
          FUN_1001b7a44(param_1);
          return param_1;
        }
        iVar2 = 0x112f0043;
      }
    }
    else if (param_2 == 0x57617463) {
      iVar2 = 0x112f0040;
    }
    else {
      if (param_2 != 0x69427269) goto LAB_100248115;
      iVar2 = 0x112f0044;
    }
  }
  else if (param_2 < 0x69506f64) {
    if (param_2 == 0x69506164) {
      iVar2 = 0x112f0035;
    }
    else {
      if (param_2 != 0x6950686e) goto LAB_100248115;
      iVar2 = 0x112f0008;
    }
  }
  else if (param_2 == 0x69545620) {
    iVar2 = 0x112f003e;
  }
  else if (param_2 == 0x69506f74) {
    iVar2 = 0x112f0007;
  }
  else {
    if (param_2 != 0x69506f64) goto LAB_100248115;
    iVar2 = (uint)(0x7f < param_3) * 5 + 0x112f0001;
  }
LAB_100248075:
  FUN_1001c334a(param_1,iVar2);
  return param_1;
}

