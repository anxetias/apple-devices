// name: FUN_10013df56
// address: 10013df56

undefined8 * FUN_10013df56(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  code *local_68;
  char *local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar3 = _objc_autoreleasePoolPush();
  if (DAT_1008c4d40 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10013e753(uVar4);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 != '\0') goto LAB_10013dfac;
  }
  else {
LAB_10013dfac:
    if (*(long *)*param_2 != 0) {
      cVar1 = FUN_1001ee068();
      if (cVar1 == '\0') {
        FUN_10013e200(param_1,DAT_1008c4d40,*(undefined8 *)*param_2);
        goto LAB_10013e10a;
      }
      local_48 = 0;
      uStack_40 = 0;
      iVar2 = FUN_1001e96d3(&local_48,0,0);
      if (iVar2 == 0) {
        local_80 = &local_88;
        local_88 = 0;
        local_78 = 0x4012000000;
        local_70 = FUN_10013e164;
        local_68 = FUN_10013e176;
        local_60 = "";
        FUN_10032f0f2(local_58);
        if (DAT_1008c4d48 == 0) {
          local_38 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(local_38,0x10);
          if (cVar1 != '\0') {
            FUN_10013e7c9(local_38);
          }
          FUN_1001782e9(0,0);
        }
        _dispatch_async(DAT_1008c4d48);
        FUN_1001e9afc(&local_48);
        FUN_1001e9bb5(&local_48);
        FUN_1001a7a9e(param_1,local_80 + 6);
        __Block_object_dispose(&local_88,8);
        FUN_1001a8fac(local_58);
        goto LAB_10013e10a;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10032f0f2(param_1);
LAB_10013e10a:
  _objc_autoreleasePoolPop(uVar3);
  return param_1;
}

