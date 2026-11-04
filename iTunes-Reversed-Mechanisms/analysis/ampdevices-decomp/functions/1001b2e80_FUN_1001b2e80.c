// name: FUN_1001b2e80
// address: 1001b2e80

undefined4 * FUN_1001b2e80(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0cd3(uVar4);
    }
  }
  else {
    lVar2 = _CGBitmapContextCreateImage(*(undefined8 *)(*param_3 + 8));
    if (lVar2 != 0) {
      pvVar3 = operator_new(0x80,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar3 != (void *)0x0) {
        FUN_1001b3536((int)*(undefined8 *)(*param_3 + 0x98),pvVar3,lVar2);
      }
      FUN_1001b4d2e(&local_38,pvVar3);
      FUN_10017060f(lVar2);
      goto LAB_1001b2f3f;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0c5d(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
LAB_1001b2f3f:
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  return param_1;
}

